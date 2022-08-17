#include "QDlgLogin.h"
#include "QDlgRegister.h"
#include "QDlgPwd.h"
#include <qdebug.h>

QDlgLogin::QDlgLogin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.lineEditPassword->setEchoMode(QLineEdit::Password);
	//���ù̶���С
	this->setFixedSize(600, 251);
	this->setWindowTitle("�豸�������ڹ���ϵͳ-��¼");

	ui.comboBoxUsername->setFocus();
	QPalette pal = ui.labelTips->palette();
	pal.setColor(QPalette::WindowText, Qt::red);
	ui.labelTips->setPalette(pal);

	openDatabase();

	initComobox();

}

//�����ݿ�
void QDlgLogin::openDatabase()
{
	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("db_plm");
	db.setUserName("root");
	db.setPassword("123456");
	if (!db.open())
	{
		QMessageBox::warning(this, "����", db.lastError().text());
	}
}

//��¼��ť
void QDlgLogin::on_btnLogin_clicked()
{
	QSqlQuery qry_upd;
	//1. ��ȡtb_user���еĸ�����Ϣ
	QSqlQuery qry_sel;
	qry_sel.prepare("select * from tb_user");
	//2. ��ȡ�û�������û�����������Ϣ
	QString username = ui.comboBoxUsername->currentText();
	QString pwd = ui.lineEditPassword->text();
	//3. ����������Ϣ �ж��û��������Ƿ���ȷ
	if (username == NULL || pwd == NULL)
	{
		ui.labelTips->setText("�û��������벻��Ϊ�գ�");
	}
	else
	{
		if (qry_sel.exec())
		{
			qDebug() << "select * from tb_user  ִ�гɹ���" << endl;
			while (qry_sel.next())
			{
				if (qry_sel.value(1).toString() == username && qry_sel.value(2).toString() == pwd)
				{
					qDebug() << qry_sel.value(1).toString() << username << endl;
					qDebug() << qry_sel.value(2).toString() << pwd << endl;

					//��ס���밴ť
					int status = 0;
					if (ui.checkBoxRemeber->isChecked())
					{
						status = 1;
					}
					qry_upd.prepare("update tb_user set status = :status where username = :username");
					qry_upd.bindValue(":status", status);
					qry_upd.bindValue(":username", username);
					if (qry_upd.exec())
					{
						qDebug() << qry_upd.lastQuery() << "ִ�гɹ���";
					}
					else
					{
						qDebug() << qry_upd.lastError();
					}
					accept();
					break;
				}
			}
			ui.labelTips->setText("�û����������������");
		}
		else
		{
			qDebug() << "select * from tb_user\t" << qry_sel.lastError() << endl;
		}
	}


}


void QDlgLogin::on_comboBoxUsername_currentTextChanged(QString username)
{
	//�ı��仯ʱ ÿ�ζ�ִ��һ�β�ѯ���ݿ��ұ��� ��������ʱ �ȽϺ�ʱ

	if (ui.comboBoxUsername->currentText() == "")
	{
		ui.lineEditPassword->clear();
		ui.checkBoxRemeber->setChecked(false);
	}

	QSqlQuery qry_sel;
	qry_sel.prepare("select * from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "ִ�гɹ���";

		while (qry_sel.next())
		{
			if (qry_sel.value(1).toString() == username && qry_sel.value(3).toInt() == 1)
			{
				ui.lineEditPassword->setText(qry_sel.value(2).toString());
				ui.checkBoxRemeber->setChecked(qry_sel.value(3).toInt());
				break;
			}
		}
	}
	else
	{
		qDebug() << qry_sel.lastError();
	}
}


//��ʼ�������б�
void QDlgLogin::initComobox()
{
	QSqlQuery qry_sel;
	qry_sel.prepare("select * from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "ִ�гɹ���";
		while (qry_sel.next())
		{
			if ( qry_sel.value(3).toInt() == 1)
			{
				ui.comboBoxUsername->addItem(qry_sel.value(1).toString());
			}
		}
	}
	else
	{
		qDebug() << qry_sel.lastError();
	}
}


//ע�ᰴť
void QDlgLogin::on_btnRegister_clicked()
{
	QDlgRegister dlgReg = new QDlgRegister(this);
	dlgReg.exec();
}

//��������
void QDlgLogin::on_btnForgetPwd_clicked()
{
	QDlgPwd dlgPwd = new QDlgPwd(this);
	dlgPwd.exec();
}

QDlgLogin::~QDlgLogin()
{
}

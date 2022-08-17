#include "QDlgRegister.h"
#include "QDlgLogin.h"
#include <QLineEdit.h>
#include <QSqlQuery.h>

QDlgRegister::QDlgRegister(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.lineEditPwd->setEchoMode(QLineEdit::Password);
	ui.lineEditPwd2->setEchoMode(QLineEdit::Password);
	this->resize(270, 325);
	this->setGeometry(800, 300, 270, 325);
	this->setWindowTitle("�豸�������ڹ���ϵͳ-ע��");
	//�����ݿ� 
	openDatabase();

	QPalette pal = ui.labelWarning->palette();
	pal.setColor(QPalette::WindowText, Qt::red);
	ui.labelWarning->setPalette(pal);
}

//�����ݿ�
void QDlgRegister::openDatabase()
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

//ע�ᰴť
void QDlgRegister::on_btnReg_clicked()
{
	//��ȡ�û����������
	QString username = ui.lineEditUername->text();
	QString pwd = ui.lineEditPwd->text();
	QString pwd2 = ui.lineEditPwd2->text();
	QString schQues = ui.comboBoxSchool->currentText();
	QString schAns = ui.lineEditSchool->text();
	QString parQues = ui.comboBoxParent->currentText();
	QString parAns = ui.lineEditParent->text();
	QString favQues = ui.comboBoxFavourite->currentText();
	QString favAns = ui.lineEditFavourite->text();
	//�ж������Ƿ�Ϊ��
	if (username == NULL || pwd == NULL || pwd2 == NULL || schAns == NULL || parAns == NULL || favAns == NULL)
	{
		ui.labelWarning->setText("���벻��Ϊ��!");
		ui.btnReg->setEnabled(false);
	}
	else
	{
		ui.labelWarning->setText("");
		ui.btnReg->setEnabled(false);

		//���ݿ����
		//QString qry_ins = QString::asprintf("insert into tb_user(id, username, pwd) value(null, %s, %s)", username, pwd);
		//QString qry_sel = QString::asprintf("select id from tb_user where username = ")
		QSqlQuery qry_ins;
		qry_ins.prepare("insert into tb_user(id, username, pwd) value (null, :username, :pwd)");
		qry_ins.bindValue(":username", username);
		qry_ins.bindValue(":pwd", pwd);
		if (qry_ins.exec())
		{
			QSqlQuery qry_sel;
			qry_sel.prepare("select id from tb_user where username = :username");
			qry_sel.bindValue(":username", username);
			if (qry_sel.exec())
			{
				qry_sel.next();
				QString userId = qry_sel.value("id").toString();
				qry_ins.clear();
				qry_ins.prepare("insert into tb_validinfo(id, schInfo, parInfo, favInfo, userId) value(null, :schInfo, :parInfo, :favInfo, :userId)");
				QString schInfo = schQues + schAns;
				QString parInfo = parQues + parAns;
				QString favInfo = favQues + favAns;
				qry_ins.bindValue(":schInfo", schInfo);
				qry_ins.bindValue(":parInfo", parInfo);
				qry_ins.bindValue(":favInfo", favInfo);
				qry_ins.bindValue(":userId", userId);
				if (!qry_ins.exec())
				{
					qDebug()<< qry_ins.lastQuery() << qry_ins.lastError();
				}
				else
				{
					QMessageBox::information(this, "ע��ɹ���", "ע��ɹ�!");
					this->close();
				}

			}
			else
			{
				qDebug()<< qry_sel.lastQuery() << qry_sel.lastError();
			}
		}
		else
		{
			qDebug() << qry_ins.lastQuery() << qry_ins.lastError();
		}
	}
	db.close();
}

//��������Ƿ�һ��
void QDlgRegister::on_lineEditPwd2_textChanged()
{
	QString pwd = ui.lineEditPwd->text();
	QString pwd2 = ui.lineEditPwd2->text();

	if (pwd2 != pwd)
	{
		ui.labelWarning->setText("���벻һ��");
		ui.btnReg->setEnabled(false);
	}
	else
	{
		ui.labelWarning->setText("");
		ui.btnReg->setEnabled(true);
	}
}

//����û����Ƿ��ظ�
void QDlgRegister::on_lineEditUername_textChanged(QString username)
{
	QSqlQuery qry_sel;
	qry_sel.prepare("select username from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "ִ�гɹ���";

		while (qry_sel.next())
		{
			if (qry_sel.value(0).toString() == username)
			{
				ui.labelWarning->setText("�û����ظ���");
			}
		}
	}
	else
	{
		qDebug() << qry_sel.lastError();
	}
}

//ȡ����ť
void QDlgRegister::on_btnCancel_clicked()
{
}


QDlgRegister::~QDlgRegister()
{}

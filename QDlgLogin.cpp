#include "QDlgLogin.h"
#include "QDlgRegister.h"
#include "QDlgPwd.h"
#include <qdebug.h>

QDlgLogin::QDlgLogin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.lineEditPassword->setEchoMode(QLineEdit::Password);
	//设置固定大小
	this->setFixedSize(600, 251);
	this->setWindowTitle("设备生命周期管理系统-登录");

	ui.comboBoxUsername->setFocus();
	QPalette pal = ui.labelTips->palette();
	pal.setColor(QPalette::WindowText, Qt::red);
	ui.labelTips->setPalette(pal);

	openDatabase();

	initComobox();

}

//打开数据库
void QDlgLogin::openDatabase()
{
	db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("localhost");
	db.setDatabaseName("db_plm");
	db.setUserName("root");
	db.setPassword("123456");
	if (!db.open())
	{
		QMessageBox::warning(this, "警告", db.lastError().text());
	}
}

//登录按钮
void QDlgLogin::on_btnLogin_clicked()
{
	QSqlQuery qry_upd;
	//1. 获取tb_user表中的各项信息
	QSqlQuery qry_sel;
	qry_sel.prepare("select * from tb_user");
	//2. 获取用户输入的用户名和密码信息
	QString username = ui.comboBoxUsername->currentText();
	QString pwd = ui.lineEditPassword->text();
	//3. 遍历表中信息 判断用户名密码是否正确
	if (username == NULL || pwd == NULL)
	{
		ui.labelTips->setText("用户名或密码不能为空！");
	}
	else
	{
		if (qry_sel.exec())
		{
			qDebug() << "select * from tb_user  执行成功！" << endl;
			while (qry_sel.next())
			{
				if (qry_sel.value(1).toString() == username && qry_sel.value(2).toString() == pwd)
				{
					qDebug() << qry_sel.value(1).toString() << username << endl;
					qDebug() << qry_sel.value(2).toString() << pwd << endl;

					//记住密码按钮
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
						qDebug() << qry_upd.lastQuery() << "执行成功！";
					}
					else
					{
						qDebug() << qry_upd.lastError();
					}
					accept();
					break;
				}
			}
			ui.labelTips->setText("用户名或密码输入错误！");
		}
		else
		{
			qDebug() << "select * from tb_user\t" << qry_sel.lastError() << endl;
		}
	}


}


void QDlgLogin::on_comboBoxUsername_currentTextChanged(QString username)
{
	//文本变化时 每次都执行一次查询数据库且遍历 数据量大时 比较耗时

	if (ui.comboBoxUsername->currentText() == "")
	{
		ui.lineEditPassword->clear();
		ui.checkBoxRemeber->setChecked(false);
	}

	QSqlQuery qry_sel;
	qry_sel.prepare("select * from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "执行成功！";

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


//初始化下拉列表
void QDlgLogin::initComobox()
{
	QSqlQuery qry_sel;
	qry_sel.prepare("select * from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "执行成功！";
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


//注册按钮
void QDlgLogin::on_btnRegister_clicked()
{
	QDlgRegister dlgReg = new QDlgRegister(this);
	dlgReg.exec();
}

//忘记密码
void QDlgLogin::on_btnForgetPwd_clicked()
{
	QDlgPwd dlgPwd = new QDlgPwd(this);
	dlgPwd.exec();
}

QDlgLogin::~QDlgLogin()
{
}

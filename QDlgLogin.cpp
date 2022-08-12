#include "QDlgLogin.h"
#include "QDlgRegister.h"

QDlgLogin::QDlgLogin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.lineEditPassword->setEchoMode(QLineEdit::Password);
	//设置固定大小
	this->setFixedSize(600, 251);
	this->setWindowTitle("设备生命周期管理系统-登录");

	ui.lineEditUsername->setFocus();

	openDatabase();

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
//打开数据表
void QDlgLogin::openTable(QString tableName)
{

}

//注册按钮
void QDlgLogin::on_btnRegister_clicked()
{
	QDlgRegister dlgReg = new QDlgRegister(this);
	//if (dlgReg.exec() == QDialog::Accepted)
	//{

	//}
	dlgReg.exec();
}

QDlgLogin::~QDlgLogin()
{}

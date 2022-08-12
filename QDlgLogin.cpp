#include "QDlgLogin.h"
#include "QDlgRegister.h"

QDlgLogin::QDlgLogin(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	ui.lineEditPassword->setEchoMode(QLineEdit::Password);
	//���ù̶���С
	this->setFixedSize(600, 251);
	this->setWindowTitle("�豸�������ڹ���ϵͳ-��¼");

	ui.lineEditUsername->setFocus();

	openDatabase();

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
//�����ݱ�
void QDlgLogin::openTable(QString tableName)
{

}

//ע�ᰴť
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

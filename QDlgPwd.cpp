#include "QDlgPwd.h"
#pragma execution_character_set("utf-8") 

QDlgPwd::QDlgPwd(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setGeometry(800, 300, 270, 325);
	this->setWindowTitle("设备生命周期管理系统-找回密码");

	QPalette pal = ui.labelTips->palette();
	pal.setColor(QPalette::WindowText, Qt::red);
	ui.labelTips->setPalette(pal);
	ui.lineEditPwd1->setEchoMode(QLineEdit::Password);
	ui.lineEditPwd2->setEchoMode(QLineEdit::Password);


	initWidget();

}

//打开数据库
void QDlgPwd::openDatabase()
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

void QDlgPwd::initWidget()
{
	ui.labelTips->setText("");
	ui.labelQues1->setText("");
	ui.labelQues2->setText("");
	ui.labelQues3->setText("");
	ui.lineEditAns1->setText("");
	ui.lineEditAns2->setText("");
	ui.lineEditAns3->setText("");
	ui.lineEditPwd1->setText("");
	ui.lineEditPwd2->setText("");
	ui.groupBoxValidInfo->setEnabled(false);
	ui.groupBoxUpdPwd->setEnabled(false);
}

void QDlgPwd::on_lineEditUsername_textChanged(QString username)
{
	if (ui.lineEditUsername->text() == "")
	{
		initWidget();
	}
	QSqlQuery qry_sel;
	QSqlQuery qry_sel2;
	QString firstQuestion;
	QString secondQuestion;
	QString thirdQuestion;
	QString firstAns;
	QString secondAns;
	QString thirdAns;
	qry_sel.prepare("select * from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "执行成功！";
		int flag = 0;
		while (qry_sel.next())
		{
			if (qry_sel.value(1).toString() == username)
			{
				int userId = qry_sel.value(0).toInt();
				flag = 1;
				qry_sel2.prepare("select * from tb_validinfo where userId = :userId");
				qry_sel2.bindValue(":userId", userId);
				qDebug() << userId;
				if (qry_sel2.exec())
				{
					qry_sel2.next();
					qDebug() << qry_sel2.lastQuery() << "执行成功！";
					qDebug() << qry_sel2.value(1).toString().split("？")[0];
					qDebug() << qry_sel2.value(2).toString();
					qDebug() << qry_sel2.value(3).toString();
					ui.labelQues1->setText(qry_sel2.value(1).toString().split("？")[0] + ":");
					ui.labelQues2->setText(qry_sel2.value(2).toString().split("？")[0] + ":");
					ui.labelQues3->setText(qry_sel2.value(3).toString().split("？")[0] + ":");
					ui.pushButtonUpd->setEnabled(true);
					ui.groupBoxValidInfo->setEnabled(true);
					ui.groupBoxUpdPwd->setEnabled(true);
				}
				else
				{
					qDebug() << qry_sel2.lastError();
				}
				break;
			}
		}
		if (!flag && ui.lineEditUsername->text() != "")
		{
			initWidget();
			ui.labelTips->setText("查无此人!");
		}
	}
	else
	{
		qDebug() << qry_sel.lastError();
	}
}

void QDlgPwd::on_pushButtonUpd_clicked()
{

	QSqlQuery qry_sel;
	QSqlQuery qry_sel2;
	QSqlQuery qry_upd;
	QString firstQuestion;
	QString secondQuestion;
	QString thirdQuestion;
	QString firstAns;
	QString secondAns;
	QString thirdAns;
	qry_sel.prepare("select * from tb_user");
	if (qry_sel.exec())
	{
		qDebug() << qry_sel.lastQuery() << "执行成功！";
		while (qry_sel.next())
		{
			if (qry_sel.value(1).toString() == ui.lineEditUsername->text())
			{
				int userId = qry_sel.value(0).toInt();
				qry_sel2.prepare("select * from tb_validinfo where userId = :userId");
				qry_sel2.bindValue(":userId", userId);
				if (qry_sel2.exec())
				{
					qry_sel2.next();
					qDebug() << qry_sel2.lastQuery() << "执行成功！";
					firstAns = qry_sel2.value(1).toString().split("？")[1];
					secondAns = qry_sel2.value(2).toString().split("？")[1];
					thirdAns = qry_sel2.value(3).toString().split("？")[1];
					if (ui.lineEditAns1->text() == firstAns && ui.lineEditAns2->text() == secondAns && ui.lineEditAns3->text() == thirdAns)
					{
						QString updatePwd = ui.lineEditPwd2->text();
						qry_upd.prepare("update tb_user set pwd = :pwd where username = :username");
						qry_upd.bindValue(":pwd", updatePwd);
						qry_upd.bindValue(":username", ui.lineEditUsername->text());
						if (qry_upd.exec())
						{
							qDebug() << qry_upd.lastQuery() << "执行成功!";
							QMessageBox::information(this, "修改密码", "修改成功！");
							this->close();
						}
						else
						{
							qDebug() << qry_upd.lastError();
						}

					}
					else
					{
						if (ui.lineEditAns1->text() != firstAns)
						{
							ui.labelTips->setText("问题一回答错误！");
						}
						if (ui.lineEditAns2->text() != secondAns)
						{
							ui.labelTips->setText("问题二回答错误！");
						}
						if (ui.lineEditAns3->text() != thirdAns)
						{
							ui.labelTips->setText("问题二回答错误！");
						}
					}
				}
				else
				{
					qDebug() << qry_sel2.lastError();
				}
				break;
			}
		}
	}
	else
	{
		qDebug() << qry_sel.lastError();
	}
}

//检测密码是否一致
void QDlgPwd::on_lineEditPwd2_textChanged()
{
	QString pwd = ui.lineEditPwd1->text();
	QString pwd2 = ui.lineEditPwd2->text();

	if (pwd2 != pwd)
	{
		ui.labelTips->setText("密码不一致");
		ui.pushButtonUpd->setEnabled(false);
	}
	else
	{
		ui.labelTips->setText("");
		ui.pushButtonUpd->setEnabled(true);
	}
}


QDlgPwd::~QDlgPwd()
{}

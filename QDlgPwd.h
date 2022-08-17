#pragma once

#include <QDialog>
#include "ui_QDlgPwd.h"
#include "ui_QDlgRegister.h"
#include <QtSql/QSqlDatabase>	// 连接数据库
#include <QtSql/QSqlError>		// 数据库连接失败打印报错语句
#include <QtSql/QSqlQuery>		// 数据库操作（增删改查）
#include <QMessageBox>
#include <QDebug>

class QDlgPwd : public QDialog
{
	Q_OBJECT
private:
	QSqlDatabase db;
	void openDatabase();
	void initWidget();
	

private slots:
	void on_lineEditUsername_textChanged(QString username);
	void on_pushButtonUpd_clicked();
	void on_lineEditPwd2_textChanged();

public:
	QDlgPwd(QWidget *parent = nullptr);
	~QDlgPwd();

private:
	Ui::QDlgPwdClass ui;
};

#pragma once

#include <QDialog>
#include "ui_QDlgLogin.h"
#include <QtSql/QSqlDatabase>	// 连接数据库
#include <QtSql/QSqlError>		// 数据库连接失败打印报错语句
#include <QtSql/QSqlQuery>		// 数据库操作（增删改查）
#include <QMessageBox>
#include <QDebug>
#pragma execution_character_set("utf-8") 

class QDlgLogin : public QDialog
{
	Q_OBJECT
private:
	//数据库对象
	QSqlDatabase db;
	//打开数据库
	void openDatabase();
	//打开数据表
	void openTable(QString tableName);

private slots:
	//注册按钮
	void on_btnRegister_clicked();

public:
	QDlgLogin(QWidget *parent = nullptr);
	~QDlgLogin();

private:
	Ui::QDlgLoginClass ui;
};

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

	//存储用户信息
	QString savedUsername;
	QString savedPwd;
	bool saved = false;
	
	//打开数据库
	void openDatabase();

	//初始化下拉列表
	void initComobox();

private slots:
	//注册按钮
	void on_btnRegister_clicked();

	//登录按钮
	void on_btnLogin_clicked();

	//忘记密码
	void on_btnForgetPwd_clicked();

	//记住密码
	void on_comboBoxUsername_currentTextChanged(QString username);

signals:
	//用于判断登录是否成功的信号
	//void login_correct();

public:
	QDlgLogin(QWidget *parent = nullptr);
	~QDlgLogin();

private:
	Ui::QDlgLoginClass ui;
};

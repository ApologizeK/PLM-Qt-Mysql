#pragma once

#include <QDialog>
#include "ui_QDlgRegister.h"
#include <QtSql/QSqlDatabase>	// 连接数据库
#include <QtSql/QSqlError>		// 数据库连接失败打印报错语句
#include <QtSql/QSqlQuery>		// 数据库操作（增删改查）
#include <QMessageBox>
#include <QDebug>

class QDlgRegister : public QDialog
{
	Q_OBJECT
private:
	QSqlDatabase db;
	void openDatabase();
private slots:
	//注册按钮
	void on_btnReg_clicked();
	//取消按钮
	void on_btnCancel_clicked();
	//检测密码是否一致
	void on_lineEditPwd2_textChanged();

public:
	QDlgRegister(QWidget *parent = nullptr);
	~QDlgRegister();

private:
	Ui::QDlgRegisterClass ui;
};

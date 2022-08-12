#pragma once

#include <QDialog>
#include "ui_QDlgLogin.h"
#include <QtSql/QSqlDatabase>	// �������ݿ�
#include <QtSql/QSqlError>		// ���ݿ�����ʧ�ܴ�ӡ�������
#include <QtSql/QSqlQuery>		// ���ݿ��������ɾ�Ĳ飩
#include <QMessageBox>
#include <QDebug>
#pragma execution_character_set("utf-8") 

class QDlgLogin : public QDialog
{
	Q_OBJECT
private:
	//���ݿ����
	QSqlDatabase db;
	//�����ݿ�
	void openDatabase();
	//�����ݱ�
	void openTable(QString tableName);

private slots:
	//ע�ᰴť
	void on_btnRegister_clicked();

public:
	QDlgLogin(QWidget *parent = nullptr);
	~QDlgLogin();

private:
	Ui::QDlgLoginClass ui;
};

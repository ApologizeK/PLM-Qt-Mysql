#pragma once

#include <QDialog>
#include "ui_QDlgPwd.h"
#include "ui_QDlgRegister.h"
#include <QtSql/QSqlDatabase>	// �������ݿ�
#include <QtSql/QSqlError>		// ���ݿ�����ʧ�ܴ�ӡ�������
#include <QtSql/QSqlQuery>		// ���ݿ��������ɾ�Ĳ飩
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

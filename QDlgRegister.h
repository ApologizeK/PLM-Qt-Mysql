#pragma once

#include <QDialog>
#include "ui_QDlgRegister.h"
#include <QtSql/QSqlDatabase>	// �������ݿ�
#include <QtSql/QSqlError>		// ���ݿ�����ʧ�ܴ�ӡ�������
#include <QtSql/QSqlQuery>		// ���ݿ��������ɾ�Ĳ飩
#include <QMessageBox>
#include <QDebug>

class QDlgRegister : public QDialog
{
	Q_OBJECT
private:
	QSqlDatabase db;
	void openDatabase();
private slots:
	//ע�ᰴť
	void on_btnReg_clicked();
	//ȡ����ť
	void on_btnCancel_clicked();
	//��������Ƿ�һ��
	void on_lineEditPwd2_textChanged();

public:
	QDlgRegister(QWidget *parent = nullptr);
	~QDlgRegister();

private:
	Ui::QDlgRegisterClass ui;
};

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

	//�洢�û���Ϣ
	QString savedUsername;
	QString savedPwd;
	bool saved = false;
	
	//�����ݿ�
	void openDatabase();

	//��ʼ�������б�
	void initComobox();

private slots:
	//ע�ᰴť
	void on_btnRegister_clicked();

	//��¼��ť
	void on_btnLogin_clicked();

	//��������
	void on_btnForgetPwd_clicked();

	//��ס����
	void on_comboBoxUsername_currentTextChanged(QString username);

signals:
	//�����жϵ�¼�Ƿ�ɹ����ź�
	//void login_correct();

public:
	QDlgLogin(QWidget *parent = nullptr);
	~QDlgLogin();

private:
	Ui::QDlgLoginClass ui;
};

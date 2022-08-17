/********************************************************************************
** Form generated from reading UI file 'QDlgLogin.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGLOGIN_H
#define UI_QDLGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDlgLoginClass
{
public:
    QSplitter *splitter;
    QLabel *label;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *labelUsername;
    QLineEdit *lineEditPassword;
    QPushButton *btnForgetPwd;
    QPushButton *btnRegister;
    QCheckBox *checkBoxRemeber;
    QLabel *labelPassword;
    QPushButton *btnLogin;
    QLabel *labelTips;
    QComboBox *comboBoxUsername;

    void setupUi(QDialog *QDlgLoginClass)
    {
        if (QDlgLoginClass->objectName().isEmpty())
            QDlgLoginClass->setObjectName(QStringLiteral("QDlgLoginClass"));
        QDlgLoginClass->resize(814, 264);
        splitter = new QSplitter(QDlgLoginClass);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(0, 10, 551, 251));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/images/preview.jpg")));
        label->setScaledContents(true);
        splitter->addWidget(label);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        labelUsername = new QLabel(layoutWidget);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        gridLayout->addWidget(labelUsername, 1, 0, 1, 1);

        lineEditPassword = new QLineEdit(layoutWidget);
        lineEditPassword->setObjectName(QStringLiteral("lineEditPassword"));

        gridLayout->addWidget(lineEditPassword, 2, 1, 1, 3);

        btnForgetPwd = new QPushButton(layoutWidget);
        btnForgetPwd->setObjectName(QStringLiteral("btnForgetPwd"));
        btnForgetPwd->setAutoExclusive(false);

        gridLayout->addWidget(btnForgetPwd, 3, 2, 1, 1);

        btnRegister = new QPushButton(layoutWidget);
        btnRegister->setObjectName(QStringLiteral("btnRegister"));

        gridLayout->addWidget(btnRegister, 3, 3, 1, 1);

        checkBoxRemeber = new QCheckBox(layoutWidget);
        checkBoxRemeber->setObjectName(QStringLiteral("checkBoxRemeber"));

        gridLayout->addWidget(checkBoxRemeber, 3, 1, 1, 1);

        labelPassword = new QLabel(layoutWidget);
        labelPassword->setObjectName(QStringLiteral("labelPassword"));

        gridLayout->addWidget(labelPassword, 2, 0, 1, 1);

        btnLogin = new QPushButton(layoutWidget);
        btnLogin->setObjectName(QStringLiteral("btnLogin"));

        gridLayout->addWidget(btnLogin, 4, 1, 1, 3);

        labelTips = new QLabel(layoutWidget);
        labelTips->setObjectName(QStringLiteral("labelTips"));
        labelTips->setMinimumSize(QSize(0, 20));
        labelTips->setMaximumSize(QSize(16777215, 15));

        gridLayout->addWidget(labelTips, 0, 0, 1, 4);

        comboBoxUsername = new QComboBox(layoutWidget);
        comboBoxUsername->setObjectName(QStringLiteral("comboBoxUsername"));
        comboBoxUsername->setEditable(true);

        gridLayout->addWidget(comboBoxUsername, 1, 1, 1, 3);

        splitter->addWidget(layoutWidget);

        retranslateUi(QDlgLoginClass);

        QMetaObject::connectSlotsByName(QDlgLoginClass);
    } // setupUi

    void retranslateUi(QDialog *QDlgLoginClass)
    {
        QDlgLoginClass->setWindowTitle(QApplication::translate("QDlgLoginClass", "QDlgLogin", Q_NULLPTR));
        label->setText(QString());
        labelUsername->setText(QApplication::translate("QDlgLoginClass", "\347\224\250\346\210\267\345\220\215\357\274\232", Q_NULLPTR));
        btnForgetPwd->setText(QApplication::translate("QDlgLoginClass", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        btnRegister->setText(QApplication::translate("QDlgLoginClass", "\346\263\250\345\206\214\350\264\246\345\217\267", Q_NULLPTR));
        checkBoxRemeber->setText(QApplication::translate("QDlgLoginClass", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        labelPassword->setText(QApplication::translate("QDlgLoginClass", "\345\257\206\347\240\201\357\274\232", Q_NULLPTR));
        btnLogin->setText(QApplication::translate("QDlgLoginClass", "\347\231\273\345\275\225", Q_NULLPTR));
        labelTips->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QDlgLoginClass: public Ui_QDlgLoginClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGLOGIN_H

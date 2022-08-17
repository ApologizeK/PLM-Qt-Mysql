/********************************************************************************
** Form generated from reading UI file 'QDlgPwd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGPWD_H
#define UI_QDLGPWD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QDlgPwdClass
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBoxTip;
    QGridLayout *gridLayout_3;
    QLabel *labelTips;
    QLabel *labelUsername;
    QLineEdit *lineEditUsername;
    QGroupBox *groupBoxValidInfo;
    QGridLayout *gridLayout;
    QLabel *labelQues1;
    QLineEdit *lineEditAns1;
    QLabel *labelQues2;
    QLineEdit *lineEditAns2;
    QLabel *labelQues3;
    QLineEdit *lineEditAns3;
    QGroupBox *groupBoxUpdPwd;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *lineEditPwd1;
    QLabel *label_2;
    QLineEdit *lineEditPwd2;
    QGridLayout *gridLayout_4;
    QPushButton *pushButtonUpd;
    QPushButton *pushButtonCancel;

    void setupUi(QDialog *QDlgPwdClass)
    {
        if (QDlgPwdClass->objectName().isEmpty())
            QDlgPwdClass->setObjectName(QStringLiteral("QDlgPwdClass"));
        QDlgPwdClass->resize(421, 424);
        QDlgPwdClass->setMinimumSize(QSize(400, 400));
        verticalLayout = new QVBoxLayout(QDlgPwdClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBoxTip = new QGroupBox(QDlgPwdClass);
        groupBoxTip->setObjectName(QStringLiteral("groupBoxTip"));
        gridLayout_3 = new QGridLayout(groupBoxTip);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        labelTips = new QLabel(groupBoxTip);
        labelTips->setObjectName(QStringLiteral("labelTips"));
        labelTips->setMaximumSize(QSize(16777215, 15));

        gridLayout_3->addWidget(labelTips, 0, 0, 1, 2);

        labelUsername = new QLabel(groupBoxTip);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));
        labelUsername->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(labelUsername, 1, 0, 1, 1);

        lineEditUsername = new QLineEdit(groupBoxTip);
        lineEditUsername->setObjectName(QStringLiteral("lineEditUsername"));

        gridLayout_3->addWidget(lineEditUsername, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBoxTip);

        groupBoxValidInfo = new QGroupBox(QDlgPwdClass);
        groupBoxValidInfo->setObjectName(QStringLiteral("groupBoxValidInfo"));
        gridLayout = new QGridLayout(groupBoxValidInfo);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelQues1 = new QLabel(groupBoxValidInfo);
        labelQues1->setObjectName(QStringLiteral("labelQues1"));
        labelQues1->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(labelQues1, 0, 0, 1, 1);

        lineEditAns1 = new QLineEdit(groupBoxValidInfo);
        lineEditAns1->setObjectName(QStringLiteral("lineEditAns1"));

        gridLayout->addWidget(lineEditAns1, 0, 1, 1, 1);

        labelQues2 = new QLabel(groupBoxValidInfo);
        labelQues2->setObjectName(QStringLiteral("labelQues2"));
        labelQues2->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(labelQues2, 1, 0, 1, 1);

        lineEditAns2 = new QLineEdit(groupBoxValidInfo);
        lineEditAns2->setObjectName(QStringLiteral("lineEditAns2"));

        gridLayout->addWidget(lineEditAns2, 1, 1, 1, 1);

        labelQues3 = new QLabel(groupBoxValidInfo);
        labelQues3->setObjectName(QStringLiteral("labelQues3"));
        labelQues3->setMinimumSize(QSize(150, 0));

        gridLayout->addWidget(labelQues3, 2, 0, 1, 1);

        lineEditAns3 = new QLineEdit(groupBoxValidInfo);
        lineEditAns3->setObjectName(QStringLiteral("lineEditAns3"));

        gridLayout->addWidget(lineEditAns3, 2, 1, 1, 1);


        verticalLayout->addWidget(groupBoxValidInfo);

        groupBoxUpdPwd = new QGroupBox(QDlgPwdClass);
        groupBoxUpdPwd->setObjectName(QStringLiteral("groupBoxUpdPwd"));
        gridLayout_2 = new QGridLayout(groupBoxUpdPwd);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        label = new QLabel(groupBoxUpdPwd);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        lineEditPwd1 = new QLineEdit(groupBoxUpdPwd);
        lineEditPwd1->setObjectName(QStringLiteral("lineEditPwd1"));

        gridLayout_2->addWidget(lineEditPwd1, 0, 1, 1, 1);

        label_2 = new QLabel(groupBoxUpdPwd);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(150, 0));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        lineEditPwd2 = new QLineEdit(groupBoxUpdPwd);
        lineEditPwd2->setObjectName(QStringLiteral("lineEditPwd2"));

        gridLayout_2->addWidget(lineEditPwd2, 1, 1, 1, 1);


        verticalLayout->addWidget(groupBoxUpdPwd);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        pushButtonUpd = new QPushButton(QDlgPwdClass);
        pushButtonUpd->setObjectName(QStringLiteral("pushButtonUpd"));

        gridLayout_4->addWidget(pushButtonUpd, 0, 0, 1, 1);

        pushButtonCancel = new QPushButton(QDlgPwdClass);
        pushButtonCancel->setObjectName(QStringLiteral("pushButtonCancel"));

        gridLayout_4->addWidget(pushButtonCancel, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);


        retranslateUi(QDlgPwdClass);

        QMetaObject::connectSlotsByName(QDlgPwdClass);
    } // setupUi

    void retranslateUi(QDialog *QDlgPwdClass)
    {
        QDlgPwdClass->setWindowTitle(QApplication::translate("QDlgPwdClass", "QDlgPwd", Q_NULLPTR));
        groupBoxTip->setTitle(QString());
        labelTips->setText(QString());
        labelUsername->setText(QApplication::translate("QDlgPwdClass", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        groupBoxValidInfo->setTitle(QApplication::translate("QDlgPwdClass", "\345\241\253\345\206\231\351\252\214\350\257\201\344\277\241\346\201\257", Q_NULLPTR));
        labelQues1->setText(QString());
        labelQues2->setText(QString());
        labelQues3->setText(QString());
        groupBoxUpdPwd->setTitle(QApplication::translate("QDlgPwdClass", "\344\277\256\346\224\271\345\257\206\347\240\201", Q_NULLPTR));
        label->setText(QApplication::translate("QDlgPwdClass", "\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("QDlgPwdClass", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        pushButtonUpd->setText(QApplication::translate("QDlgPwdClass", "\344\277\256\346\224\271", Q_NULLPTR));
        pushButtonCancel->setText(QApplication::translate("QDlgPwdClass", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDlgPwdClass: public Ui_QDlgPwdClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGPWD_H

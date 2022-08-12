/********************************************************************************
** Form generated from reading UI file 'QDlgRegister.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QDLGREGISTER_H
#define UI_QDLGREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QDlgRegisterClass
{
public:
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QComboBox *comboBoxParent;
    QLabel *labelWarning;
    QLabel *labelUsername;
    QLabel *labelPwd;
    QLineEdit *lineEditSchool;
    QComboBox *comboBoxFavourite;
    QLineEdit *lineEditUername;
    QLineEdit *lineEditPwd;
    QComboBox *comboBoxSchool;
    QLabel *labelPwd2;
    QLineEdit *lineEditFavourite;
    QLineEdit *lineEditParent;
    QLineEdit *lineEditPwd2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *btnReg;
    QPushButton *btnCancel;

    void setupUi(QDialog *QDlgRegisterClass)
    {
        if (QDlgRegisterClass->objectName().isEmpty())
            QDlgRegisterClass->setObjectName(QStringLiteral("QDlgRegisterClass"));
        QDlgRegisterClass->resize(289, 323);
        verticalLayout = new QVBoxLayout(QDlgRegisterClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        splitter = new QSplitter(QDlgRegisterClass);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        comboBoxParent = new QComboBox(layoutWidget);
        comboBoxParent->setObjectName(QStringLiteral("comboBoxParent"));

        gridLayout->addWidget(comboBoxParent, 4, 0, 1, 2);

        labelWarning = new QLabel(layoutWidget);
        labelWarning->setObjectName(QStringLiteral("labelWarning"));
        labelWarning->setMinimumSize(QSize(200, 20));
        labelWarning->setMaximumSize(QSize(16777215, 30));

        gridLayout->addWidget(labelWarning, 7, 0, 1, 3);

        labelUsername = new QLabel(layoutWidget);
        labelUsername->setObjectName(QStringLiteral("labelUsername"));

        gridLayout->addWidget(labelUsername, 0, 0, 1, 1);

        labelPwd = new QLabel(layoutWidget);
        labelPwd->setObjectName(QStringLiteral("labelPwd"));

        gridLayout->addWidget(labelPwd, 1, 0, 1, 1);

        lineEditSchool = new QLineEdit(layoutWidget);
        lineEditSchool->setObjectName(QStringLiteral("lineEditSchool"));

        gridLayout->addWidget(lineEditSchool, 3, 2, 1, 1);

        comboBoxFavourite = new QComboBox(layoutWidget);
        comboBoxFavourite->setObjectName(QStringLiteral("comboBoxFavourite"));

        gridLayout->addWidget(comboBoxFavourite, 5, 0, 1, 2);

        lineEditUername = new QLineEdit(layoutWidget);
        lineEditUername->setObjectName(QStringLiteral("lineEditUername"));

        gridLayout->addWidget(lineEditUername, 0, 1, 1, 2);

        lineEditPwd = new QLineEdit(layoutWidget);
        lineEditPwd->setObjectName(QStringLiteral("lineEditPwd"));

        gridLayout->addWidget(lineEditPwd, 1, 1, 1, 2);

        comboBoxSchool = new QComboBox(layoutWidget);
        comboBoxSchool->setObjectName(QStringLiteral("comboBoxSchool"));

        gridLayout->addWidget(comboBoxSchool, 3, 0, 1, 2);

        labelPwd2 = new QLabel(layoutWidget);
        labelPwd2->setObjectName(QStringLiteral("labelPwd2"));

        gridLayout->addWidget(labelPwd2, 2, 0, 1, 1);

        lineEditFavourite = new QLineEdit(layoutWidget);
        lineEditFavourite->setObjectName(QStringLiteral("lineEditFavourite"));

        gridLayout->addWidget(lineEditFavourite, 5, 2, 1, 1);

        lineEditParent = new QLineEdit(layoutWidget);
        lineEditParent->setObjectName(QStringLiteral("lineEditParent"));

        gridLayout->addWidget(lineEditParent, 4, 2, 1, 1);

        lineEditPwd2 = new QLineEdit(layoutWidget);
        lineEditPwd2->setObjectName(QStringLiteral("lineEditPwd2"));

        gridLayout->addWidget(lineEditPwd2, 2, 1, 1, 2);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnReg = new QPushButton(layoutWidget1);
        btnReg->setObjectName(QStringLiteral("btnReg"));

        gridLayout_2->addWidget(btnReg, 0, 0, 1, 1);

        btnCancel = new QPushButton(layoutWidget1);
        btnCancel->setObjectName(QStringLiteral("btnCancel"));

        gridLayout_2->addWidget(btnCancel, 0, 1, 1, 1);

        splitter->addWidget(layoutWidget1);

        verticalLayout->addWidget(splitter);


        retranslateUi(QDlgRegisterClass);
        QObject::connect(btnCancel, SIGNAL(clicked()), QDlgRegisterClass, SLOT(close()));

        QMetaObject::connectSlotsByName(QDlgRegisterClass);
    } // setupUi

    void retranslateUi(QDialog *QDlgRegisterClass)
    {
        QDlgRegisterClass->setWindowTitle(QApplication::translate("QDlgRegisterClass", "QDlgRegister", Q_NULLPTR));
        comboBoxParent->clear();
        comboBoxParent->insertItems(0, QStringList()
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\346\257\215\344\272\262\347\232\204\345\247\223\345\220\215\346\230\257\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\347\210\266\344\272\262\347\232\204\345\247\223\345\220\215\346\230\257\357\274\237", Q_NULLPTR)
        );
        labelWarning->setText(QString());
        labelUsername->setText(QApplication::translate("QDlgRegisterClass", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        labelPwd->setText(QApplication::translate("QDlgRegisterClass", "\345\257\206\347\240\201", Q_NULLPTR));
        comboBoxFavourite->clear();
        comboBoxFavourite->insertItems(0, QStringList()
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\346\234\200\345\226\234\346\254\242\347\232\204\344\271\246\345\220\215\346\230\257\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\346\234\200\345\226\234\346\254\242\347\232\204\350\275\246\346\230\257\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\346\234\200\345\226\234\346\254\242\347\232\204\345\256\240\347\211\251\346\230\257\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\346\234\200\345\226\234\346\254\242\347\232\204\350\277\220\345\212\250\346\230\257\357\274\237", Q_NULLPTR)
        );
        comboBoxSchool->clear();
        comboBoxSchool->insertItems(0, QStringList()
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\345\260\217\345\255\246\345\260\261\350\257\273\344\272\216\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\345\210\235\344\270\255\345\260\261\350\257\273\344\272\216\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\351\253\230\344\270\255\345\260\261\350\257\273\344\272\216\357\274\237", Q_NULLPTR)
         << QApplication::translate("QDlgRegisterClass", "\346\202\250\345\244\247\345\255\246\345\260\261\350\257\273\344\272\216\357\274\237", Q_NULLPTR)
        );
        labelPwd2->setText(QApplication::translate("QDlgRegisterClass", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", Q_NULLPTR));
        btnReg->setText(QApplication::translate("QDlgRegisterClass", "\346\263\250\345\206\214", Q_NULLPTR));
        btnCancel->setText(QApplication::translate("QDlgRegisterClass", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QDlgRegisterClass: public Ui_QDlgRegisterClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QDLGREGISTER_H

#include "MainWindow.h"
#include <QtWidgets/QApplication>
#include <QDialog>
#include "QDlgLogin.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    QDlgLogin* dlgLogin = new QDlgLogin;
    if (dlgLogin->exec() == QDialog::Accepted)
    {
        MainWindow w;
        w.show();
        return a.exec();
    }
    else
    {
        return 0;
    }
}

#include <QtGui/QApplication>
#include "widget.h"
#include "logindlg.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    loginDlg login;
    if(login.exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    return 0;
}

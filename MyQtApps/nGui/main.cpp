#include <QtGui/QApplication>
#include "widget.h"
#include "mydlg.h"

//#include "ui_myDlg.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Widget w;
    myDlg *my1 = new myDlg;

    if(my1->exec() == QDialog::Accepted)
    {
        w.show();
        return a.exec();
    }
    else return 0;

}

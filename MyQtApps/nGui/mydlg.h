#ifndef MYDLG_H
#define MYDLG_H
#include <QDialog>
#include "ui_myDlg.h"
namespace Ui {
    class myDlg;
} // namespace Ui


class myDlg:public QDialog
{
    Q_OBJECT
public:
    explicit myDlg(QDialog *parent = 0);
    ~myDlg();

private:
    Ui::myDlg *ui;

};




#endif // MYDLG_H

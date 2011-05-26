#include "mydlg.h"
#include "ui_myDlg.h"


myDlg::myDlg(QDialog *parent) : QDialog(parent),ui(new Ui::myDlg)
{
    ui->setupUi(this);
}

myDlg::~myDlg()
{
    delete ui;
}

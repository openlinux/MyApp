#include "thanksdlg.h"
#include "ui_thanksdlg.h"

ThanksDlg::ThanksDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ThanksDlg)
{
    ui->setupUi(this);
}

ThanksDlg::~ThanksDlg()
{
    delete ui;
}

void ThanksDlg::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

//关闭
void ThanksDlg::on_closeBtn_clicked()
{
    this->close();
}

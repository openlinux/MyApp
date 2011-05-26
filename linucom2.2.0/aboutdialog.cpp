#include "aboutdialog.h"
#include "ui_aboutdialog.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::changeEvent(QEvent *e)
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
void AboutDialog::on_closeBtn_clicked()
{
    this->close();
}

//许可
void AboutDialog::on_LisBtn_clicked()
{
    ld.show();
}

//致谢
void AboutDialog::on_thanksBtn_clicked()
{
    td.show();
}

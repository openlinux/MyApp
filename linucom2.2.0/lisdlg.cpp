#include "lisdlg.h"
#include "ui_lisdlg.h"

LisDlg::LisDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LisDlg)
{
    ui->setupUi(this);
    ui->textBrowser->insertPlainText(tr("Linucom 是自由软件；您可以按照自由软件基金会所发表的 GNU GPL 协议自由发放和/或修改它；采用协议的第 3 版，或者(根据您的选择)任何更高版本。\n\n")
                                     + tr("Linucom 发表的目的是希望它能够对您有用，但我们没有任何保证；对于以任何用途使用它所造成的任何直接或间接后果都不承担任何责任。请参看 GNU GPL 协议中的细节。\n\n")
                                     + tr("您应该在收到该程序的同时收到了 GNU GPL 协议的副本。如果没有的话，请参见<http://www.gnu.org/licenses/>。"));
}

LisDlg::~LisDlg()
{
    delete ui;
}

void LisDlg::changeEvent(QEvent *e)
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
void LisDlg::on_closeBtn_clicked()
{
    this->close();
}

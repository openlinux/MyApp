#include "logindlg.h"
#include "ui_logindlg.h"

loginDlg::loginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::loginDlg)
{
    ui->setupUi(this);
    ui->pwdLineEdit->setEchoMode(QLineEdit::Password);
}

loginDlg::~loginDlg()
{
    delete ui;
}

void loginDlg::on_loginBtn_clicked()
{
    if(ui->usrLineEdit->text().trimmed() == tr("qt")&&
       ui->pwdLineEdit->text() == tr("123456"))
    {
           accept();
    }
    else
    {
        QMessageBox::warning(this, tr("Warning"), tr("user name or password error !"),QMessageBox::Yes);
        ui->usrLineEdit->clear();
        ui->pwdLineEdit->clear();
        ui->usrLineEdit->setFocus();
    }

}

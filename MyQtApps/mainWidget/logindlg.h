#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include <QtGui>

namespace Ui {
    class loginDlg;
}

class loginDlg : public QDialog
{
    Q_OBJECT

public:
    explicit loginDlg(QWidget *parent = 0);
    ~loginDlg();

private:
    Ui::loginDlg *ui;

private slots:
    void on_loginBtn_clicked();
};

#endif // LOGINDLG_H

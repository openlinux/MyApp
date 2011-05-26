#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>
#include "lisdlg.h"
#include "thanksdlg.h"

namespace Ui {
    class AboutDialog;
}

class AboutDialog : public QDialog {
    Q_OBJECT
public:
    AboutDialog(QWidget *parent = 0);
    ~AboutDialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::AboutDialog *ui;
    LisDlg ld;
    ThanksDlg td;

private slots:
    void on_thanksBtn_clicked();
    void on_LisBtn_clicked();
    void on_closeBtn_clicked();

};

#endif // ABOUTDIALOG_H

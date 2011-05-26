#ifndef THANKSDLG_H
#define THANKSDLG_H

#include <QDialog>

namespace Ui {
    class ThanksDlg;
}

class ThanksDlg : public QDialog {
    Q_OBJECT
public:
    ThanksDlg(QWidget *parent = 0);
    ~ThanksDlg();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::ThanksDlg *ui;

private slots:
    void on_closeBtn_clicked();
};

#endif // THANKSDLG_H

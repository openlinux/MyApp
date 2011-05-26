#ifndef LISDLG_H
#define LISDLG_H

#include <QDialog>

namespace Ui {
    class LisDlg;
}

class LisDlg : public QDialog {
    Q_OBJECT
public:
    LisDlg(QWidget *parent = 0);
    ~LisDlg();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::LisDlg *ui;

private slots:
    void on_closeBtn_clicked();
};

#endif // LISDLG_H

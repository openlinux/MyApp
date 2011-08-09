#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "mydlg.h"

namespace Ui {
    class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    myDlg my2;
private slots:
    void on_pushButton_clicked();
};

#endif // WIDGET_H

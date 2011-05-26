/********************************************************************************
** Form generated from reading UI file 'startupdlg.ui'
**
** Created: Fri Jun 11 19:02:51 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTUPDLG_H
#define UI_STARTUPDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>

QT_BEGIN_NAMESPACE

class Ui_startupDlg
{
public:
    QLabel *label_2;
    QProgressBar *progressBar;

    void setupUi(QDialog *startupDlg)
    {
        if (startupDlg->objectName().isEmpty())
            startupDlg->setObjectName(QString::fromUtf8("startupDlg"));
        startupDlg->resize(321, 129);
        label_2 = new QLabel(startupDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 50, 181, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("Andale Mono"));
        font.setPointSize(20);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setStyleStrategy(QFont::PreferDefault);
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("font: 20pt \"Andale Mono\";\n"
"color: rgb(255, 0, 255);"));
        progressBar = new QProgressBar(startupDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(0, 110, 321, 16));
        progressBar->setValue(0);

        retranslateUi(startupDlg);

        QMetaObject::connectSlotsByName(startupDlg);
    } // setupUi

    void retranslateUi(QDialog *startupDlg)
    {
        startupDlg->setWindowTitle(QApplication::translate("startupDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("startupDlg", "linucom 1.0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class startupDlg: public Ui_startupDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTUPDLG_H

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Sat May 21 21:40:30 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_O;
    QAction *action_C;
    QAction *action_S;
    QAction *action_2;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menuAsfd;
    QMenu *menu_E;
    QMenu *menu_F;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/new1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_N->setIcon(icon);
        action_O = new QAction(MainWindow);
        action_O->setObjectName(QString::fromUtf8("action_O"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_O->setIcon(icon1);
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QString::fromUtf8("action_C"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/bad.svg"), QSize(), QIcon::Normal, QIcon::Off);
        action_C->setIcon(icon2);
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_S->setIcon(icon3);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/save1.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 25));
        menuAsfd = new QMenu(menuBar);
        menuAsfd->setObjectName(QString::fromUtf8("menuAsfd"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuAsfd->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_F->menuAction());
        menuAsfd->addAction(action_N);
        menuAsfd->addAction(action_O);
        menuAsfd->addAction(action_C);
        menuAsfd->addSeparator();
        menuAsfd->addAction(action_S);
        menuAsfd->addAction(action_2);
        mainToolBar->addAction(action_N);
        mainToolBar->addAction(action_O);
        mainToolBar->addAction(action_C);
        mainToolBar->addAction(action_S);
        mainToolBar->addAction(action_2);
        mainToolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_N->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272(&N)", 0, QApplication::UnicodeUTF8));
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        action_O->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200(&O)", 0, QApplication::UnicodeUTF8));
        action_O->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        action_C->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&C)", 0, QApplication::UnicodeUTF8));
        action_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        action_S->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0, QApplication::UnicodeUTF8));
        action_S->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", 0, QApplication::UnicodeUTF8));
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        menuAsfd->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0, QApplication::UnicodeUTF8));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&F)", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

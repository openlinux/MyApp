/********************************************************************************
** Form generated from reading UI file 'queryresultdialog.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYRESULTDIALOG_H
#define UI_QUERYRESULTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QVBoxLayout>
#include "queryview.h"

QT_BEGIN_NAMESPACE

class Ui_QueryResultDialog
{
public:
    QVBoxLayout *verticalLayout;
    KScope::Core::QueryView *view_;
    QFrame *line;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *QueryResultDialog)
    {
        if (QueryResultDialog->objectName().isEmpty())
            QueryResultDialog->setObjectName(QString::fromUtf8("QueryResultDialog"));
        QueryResultDialog->resize(570, 410);
        verticalLayout = new QVBoxLayout(QueryResultDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        view_ = new KScope::Core::QueryView(QueryResultDialog);
        view_->setObjectName(QString::fromUtf8("view_"));

        verticalLayout->addWidget(view_);

        line = new QFrame(QueryResultDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        buttonBox = new QDialogButtonBox(QueryResultDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(QueryResultDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), QueryResultDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QueryResultDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryResultDialog)
    {
        QueryResultDialog->setWindowTitle(QApplication::translate("QueryResultDialog", "Query Results", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QueryResultDialog: public Ui_QueryResultDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYRESULTDIALOG_H

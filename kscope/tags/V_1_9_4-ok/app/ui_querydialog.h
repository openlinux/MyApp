/********************************************************************************
** Form generated from reading UI file 'querydialog.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYDIALOG_H
#define UI_QUERYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QueryDialog
{
public:
    QVBoxLayout *vboxLayout;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QComboBox *typeCombo_;
    QComboBox *patternCombo_;
    QFrame *line;
    QHBoxLayout *hboxLayout;
    QSpacerItem *spacerItem;
    QPushButton *okButton_;
    QPushButton *cancelButton_;

    void setupUi(QDialog *QueryDialog)
    {
        if (QueryDialog->objectName().isEmpty())
            QueryDialog->setObjectName(QString::fromUtf8("QueryDialog"));
        QueryDialog->resize(465, 121);
        vboxLayout = new QVBoxLayout(QueryDialog);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(QueryDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        label = new QLabel(QueryDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        typeCombo_ = new QComboBox(QueryDialog);
        typeCombo_->setObjectName(QString::fromUtf8("typeCombo_"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(typeCombo_->sizePolicy().hasHeightForWidth());
        typeCombo_->setSizePolicy(sizePolicy);

        gridLayout->addWidget(typeCombo_, 1, 1, 1, 1);

        patternCombo_ = new QComboBox(QueryDialog);
        patternCombo_->setObjectName(QString::fromUtf8("patternCombo_"));
        sizePolicy.setHeightForWidth(patternCombo_->sizePolicy().hasHeightForWidth());
        patternCombo_->setSizePolicy(sizePolicy);
        patternCombo_->setEditable(true);

        gridLayout->addWidget(patternCombo_, 0, 1, 1, 1);


        vboxLayout->addLayout(gridLayout);

        line = new QFrame(QueryDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        vboxLayout->addWidget(line);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        spacerItem = new QSpacerItem(151, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        hboxLayout->addItem(spacerItem);

        okButton_ = new QPushButton(QueryDialog);
        okButton_->setObjectName(QString::fromUtf8("okButton_"));
        okButton_->setDefault(true);

        hboxLayout->addWidget(okButton_);

        cancelButton_ = new QPushButton(QueryDialog);
        cancelButton_->setObjectName(QString::fromUtf8("cancelButton_"));

        hboxLayout->addWidget(cancelButton_);


        vboxLayout->addLayout(hboxLayout);

        QWidget::setTabOrder(patternCombo_, typeCombo_);
        QWidget::setTabOrder(typeCombo_, okButton_);
        QWidget::setTabOrder(okButton_, cancelButton_);

        retranslateUi(QueryDialog);
        QObject::connect(okButton_, SIGNAL(clicked()), QueryDialog, SLOT(accept()));
        QObject::connect(cancelButton_, SIGNAL(clicked()), QueryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(QueryDialog);
    } // setupUi

    void retranslateUi(QDialog *QueryDialog)
    {
        QueryDialog->setWindowTitle(QApplication::translate("QueryDialog", "Query", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QueryDialog", "Pattern", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QueryDialog", "Query", 0, QApplication::UnicodeUTF8));
        okButton_->setText(QApplication::translate("QueryDialog", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton_->setText(QApplication::translate("QueryDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QueryDialog: public Ui_QueryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYDIALOG_H

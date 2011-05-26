/********************************************************************************
** Form generated from reading UI file 'progressbar.ui'
**
** Created: Sun May 22 17:45:30 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROGRESSBAR_H
#define UI_PROGRESSBAR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProgressBar
{
public:
    QHBoxLayout *hboxLayout;
    QProgressBar *progBar_;
    QToolButton *cancelButton_;

    void setupUi(QWidget *ProgressBar)
    {
        if (ProgressBar->objectName().isEmpty())
            ProgressBar->setObjectName(QString::fromUtf8("ProgressBar"));
        ProgressBar->resize(250, 27);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProgressBar->sizePolicy().hasHeightForWidth());
        ProgressBar->setSizePolicy(sizePolicy);
        ProgressBar->setAutoFillBackground(true);
        hboxLayout = new QHBoxLayout(ProgressBar);
        hboxLayout->setSpacing(0);
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        hboxLayout->setSizeConstraint(QLayout::SetNoConstraint);
        progBar_ = new QProgressBar(ProgressBar);
        progBar_->setObjectName(QString::fromUtf8("progBar_"));
        sizePolicy.setHeightForWidth(progBar_->sizePolicy().hasHeightForWidth());
        progBar_->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        progBar_->setFont(font);
        progBar_->setValue(0);

        hboxLayout->addWidget(progBar_);

        cancelButton_ = new QToolButton(ProgressBar);
        cancelButton_->setObjectName(QString::fromUtf8("cancelButton_"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(cancelButton_->sizePolicy().hasHeightForWidth());
        cancelButton_->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/cancel"), QSize(), QIcon::Normal, QIcon::Off);
        cancelButton_->setIcon(icon);
        cancelButton_->setIconSize(QSize(16, 16));
        cancelButton_->setAutoRaise(true);

        hboxLayout->addWidget(cancelButton_);

        cancelButton_->raise();
        progBar_->raise();

        retranslateUi(ProgressBar);

        QMetaObject::connectSlotsByName(ProgressBar);
    } // setupUi

    void retranslateUi(QWidget *ProgressBar)
    {
        ProgressBar->setWindowTitle(QApplication::translate("ProgressBar", "Form", 0, QApplication::UnicodeUTF8));
        cancelButton_->setText(QApplication::translate("ProgressBar", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProgressBar: public Ui_ProgressBar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROGRESSBAR_H

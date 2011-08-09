/********************************************************************************
** Form generated from reading UI file 'configenginesdialog.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGENGINESDIALOG_H
#define UI_CONFIGENGINESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ConfigEnginesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget_;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigEnginesDialog)
    {
        if (ConfigEnginesDialog->objectName().isEmpty())
            ConfigEnginesDialog->setObjectName(QString::fromUtf8("ConfigEnginesDialog"));
        ConfigEnginesDialog->resize(512, 409);
        verticalLayout = new QVBoxLayout(ConfigEnginesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget_ = new QTabWidget(ConfigEnginesDialog);
        tabWidget_->setObjectName(QString::fromUtf8("tabWidget_"));

        verticalLayout->addWidget(tabWidget_);

        buttonBox = new QDialogButtonBox(ConfigEnginesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ConfigEnginesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigEnginesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigEnginesDialog, SLOT(reject()));

        tabWidget_->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigEnginesDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigEnginesDialog)
    {
        ConfigEnginesDialog->setWindowTitle(QApplication::translate("ConfigEnginesDialog", "Configure Engines", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigEnginesDialog: public Ui_ConfigEnginesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGENGINESDIALOG_H

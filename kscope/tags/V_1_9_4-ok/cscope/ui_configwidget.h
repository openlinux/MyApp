/********************************************************************************
** Form generated from reading UI file 'configwidget.ui'
**
** Created: Sun May 22 17:46:04 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGWIDGET_H
#define UI_CONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigWidget
{
public:
    QVBoxLayout *verticalLayout;
    QCheckBox *kernelCheck_;
    QCheckBox *invIndexCheck_;
    QCheckBox *compressCheck_;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ConfigWidget)
    {
        if (ConfigWidget->objectName().isEmpty())
            ConfigWidget->setObjectName(QString::fromUtf8("ConfigWidget"));
        ConfigWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(ConfigWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kernelCheck_ = new QCheckBox(ConfigWidget);
        kernelCheck_->setObjectName(QString::fromUtf8("kernelCheck_"));

        verticalLayout->addWidget(kernelCheck_);

        invIndexCheck_ = new QCheckBox(ConfigWidget);
        invIndexCheck_->setObjectName(QString::fromUtf8("invIndexCheck_"));
        invIndexCheck_->setChecked(false);

        verticalLayout->addWidget(invIndexCheck_);

        compressCheck_ = new QCheckBox(ConfigWidget);
        compressCheck_->setObjectName(QString::fromUtf8("compressCheck_"));
        compressCheck_->setChecked(false);

        verticalLayout->addWidget(compressCheck_);

        verticalSpacer = new QSpacerItem(20, 203, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(ConfigWidget);

        QMetaObject::connectSlotsByName(ConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *ConfigWidget)
    {
        ConfigWidget->setWindowTitle(QApplication::translate("ConfigWidget", "Cscope Configuration", 0, QApplication::UnicodeUTF8));
        kernelCheck_->setText(QApplication::translate("ConfigWidget", "Kernel project (do not index user-space include files)", 0, QApplication::UnicodeUTF8));
        invIndexCheck_->setText(QApplication::translate("ConfigWidget", "Build inverted index", 0, QApplication::UnicodeUTF8));
        compressCheck_->setText(QApplication::translate("ConfigWidget", "Compress database", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigWidget: public Ui_ConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGWIDGET_H

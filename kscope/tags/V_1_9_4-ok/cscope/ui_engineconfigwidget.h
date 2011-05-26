/********************************************************************************
** Form generated from reading UI file 'engineconfigwidget.ui'
**
** Created: Sun May 22 17:46:04 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENGINECONFIGWIDGET_H
#define UI_ENGINECONFIGWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EngineConfigWidget
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *cscopePathEdit_;
    QLabel *label_2;
    QLineEdit *ctagsPathEdit_;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *EngineConfigWidget)
    {
        if (EngineConfigWidget->objectName().isEmpty())
            EngineConfigWidget->setObjectName(QString::fromUtf8("EngineConfigWidget"));
        EngineConfigWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(EngineConfigWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EngineConfigWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        cscopePathEdit_ = new QLineEdit(EngineConfigWidget);
        cscopePathEdit_->setObjectName(QString::fromUtf8("cscopePathEdit_"));

        formLayout->setWidget(0, QFormLayout::FieldRole, cscopePathEdit_);

        label_2 = new QLabel(EngineConfigWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        ctagsPathEdit_ = new QLineEdit(EngineConfigWidget);
        ctagsPathEdit_->setObjectName(QString::fromUtf8("ctagsPathEdit_"));

        formLayout->setWidget(1, QFormLayout::FieldRole, ctagsPathEdit_);


        verticalLayout->addLayout(formLayout);

        verticalSpacer = new QSpacerItem(20, 214, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(EngineConfigWidget);

        QMetaObject::connectSlotsByName(EngineConfigWidget);
    } // setupUi

    void retranslateUi(QWidget *EngineConfigWidget)
    {
        EngineConfigWidget->setWindowTitle(QApplication::translate("EngineConfigWidget", "Cscope", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("EngineConfigWidget", "Cscope path", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("EngineConfigWidget", "Ctags path", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EngineConfigWidget: public Ui_EngineConfigWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENGINECONFIGWIDGET_H

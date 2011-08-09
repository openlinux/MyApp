/********************************************************************************
** Form generated from reading UI file 'textfilterdialog.ui'
**
** Created: Sun May 22 17:45:30 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTFILTERDIALOG_H
#define UI_TEXTFILTERDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TextFilterDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *patternEdit_;
    QLabel *label_2;
    QComboBox *filterByCombo_;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *stringButton_;
    QRadioButton *regExpButton_;
    QRadioButton *simpRegExpButton_;
    QCheckBox *caseSensitiveCheck_;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextFilterDialog)
    {
        if (TextFilterDialog->objectName().isEmpty())
            TextFilterDialog->setObjectName(QString::fromUtf8("TextFilterDialog"));
        TextFilterDialog->resize(346, 268);
        verticalLayout_2 = new QVBoxLayout(TextFilterDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(TextFilterDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        patternEdit_ = new QLineEdit(TextFilterDialog);
        patternEdit_->setObjectName(QString::fromUtf8("patternEdit_"));

        formLayout->setWidget(0, QFormLayout::FieldRole, patternEdit_);

        label_2 = new QLabel(TextFilterDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        filterByCombo_ = new QComboBox(TextFilterDialog);
        filterByCombo_->setObjectName(QString::fromUtf8("filterByCombo_"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(filterByCombo_->sizePolicy().hasHeightForWidth());
        filterByCombo_->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::FieldRole, filterByCombo_);


        verticalLayout_2->addLayout(formLayout);

        groupBox = new QGroupBox(TextFilterDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stringButton_ = new QRadioButton(groupBox);
        stringButton_->setObjectName(QString::fromUtf8("stringButton_"));

        verticalLayout->addWidget(stringButton_);

        regExpButton_ = new QRadioButton(groupBox);
        regExpButton_->setObjectName(QString::fromUtf8("regExpButton_"));

        verticalLayout->addWidget(regExpButton_);

        simpRegExpButton_ = new QRadioButton(groupBox);
        simpRegExpButton_->setObjectName(QString::fromUtf8("simpRegExpButton_"));

        verticalLayout->addWidget(simpRegExpButton_);

        caseSensitiveCheck_ = new QCheckBox(groupBox);
        caseSensitiveCheck_->setObjectName(QString::fromUtf8("caseSensitiveCheck_"));

        verticalLayout->addWidget(caseSensitiveCheck_);

        stringButton_->raise();
        regExpButton_->raise();
        simpRegExpButton_->raise();
        caseSensitiveCheck_->raise();

        verticalLayout_2->addWidget(groupBox);

        buttonBox = new QDialogButtonBox(TextFilterDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(TextFilterDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextFilterDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TextFilterDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextFilterDialog);
    } // setupUi

    void retranslateUi(QDialog *TextFilterDialog)
    {
        TextFilterDialog->setWindowTitle(QApplication::translate("TextFilterDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("TextFilterDialog", "Pattern", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("TextFilterDialog", "Filter By", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("TextFilterDialog", "Options", 0, QApplication::UnicodeUTF8));
        stringButton_->setText(QApplication::translate("TextFilterDialog", "String", 0, QApplication::UnicodeUTF8));
        regExpButton_->setText(QApplication::translate("TextFilterDialog", "Regular Expression", 0, QApplication::UnicodeUTF8));
        simpRegExpButton_->setText(QApplication::translate("TextFilterDialog", "Simplified Regular Expression", 0, QApplication::UnicodeUTF8));
        caseSensitiveCheck_->setText(QApplication::translate("TextFilterDialog", "Case sensitive", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TextFilterDialog: public Ui_TextFilterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTFILTERDIALOG_H

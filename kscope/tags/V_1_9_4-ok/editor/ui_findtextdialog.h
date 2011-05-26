/********************************************************************************
** Form generated from reading UI file 'findtextdialog.ui'
**
** Created: Sun May 22 17:46:25 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDTEXTDIALOG_H
#define UI_FINDTEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FindTextDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QComboBox *patternCombo_;
    QCheckBox *regExpCheck_;
    QCheckBox *caseSensitiveCheck_;
    QCheckBox *wholeWordsCheck_;
    QCheckBox *wrapCheck_;
    QCheckBox *backwardsCheck_;
    QHBoxLayout *horizontalLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FindTextDialog)
    {
        if (FindTextDialog->objectName().isEmpty())
            FindTextDialog->setObjectName(QString::fromUtf8("FindTextDialog"));
        FindTextDialog->resize(352, 234);
        verticalLayout = new QVBoxLayout(FindTextDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(FindTextDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        patternCombo_ = new QComboBox(FindTextDialog);
        patternCombo_->setObjectName(QString::fromUtf8("patternCombo_"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(patternCombo_->sizePolicy().hasHeightForWidth());
        patternCombo_->setSizePolicy(sizePolicy);
        patternCombo_->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, patternCombo_);

        regExpCheck_ = new QCheckBox(FindTextDialog);
        regExpCheck_->setObjectName(QString::fromUtf8("regExpCheck_"));

        formLayout->setWidget(1, QFormLayout::FieldRole, regExpCheck_);

        caseSensitiveCheck_ = new QCheckBox(FindTextDialog);
        caseSensitiveCheck_->setObjectName(QString::fromUtf8("caseSensitiveCheck_"));

        formLayout->setWidget(2, QFormLayout::FieldRole, caseSensitiveCheck_);

        wholeWordsCheck_ = new QCheckBox(FindTextDialog);
        wholeWordsCheck_->setObjectName(QString::fromUtf8("wholeWordsCheck_"));

        formLayout->setWidget(3, QFormLayout::FieldRole, wholeWordsCheck_);

        wrapCheck_ = new QCheckBox(FindTextDialog);
        wrapCheck_->setObjectName(QString::fromUtf8("wrapCheck_"));

        formLayout->setWidget(4, QFormLayout::FieldRole, wrapCheck_);

        backwardsCheck_ = new QCheckBox(FindTextDialog);
        backwardsCheck_->setObjectName(QString::fromUtf8("backwardsCheck_"));

        formLayout->setWidget(5, QFormLayout::FieldRole, backwardsCheck_);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        buttonBox = new QDialogButtonBox(FindTextDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout->addWidget(buttonBox);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(FindTextDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), FindTextDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FindTextDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(FindTextDialog);
    } // setupUi

    void retranslateUi(QDialog *FindTextDialog)
    {
        FindTextDialog->setWindowTitle(QApplication::translate("FindTextDialog", "Find", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FindTextDialog", "Pattern", 0, QApplication::UnicodeUTF8));
        regExpCheck_->setText(QApplication::translate("FindTextDialog", "Regular Expression", 0, QApplication::UnicodeUTF8));
        caseSensitiveCheck_->setText(QApplication::translate("FindTextDialog", "Case Sensitive", 0, QApplication::UnicodeUTF8));
        wholeWordsCheck_->setText(QApplication::translate("FindTextDialog", "Whole Words Only", 0, QApplication::UnicodeUTF8));
        wrapCheck_->setText(QApplication::translate("FindTextDialog", "Wrap Search", 0, QApplication::UnicodeUTF8));
        backwardsCheck_->setText(QApplication::translate("FindTextDialog", "Search Backwards", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FindTextDialog: public Ui_FindTextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDTEXTDIALOG_H

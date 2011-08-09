/********************************************************************************
** Form generated from reading UI file 'configdialog.ui'
**
** Created: Sun May 22 17:46:25 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIGDIALOG_H
#define UI_CONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConfigDialog
{
public:
    QVBoxLayout *verticalLayout_7;
    QTabWidget *tabs_;
    QWidget *DisplayTab_;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *hlCurLineCheck_;
    QCheckBox *visibleWSpaceCheck_;
    QCheckBox *marginLineNumbersCheck_;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *eolMarkerCheck_;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_5;
    QSpinBox *eolMarkerSpin_;
    QSpacerItem *verticalSpacer_2;
    QWidget *indentTab_;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *indentTabsCheck_;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *tabWidthSpin_;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *indentLanguageCombo_;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QSpacerItem *verticalSpacer;
    QWidget *styleTab_;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeView *styleView_;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QTreeView *propView_;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *applyInheritButton_;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *importButton_;
    QPushButton *exportButton_;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *resetButton_;
    QWidget *miscTab_;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *viModeCombo_;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ConfigDialog)
    {
        if (ConfigDialog->objectName().isEmpty())
            ConfigDialog->setObjectName(QString::fromUtf8("ConfigDialog"));
        ConfigDialog->resize(602, 476);
        verticalLayout_7 = new QVBoxLayout(ConfigDialog);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        tabs_ = new QTabWidget(ConfigDialog);
        tabs_->setObjectName(QString::fromUtf8("tabs_"));
        DisplayTab_ = new QWidget();
        DisplayTab_->setObjectName(QString::fromUtf8("DisplayTab_"));
        verticalLayout_4 = new QVBoxLayout(DisplayTab_);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        hlCurLineCheck_ = new QCheckBox(DisplayTab_);
        hlCurLineCheck_->setObjectName(QString::fromUtf8("hlCurLineCheck_"));

        verticalLayout_4->addWidget(hlCurLineCheck_);

        visibleWSpaceCheck_ = new QCheckBox(DisplayTab_);
        visibleWSpaceCheck_->setObjectName(QString::fromUtf8("visibleWSpaceCheck_"));

        verticalLayout_4->addWidget(visibleWSpaceCheck_);

        marginLineNumbersCheck_ = new QCheckBox(DisplayTab_);
        marginLineNumbersCheck_->setObjectName(QString::fromUtf8("marginLineNumbersCheck_"));

        verticalLayout_4->addWidget(marginLineNumbersCheck_);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        eolMarkerCheck_ = new QCheckBox(DisplayTab_);
        eolMarkerCheck_->setObjectName(QString::fromUtf8("eolMarkerCheck_"));

        horizontalLayout_6->addWidget(eolMarkerCheck_);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        label_5 = new QLabel(DisplayTab_);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_6->addWidget(label_5);

        eolMarkerSpin_ = new QSpinBox(DisplayTab_);
        eolMarkerSpin_->setObjectName(QString::fromUtf8("eolMarkerSpin_"));
        eolMarkerSpin_->setEnabled(false);

        horizontalLayout_6->addWidget(eolMarkerSpin_);


        verticalLayout_4->addLayout(horizontalLayout_6);

        verticalSpacer_2 = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        tabs_->addTab(DisplayTab_, QString());
        indentTab_ = new QWidget();
        indentTab_->setObjectName(QString::fromUtf8("indentTab_"));
        verticalLayout_3 = new QVBoxLayout(indentTab_);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        indentTabsCheck_ = new QCheckBox(indentTab_);
        indentTabsCheck_->setObjectName(QString::fromUtf8("indentTabsCheck_"));

        verticalLayout_3->addWidget(indentTabsCheck_);

        widget = new QWidget(indentTab_);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        tabWidthSpin_ = new QSpinBox(widget);
        tabWidthSpin_->setObjectName(QString::fromUtf8("tabWidthSpin_"));

        horizontalLayout->addWidget(tabWidthSpin_);

        horizontalSpacer = new QSpacerItem(173, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(widget);

        groupBox = new QGroupBox(indentTab_);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        indentLanguageCombo_ = new QComboBox(groupBox);
        indentLanguageCombo_->setObjectName(QString::fromUtf8("indentLanguageCombo_"));

        horizontalLayout_5->addWidget(indentLanguageCombo_);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_5);

        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(groupBox);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(groupBox);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);


        verticalLayout_3->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 132, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabs_->addTab(indentTab_, QString());
        styleTab_ = new QWidget();
        styleTab_->setObjectName(QString::fromUtf8("styleTab_"));
        verticalLayout_6 = new QVBoxLayout(styleTab_);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(styleTab_);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        styleView_ = new QTreeView(styleTab_);
        styleView_->setObjectName(QString::fromUtf8("styleView_"));
        styleView_->setHeaderHidden(false);

        verticalLayout->addWidget(styleView_);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(styleTab_);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        propView_ = new QTreeView(styleTab_);
        propView_->setObjectName(QString::fromUtf8("propView_"));
        propView_->setAlternatingRowColors(true);

        verticalLayout_5->addWidget(propView_);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        applyInheritButton_ = new QPushButton(styleTab_);
        applyInheritButton_->setObjectName(QString::fromUtf8("applyInheritButton_"));

        horizontalLayout_2->addWidget(applyInheritButton_);


        verticalLayout_5->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_5);


        verticalLayout_6->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        importButton_ = new QPushButton(styleTab_);
        importButton_->setObjectName(QString::fromUtf8("importButton_"));

        horizontalLayout_3->addWidget(importButton_);

        exportButton_ = new QPushButton(styleTab_);
        exportButton_->setObjectName(QString::fromUtf8("exportButton_"));

        horizontalLayout_3->addWidget(exportButton_);

        horizontalSpacer_2 = new QSpacerItem(168, 28, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        resetButton_ = new QPushButton(styleTab_);
        resetButton_->setObjectName(QString::fromUtf8("resetButton_"));

        horizontalLayout_3->addWidget(resetButton_);


        verticalLayout_6->addLayout(horizontalLayout_3);

        tabs_->addTab(styleTab_, QString());
        miscTab_ = new QWidget();
        miscTab_->setObjectName(QString::fromUtf8("miscTab_"));
        verticalLayout_8 = new QVBoxLayout(miscTab_);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(miscTab_);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_7->addWidget(label_6);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        viModeCombo_ = new QComboBox(miscTab_);
        viModeCombo_->setObjectName(QString::fromUtf8("viModeCombo_"));

        horizontalLayout_7->addWidget(viModeCombo_);


        verticalLayout_8->addLayout(horizontalLayout_7);

        verticalSpacer_3 = new QSpacerItem(20, 337, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_3);

        tabs_->addTab(miscTab_, QString());

        verticalLayout_7->addWidget(tabs_);

        buttonBox = new QDialogButtonBox(ConfigDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_7->addWidget(buttonBox);

        buttonBox->raise();
        tabs_->raise();

        retranslateUi(ConfigDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfigDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfigDialog, SLOT(reject()));
        QObject::connect(indentTabsCheck_, SIGNAL(toggled(bool)), widget, SLOT(setEnabled(bool)));
        QObject::connect(indentLanguageCombo_, SIGNAL(currentIndexChanged(int)), ConfigDialog, SLOT(indentLanguageChanged(int)));
        QObject::connect(resetButton_, SIGNAL(clicked()), ConfigDialog, SLOT(resetStyles()));
        QObject::connect(applyInheritButton_, SIGNAL(clicked()), ConfigDialog, SLOT(applyInheritance()));
        QObject::connect(importButton_, SIGNAL(clicked()), ConfigDialog, SLOT(importStyles()));
        QObject::connect(exportButton_, SIGNAL(clicked()), ConfigDialog, SLOT(exportStyles()));
        QObject::connect(eolMarkerCheck_, SIGNAL(toggled(bool)), eolMarkerSpin_, SLOT(setEnabled(bool)));

        tabs_->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *ConfigDialog)
    {
        ConfigDialog->setWindowTitle(QApplication::translate("ConfigDialog", "Configure Editor", 0, QApplication::UnicodeUTF8));
        hlCurLineCheck_->setText(QApplication::translate("ConfigDialog", "Highlight current line", 0, QApplication::UnicodeUTF8));
        visibleWSpaceCheck_->setText(QApplication::translate("ConfigDialog", "Show white space markers", 0, QApplication::UnicodeUTF8));
        marginLineNumbersCheck_->setText(QApplication::translate("ConfigDialog", "Show line numbers in margin", 0, QApplication::UnicodeUTF8));
        eolMarkerCheck_->setText(QApplication::translate("ConfigDialog", "Show end-of-line marker", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("ConfigDialog", "Column:", 0, QApplication::UnicodeUTF8));
        tabs_->setTabText(tabs_->indexOf(DisplayTab_), QApplication::translate("ConfigDialog", "Display", 0, QApplication::UnicodeUTF8));
        indentTabsCheck_->setText(QApplication::translate("ConfigDialog", "Indent with tabs", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ConfigDialog", "Tab Width", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("ConfigDialog", "Language Options", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("ConfigDialog", "Language", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("ConfigDialog", "Maintain indentation", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("ConfigDialog", "Indent by opening braces", 0, QApplication::UnicodeUTF8));
        checkBox_3->setText(QApplication::translate("ConfigDialog", "Indent by closing braces", 0, QApplication::UnicodeUTF8));
        tabs_->setTabText(tabs_->indexOf(indentTab_), QApplication::translate("ConfigDialog", "Indentation", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ConfigDialog", "Styles", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ConfigDialog", "Properties", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        applyInheritButton_->setToolTip(QApplication::translate("ConfigDialog", "Make child styles inherit this property", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        applyInheritButton_->setText(QApplication::translate("ConfigDialog", "&Apply to Sub-Styles", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        importButton_->setToolTip(QApplication::translate("ConfigDialog", "Load styles from an external file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        importButton_->setText(QApplication::translate("ConfigDialog", "&Import...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        exportButton_->setToolTip(QApplication::translate("ConfigDialog", "Store styles in an external file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        exportButton_->setText(QApplication::translate("ConfigDialog", "&Export...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        resetButton_->setToolTip(QApplication::translate("ConfigDialog", "Revert to default styles", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        resetButton_->setText(QApplication::translate("ConfigDialog", "&Reset Styles", 0, QApplication::UnicodeUTF8));
        tabs_->setTabText(tabs_->indexOf(styleTab_), QApplication::translate("ConfigDialog", "Styles", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("ConfigDialog", "Default Vi Mode", 0, QApplication::UnicodeUTF8));
        tabs_->setTabText(tabs_->indexOf(miscTab_), QApplication::translate("ConfigDialog", "Miscellaneous", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ConfigDialog: public Ui_ConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIGDIALOG_H

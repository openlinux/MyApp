/********************************************************************************
** Form generated from reading UI file 'projectdialog.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTDIALOG_H
#define UI_PROJECTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QRadioButton>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ProjectDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *configTabs_;
    QWidget *tab;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *nameEdit_;
    QLabel *label_2;
    QWidget *rootPathWidget_;
    QHBoxLayout *horizontalLayout;
    QLineEdit *rootPathEdit_;
    QToolButton *browseRootPathButton_;
    QGroupBox *projectPathGroup_;
    QVBoxLayout *verticalLayout_3;
    QLabel *projectPathLabel_;
    QRadioButton *namedDirButton_;
    QWidget *projectPathWidget_;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *projectPathEdit_;
    QToolButton *browseProjectPathButton_;
    QRadioButton *hiddenDirButton_;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProjectDialog)
    {
        if (ProjectDialog->objectName().isEmpty())
            ProjectDialog->setObjectName(QString::fromUtf8("ProjectDialog"));
        ProjectDialog->resize(479, 335);
        verticalLayout_2 = new QVBoxLayout(ProjectDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        configTabs_ = new QTabWidget(ProjectDialog);
        configTabs_->setObjectName(QString::fromUtf8("configTabs_"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_6 = new QVBoxLayout(tab);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        nameEdit_ = new QLineEdit(tab);
        nameEdit_->setObjectName(QString::fromUtf8("nameEdit_"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit_);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        rootPathWidget_ = new QWidget(tab);
        rootPathWidget_->setObjectName(QString::fromUtf8("rootPathWidget_"));
        horizontalLayout = new QHBoxLayout(rootPathWidget_);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        rootPathEdit_ = new QLineEdit(rootPathWidget_);
        rootPathEdit_->setObjectName(QString::fromUtf8("rootPathEdit_"));

        horizontalLayout->addWidget(rootPathEdit_);

        browseRootPathButton_ = new QToolButton(rootPathWidget_);
        browseRootPathButton_->setObjectName(QString::fromUtf8("browseRootPathButton_"));

        horizontalLayout->addWidget(browseRootPathButton_);


        formLayout->setWidget(1, QFormLayout::FieldRole, rootPathWidget_);


        verticalLayout_6->addLayout(formLayout);

        projectPathGroup_ = new QGroupBox(tab);
        projectPathGroup_->setObjectName(QString::fromUtf8("projectPathGroup_"));
        verticalLayout_3 = new QVBoxLayout(projectPathGroup_);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        projectPathLabel_ = new QLabel(projectPathGroup_);
        projectPathLabel_->setObjectName(QString::fromUtf8("projectPathLabel_"));

        verticalLayout_3->addWidget(projectPathLabel_);

        namedDirButton_ = new QRadioButton(projectPathGroup_);
        namedDirButton_->setObjectName(QString::fromUtf8("namedDirButton_"));
        namedDirButton_->setChecked(true);

        verticalLayout_3->addWidget(namedDirButton_);

        projectPathWidget_ = new QWidget(projectPathGroup_);
        projectPathWidget_->setObjectName(QString::fromUtf8("projectPathWidget_"));
        verticalLayout = new QVBoxLayout(projectPathWidget_);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        projectPathEdit_ = new QLineEdit(projectPathWidget_);
        projectPathEdit_->setObjectName(QString::fromUtf8("projectPathEdit_"));

        horizontalLayout_2->addWidget(projectPathEdit_);

        browseProjectPathButton_ = new QToolButton(projectPathWidget_);
        browseProjectPathButton_->setObjectName(QString::fromUtf8("browseProjectPathButton_"));

        horizontalLayout_2->addWidget(browseProjectPathButton_);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_3->addWidget(projectPathWidget_);

        hiddenDirButton_ = new QRadioButton(projectPathGroup_);
        hiddenDirButton_->setObjectName(QString::fromUtf8("hiddenDirButton_"));

        verticalLayout_3->addWidget(hiddenDirButton_);


        verticalLayout_6->addWidget(projectPathGroup_);

        configTabs_->addTab(tab, QString());

        verticalLayout_2->addWidget(configTabs_);

        buttonBox = new QDialogButtonBox(ProjectDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        QWidget::setTabOrder(nameEdit_, rootPathEdit_);
        QWidget::setTabOrder(rootPathEdit_, browseRootPathButton_);
        QWidget::setTabOrder(browseRootPathButton_, namedDirButton_);
        QWidget::setTabOrder(namedDirButton_, projectPathEdit_);
        QWidget::setTabOrder(projectPathEdit_, browseProjectPathButton_);
        QWidget::setTabOrder(browseProjectPathButton_, hiddenDirButton_);
        QWidget::setTabOrder(hiddenDirButton_, buttonBox);
        QWidget::setTabOrder(buttonBox, configTabs_);

        retranslateUi(ProjectDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ProjectDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ProjectDialog, SLOT(reject()));
        QObject::connect(browseProjectPathButton_, SIGNAL(clicked()), ProjectDialog, SLOT(browseProjectPath()));
        QObject::connect(browseRootPathButton_, SIGNAL(clicked()), ProjectDialog, SLOT(browseRootPath()));
        QObject::connect(namedDirButton_, SIGNAL(toggled(bool)), projectPathWidget_, SLOT(setEnabled(bool)));
        QObject::connect(projectPathEdit_, SIGNAL(textChanged(QString)), ProjectDialog, SLOT(updateProjectPath()));
        QObject::connect(namedDirButton_, SIGNAL(toggled(bool)), ProjectDialog, SLOT(updateProjectPath()));
        QObject::connect(rootPathEdit_, SIGNAL(textChanged(QString)), ProjectDialog, SLOT(updateProjectPath()));
        QObject::connect(nameEdit_, SIGNAL(textChanged(QString)), ProjectDialog, SLOT(updateProjectPath()));

        configTabs_->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ProjectDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectDialog)
    {
        ProjectDialog->setWindowTitle(QApplication::translate("ProjectDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ProjectDialog", "Name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ProjectDialog", "Root Path", 0, QApplication::UnicodeUTF8));
        browseRootPathButton_->setText(QApplication::translate("ProjectDialog", "...", 0, QApplication::UnicodeUTF8));
        projectPathGroup_->setTitle(QApplication::translate("ProjectDialog", "Project Configuration Directory", 0, QApplication::UnicodeUTF8));
        projectPathLabel_->setText(QString());
        namedDirButton_->setText(QApplication::translate("ProjectDialog", "Use a named directory under the following path:", 0, QApplication::UnicodeUTF8));
        browseProjectPathButton_->setText(QApplication::translate("ProjectDialog", "...", 0, QApplication::UnicodeUTF8));
        hiddenDirButton_->setText(QApplication::translate("ProjectDialog", "Use a hidden directory under the root path", 0, QApplication::UnicodeUTF8));
        configTabs_->setTabText(configTabs_->indexOf(tab), QApplication::translate("ProjectDialog", "General", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProjectDialog: public Ui_ProjectDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTDIALOG_H

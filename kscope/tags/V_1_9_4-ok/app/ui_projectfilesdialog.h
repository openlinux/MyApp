/********************************************************************************
** Form generated from reading UI file 'projectfilesdialog.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROJECTFILESDIALOG_H
#define UI_PROJECTFILESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProjectFilesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTreeView *view_;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton_;
    QPushButton *removeButton_;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton_;
    QPushButton *cancelButton_;

    void setupUi(QDialog *ProjectFilesDialog)
    {
        if (ProjectFilesDialog->objectName().isEmpty())
            ProjectFilesDialog->setObjectName(QString::fromUtf8("ProjectFilesDialog"));
        ProjectFilesDialog->resize(498, 479);
        verticalLayout = new QVBoxLayout(ProjectFilesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        view_ = new QTreeView(ProjectFilesDialog);
        view_->setObjectName(QString::fromUtf8("view_"));
        view_->setRootIsDecorated(true);
        view_->setUniformRowHeights(true);
        view_->setItemsExpandable(true);
        view_->setSortingEnabled(false);
        view_->setExpandsOnDoubleClick(true);

        verticalLayout->addWidget(view_);

        line = new QFrame(ProjectFilesDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton_ = new QPushButton(ProjectFilesDialog);
        addButton_->setObjectName(QString::fromUtf8("addButton_"));

        horizontalLayout->addWidget(addButton_);

        removeButton_ = new QPushButton(ProjectFilesDialog);
        removeButton_->setObjectName(QString::fromUtf8("removeButton_"));

        horizontalLayout->addWidget(removeButton_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton_ = new QPushButton(ProjectFilesDialog);
        okButton_->setObjectName(QString::fromUtf8("okButton_"));

        horizontalLayout->addWidget(okButton_);

        cancelButton_ = new QPushButton(ProjectFilesDialog);
        cancelButton_->setObjectName(QString::fromUtf8("cancelButton_"));

        horizontalLayout->addWidget(cancelButton_);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ProjectFilesDialog);
        QObject::connect(addButton_, SIGNAL(clicked()), ProjectFilesDialog, SLOT(addFiles()));
        QObject::connect(removeButton_, SIGNAL(clicked()), ProjectFilesDialog, SLOT(removeFiles()));
        QObject::connect(okButton_, SIGNAL(clicked()), ProjectFilesDialog, SLOT(accept()));
        QObject::connect(cancelButton_, SIGNAL(clicked()), ProjectFilesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ProjectFilesDialog);
    } // setupUi

    void retranslateUi(QDialog *ProjectFilesDialog)
    {
        ProjectFilesDialog->setWindowTitle(QApplication::translate("ProjectFilesDialog", "Project Files", 0, QApplication::UnicodeUTF8));
        addButton_->setText(QApplication::translate("ProjectFilesDialog", "&Add...", 0, QApplication::UnicodeUTF8));
        removeButton_->setText(QApplication::translate("ProjectFilesDialog", "&Remove...", 0, QApplication::UnicodeUTF8));
        okButton_->setText(QApplication::translate("ProjectFilesDialog", "&OK", 0, QApplication::UnicodeUTF8));
        cancelButton_->setText(QApplication::translate("ProjectFilesDialog", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ProjectFilesDialog: public Ui_ProjectFilesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROJECTFILESDIALOG_H

/********************************************************************************
** Form generated from reading UI file 'addfilesdialog.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDFILESDIALOG_H
#define UI_ADDFILESDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddFilesDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *filesButton_;
    QPushButton *dirButton_;
    QPushButton *treeButton_;
    QSpacerItem *horizontalSpacer;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLineEdit *filterEdit_;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loadFilterButton_;
    QPushButton *saveFilterButton_;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *fileList_;
    QVBoxLayout *verticalLayout_2;
    QPushButton *deleteFileButton_;
    QPushButton *clearFilesButton_;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddFilesDialog)
    {
        if (AddFilesDialog->objectName().isEmpty())
            AddFilesDialog->setObjectName(QString::fromUtf8("AddFilesDialog"));
        AddFilesDialog->resize(551, 507);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AddFilesDialog->sizePolicy().hasHeightForWidth());
        AddFilesDialog->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(AddFilesDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        filesButton_ = new QPushButton(AddFilesDialog);
        filesButton_->setObjectName(QString::fromUtf8("filesButton_"));

        horizontalLayout_3->addWidget(filesButton_);

        dirButton_ = new QPushButton(AddFilesDialog);
        dirButton_->setObjectName(QString::fromUtf8("dirButton_"));

        horizontalLayout_3->addWidget(dirButton_);

        treeButton_ = new QPushButton(AddFilesDialog);
        treeButton_->setObjectName(QString::fromUtf8("treeButton_"));

        horizontalLayout_3->addWidget(treeButton_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_3);

        groupBox = new QGroupBox(AddFilesDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        filterEdit_ = new QLineEdit(groupBox);
        filterEdit_->setObjectName(QString::fromUtf8("filterEdit_"));

        verticalLayout->addWidget(filterEdit_);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        loadFilterButton_ = new QPushButton(groupBox);
        loadFilterButton_->setObjectName(QString::fromUtf8("loadFilterButton_"));

        horizontalLayout->addWidget(loadFilterButton_);

        saveFilterButton_ = new QPushButton(groupBox);
        saveFilterButton_->setObjectName(QString::fromUtf8("saveFilterButton_"));

        horizontalLayout->addWidget(saveFilterButton_);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(AddFilesDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        fileList_ = new QListWidget(groupBox_2);
        fileList_->setObjectName(QString::fromUtf8("fileList_"));
        fileList_->setSelectionMode(QAbstractItemView::ExtendedSelection);

        horizontalLayout_2->addWidget(fileList_);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        deleteFileButton_ = new QPushButton(groupBox_2);
        deleteFileButton_->setObjectName(QString::fromUtf8("deleteFileButton_"));

        verticalLayout_2->addWidget(deleteFileButton_);

        clearFilesButton_ = new QPushButton(groupBox_2);
        clearFilesButton_->setObjectName(QString::fromUtf8("clearFilesButton_"));

        verticalLayout_2->addWidget(clearFilesButton_);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(AddFilesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(AddFilesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddFilesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddFilesDialog, SLOT(reject()));
        QObject::connect(filesButton_, SIGNAL(clicked()), AddFilesDialog, SLOT(addFiles()));
        QObject::connect(dirButton_, SIGNAL(clicked()), AddFilesDialog, SLOT(addDir()));
        QObject::connect(treeButton_, SIGNAL(clicked()), AddFilesDialog, SLOT(addTree()));
        QObject::connect(clearFilesButton_, SIGNAL(clicked()), fileList_, SLOT(clear()));
        QObject::connect(loadFilterButton_, SIGNAL(clicked()), AddFilesDialog, SLOT(loadFilter()));
        QObject::connect(saveFilterButton_, SIGNAL(clicked()), AddFilesDialog, SLOT(saveFilter()));
        QObject::connect(deleteFileButton_, SIGNAL(clicked()), AddFilesDialog, SLOT(deleteSelectedFiles()));

        QMetaObject::connectSlotsByName(AddFilesDialog);
    } // setupUi

    void retranslateUi(QDialog *AddFilesDialog)
    {
        AddFilesDialog->setWindowTitle(QApplication::translate("AddFilesDialog", "Add Files", 0, QApplication::UnicodeUTF8));
        filesButton_->setText(QApplication::translate("AddFilesDialog", "&Files...", 0, QApplication::UnicodeUTF8));
        dirButton_->setText(QApplication::translate("AddFilesDialog", "&Directory...", 0, QApplication::UnicodeUTF8));
        treeButton_->setText(QApplication::translate("AddFilesDialog", "&Tree...", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("AddFilesDialog", "Filter", 0, QApplication::UnicodeUTF8));
        filterEdit_->setText(QApplication::translate("AddFilesDialog", "*.c;*.h", 0, QApplication::UnicodeUTF8));
        loadFilterButton_->setText(QApplication::translate("AddFilesDialog", "&Load...", 0, QApplication::UnicodeUTF8));
        saveFilterButton_->setText(QApplication::translate("AddFilesDialog", "&Save As...", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("AddFilesDialog", "Files", 0, QApplication::UnicodeUTF8));
        deleteFileButton_->setText(QApplication::translate("AddFilesDialog", "De&lete", 0, QApplication::UnicodeUTF8));
        clearFilesButton_->setText(QApplication::translate("AddFilesDialog", "&Clear", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddFilesDialog: public Ui_AddFilesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDFILESDIALOG_H

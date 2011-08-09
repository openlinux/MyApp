/********************************************************************************
** Form generated from reading UI file 'stackpage.ui'
**
** Created: Sun May 22 17:46:53 2011
**      by: Qt User Interface Compiler version 4.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STACKPAGE_H
#define UI_STACKPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StackPage
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QHBoxLayout *horizontalLayout;
    QLabel *label_;
    QSpacerItem *horizontalSpacer;
    QToolButton *showButton_;
    QToolButton *closeButton_;

    void setupUi(QWidget *StackPage)
    {
        if (StackPage->objectName().isEmpty())
            StackPage->setObjectName(QString::fromUtf8("StackPage"));
        StackPage->resize(635, 662);
        verticalLayout = new QVBoxLayout(StackPage);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        line = new QFrame(StackPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_ = new QLabel(StackPage);
        label_->setObjectName(QString::fromUtf8("label_"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_->sizePolicy().hasHeightForWidth());
        label_->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_->setFont(font);
        label_->setTextFormat(Qt::PlainText);

        horizontalLayout->addWidget(label_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        showButton_ = new QToolButton(StackPage);
        showButton_->setObjectName(QString::fromUtf8("showButton_"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(showButton_->sizePolicy().hasHeightForWidth());
        showButton_->setSizePolicy(sizePolicy1);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/show.png"), QSize(), QIcon::Normal, QIcon::Off);
        showButton_->setIcon(icon);
        showButton_->setAutoRaise(true);

        horizontalLayout->addWidget(showButton_);

        closeButton_ = new QToolButton(StackPage);
        closeButton_->setObjectName(QString::fromUtf8("closeButton_"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeButton_->setIcon(icon1);
        closeButton_->setToolButtonStyle(Qt::ToolButtonIconOnly);
        closeButton_->setAutoRaise(true);

        horizontalLayout->addWidget(closeButton_);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(StackPage);

        QMetaObject::connectSlotsByName(StackPage);
    } // setupUi

    void retranslateUi(QWidget *StackPage)
    {
        StackPage->setWindowTitle(QApplication::translate("StackPage", "Form", 0, QApplication::UnicodeUTF8));
        label_->setText(QApplication::translate("StackPage", "TextLabel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        showButton_->setToolTip(QApplication::translate("StackPage", "Show page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showButton_->setText(QApplication::translate("StackPage", "Show", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        closeButton_->setToolTip(QApplication::translate("StackPage", "Close page", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        closeButton_->setText(QApplication::translate("StackPage", "X", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StackPage: public Ui_StackPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STACKPAGE_H

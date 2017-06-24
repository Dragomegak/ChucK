/********************************************************************************
** Form generated from reading UI file 'madocumentview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MADOCUMENTVIEW_H
#define UI_MADOCUMENTVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "Qsci/qsciscintilla.h"

QT_BEGIN_NAMESPACE

class Ui_mADocumentView
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *container;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *arguments;
    QsciScintilla *textEdit;

    void setupUi(QWidget *mADocumentView)
    {
        if (mADocumentView->objectName().isEmpty())
            mADocumentView->setObjectName(QString::fromUtf8("mADocumentView"));
        mADocumentView->resize(520, 460);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mADocumentView->sizePolicy().hasHeightForWidth());
        mADocumentView->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mADocumentView->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(mADocumentView);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        container = new QWidget(mADocumentView);
        container->setObjectName(QString::fromUtf8("container"));
        sizePolicy.setHeightForWidth(container->sizePolicy().hasHeightForWidth());
        container->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(container);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(container);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 32));
        widget->setMaximumSize(QSize(16777215, 32));
        widget->setBaseSize(QSize(0, 32));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(4, 2, 4, 2);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(label);

        arguments = new QLineEdit(widget);
        arguments->setObjectName(QString::fromUtf8("arguments"));

        horizontalLayout->addWidget(arguments);


        verticalLayout_2->addWidget(widget, 0, Qt::AlignVCenter);

        textEdit = new QsciScintilla(container);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(textEdit);


        verticalLayout->addWidget(container);


        retranslateUi(mADocumentView);
        QObject::connect(textEdit, SIGNAL(modificationChanged(bool)), mADocumentView, SLOT(documentModified(bool)));
        QObject::connect(mADocumentView, SIGNAL(cut()), textEdit, SLOT(cut()));
        QObject::connect(mADocumentView, SIGNAL(copy()), textEdit, SLOT(copy()));
        QObject::connect(mADocumentView, SIGNAL(paste()), textEdit, SLOT(paste()));
        QObject::connect(mADocumentView, SIGNAL(selectAll()), textEdit, SLOT(selectAll()));
        QObject::connect(mADocumentView, SIGNAL(undo()), textEdit, SLOT(redo()));
        QObject::connect(mADocumentView, SIGNAL(redo()), textEdit, SLOT(redo()));

        QMetaObject::connectSlotsByName(mADocumentView);
    } // setupUi

    void retranslateUi(QWidget *mADocumentView)
    {
        mADocumentView->setWindowTitle(QApplication::translate("mADocumentView", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        container->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        container->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        label->setText(QApplication::translate("mADocumentView", "arguments", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mADocumentView: public Ui_mADocumentView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MADOCUMENTVIEW_H

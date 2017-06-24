/********************************************************************************
** Form generated from reading UI file 'mAConsoleMonitor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MACONSOLEMONITOR_H
#define UI_MACONSOLEMONITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAConsoleMonitor
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *mAConsoleMonitor)
    {
        if (mAConsoleMonitor->objectName().isEmpty())
            mAConsoleMonitor->setObjectName(QString::fromUtf8("mAConsoleMonitor"));
        mAConsoleMonitor->resize(600, 375);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAConsoleMonitor->setWindowIcon(icon);
        centralwidget = new QWidget(mAConsoleMonitor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(100, 100));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setMinimumSize(QSize(100, 100));
        QFont font;
        font.setFamily(QString::fromUtf8("Courier New"));
        font.setPointSize(10);
        plainTextEdit->setFont(font);
        plainTextEdit->setUndoRedoEnabled(false);
        plainTextEdit->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(plainTextEdit);

        mAConsoleMonitor->setCentralWidget(centralwidget);

        retranslateUi(mAConsoleMonitor);

        QMetaObject::connectSlotsByName(mAConsoleMonitor);
    } // setupUi

    void retranslateUi(QMainWindow *mAConsoleMonitor)
    {
        mAConsoleMonitor->setWindowTitle(QApplication::translate("mAConsoleMonitor", "Console", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mAConsoleMonitor: public Ui_mAConsoleMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MACONSOLEMONITOR_H

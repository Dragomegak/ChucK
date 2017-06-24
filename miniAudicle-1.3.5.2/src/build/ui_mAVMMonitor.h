/********************************************************************************
** Form generated from reading UI file 'mAVMMonitor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAVMMONITOR_H
#define UI_MAVMMONITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAVMMonitor
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *runningTimeLabel;
    QPushButton *removeLastButton;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *shredCountLabel;
    QPushButton *removeAllButton;
    QTableWidget *tableWidget;
    QPushButton *toggleVMButton;

    void setupUi(QMainWindow *mAVMMonitor)
    {
        if (mAVMMonitor->objectName().isEmpty())
            mAVMMonitor->setObjectName(QString::fromUtf8("mAVMMonitor"));
        mAVMMonitor->resize(311, 382);
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(mAVMMonitor->sizePolicy().hasHeightForWidth());
        mAVMMonitor->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAVMMonitor->setWindowIcon(icon);
        centralwidget = new QWidget(mAVMMonitor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMinimumSize(QSize(292, 361));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        runningTimeLabel = new QLabel(centralwidget);
        runningTimeLabel->setObjectName(QString::fromUtf8("runningTimeLabel"));
        sizePolicy.setHeightForWidth(runningTimeLabel->sizePolicy().hasHeightForWidth());
        runningTimeLabel->setSizePolicy(sizePolicy);
        runningTimeLabel->setFont(font);

        horizontalLayout->addWidget(runningTimeLabel);

        removeLastButton = new QPushButton(centralwidget);
        removeLastButton->setObjectName(QString::fromUtf8("removeLastButton"));
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(removeLastButton->sizePolicy().hasHeightForWidth());
        removeLastButton->setSizePolicy(sizePolicy2);
        removeLastButton->setMinimumSize(QSize(80, 21));
        removeLastButton->setMaximumSize(QSize(80, 21));

        horizontalLayout->addWidget(removeLastButton);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        shredCountLabel = new QLabel(centralwidget);
        shredCountLabel->setObjectName(QString::fromUtf8("shredCountLabel"));
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(shredCountLabel->sizePolicy().hasHeightForWidth());
        shredCountLabel->setSizePolicy(sizePolicy3);
        shredCountLabel->setFont(font);

        horizontalLayout_2->addWidget(shredCountLabel);

        removeAllButton = new QPushButton(centralwidget);
        removeAllButton->setObjectName(QString::fromUtf8("removeAllButton"));
        sizePolicy2.setHeightForWidth(removeAllButton->sizePolicy().hasHeightForWidth());
        removeAllButton->setSizePolicy(sizePolicy2);
        removeAllButton->setMinimumSize(QSize(80, 21));
        removeAllButton->setMaximumSize(QSize(80, 21));

        horizontalLayout_2->addWidget(removeAllButton);


        verticalLayout->addLayout(horizontalLayout_2);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(1);
        sizePolicy4.setVerticalStretch(1);
        sizePolicy4.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy4);

        verticalLayout->addWidget(tableWidget);

        toggleVMButton = new QPushButton(centralwidget);
        toggleVMButton->setObjectName(QString::fromUtf8("toggleVMButton"));
        sizePolicy1.setHeightForWidth(toggleVMButton->sizePolicy().hasHeightForWidth());
        toggleVMButton->setSizePolicy(sizePolicy1);
        toggleVMButton->setMinimumSize(QSize(128, 0));
        toggleVMButton->setBaseSize(QSize(128, 21));

        verticalLayout->addWidget(toggleVMButton, 0, Qt::AlignHCenter);


        verticalLayout_2->addLayout(verticalLayout);

        mAVMMonitor->setCentralWidget(centralwidget);

        retranslateUi(mAVMMonitor);
        QObject::connect(toggleVMButton, SIGNAL(clicked()), mAVMMonitor, SLOT(toggleVM()));
        QObject::connect(removeAllButton, SIGNAL(clicked()), mAVMMonitor, SLOT(removeAll()));
        QObject::connect(removeLastButton, SIGNAL(clicked()), mAVMMonitor, SLOT(removeLast()));

        QMetaObject::connectSlotsByName(mAVMMonitor);
    } // setupUi

    void retranslateUi(QMainWindow *mAVMMonitor)
    {
        mAVMMonitor->setWindowTitle(QApplication::translate("mAVMMonitor", "Virtual Machine", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mAVMMonitor", "running time:", 0, QApplication::UnicodeUTF8));
        runningTimeLabel->setText(QApplication::translate("mAVMMonitor", "0:00.0", 0, QApplication::UnicodeUTF8));
        removeLastButton->setText(QApplication::translate("mAVMMonitor", "remove last", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("mAVMMonitor", "shreds:", 0, QApplication::UnicodeUTF8));
        shredCountLabel->setText(QApplication::translate("mAVMMonitor", "0", 0, QApplication::UnicodeUTF8));
        removeAllButton->setText(QApplication::translate("mAVMMonitor", "clear VM", 0, QApplication::UnicodeUTF8));
        toggleVMButton->setText(QApplication::translate("mAVMMonitor", "Start Virtual Machine", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mAVMMonitor: public Ui_mAVMMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAVMMONITOR_H

/********************************************************************************
** Form generated from reading UI file 'mADeviceBrowser.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MADEVICEBROWSER_H
#define UI_MADEVICEBROWSER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_mADeviceBrowser
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *audioButton;
    QPushButton *midiButton;
    QPushButton *hidButton;
    QSpacerItem *horizontalSpacer_3;
    QTreeWidget *treeWidget;

    void setupUi(QDialog *mADeviceBrowser)
    {
        if (mADeviceBrowser->objectName().isEmpty())
            mADeviceBrowser->setObjectName(QString::fromUtf8("mADeviceBrowser"));
        mADeviceBrowser->resize(500, 400);
        mADeviceBrowser->setMinimumSize(QSize(300, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mADeviceBrowser->setWindowIcon(icon);
        verticalLayout_2 = new QVBoxLayout(mADeviceBrowser);
        verticalLayout_2->setSpacing(10);
        verticalLayout_2->setContentsMargins(10, 10, 10, 10);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        audioButton = new QPushButton(mADeviceBrowser);
        audioButton->setObjectName(QString::fromUtf8("audioButton"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(audioButton->sizePolicy().hasHeightForWidth());
        audioButton->setSizePolicy(sizePolicy);
        audioButton->setMinimumSize(QSize(0, 0));
        audioButton->setMaximumSize(QSize(120, 16777215));
        audioButton->setBaseSize(QSize(120, 0));
        audioButton->setFlat(false);

        horizontalLayout->addWidget(audioButton);

        midiButton = new QPushButton(mADeviceBrowser);
        midiButton->setObjectName(QString::fromUtf8("midiButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(midiButton->sizePolicy().hasHeightForWidth());
        midiButton->setSizePolicy(sizePolicy1);
        midiButton->setMinimumSize(QSize(0, 0));
        midiButton->setMaximumSize(QSize(120, 16777215));
        midiButton->setBaseSize(QSize(120, 0));

        horizontalLayout->addWidget(midiButton);

        hidButton = new QPushButton(mADeviceBrowser);
        hidButton->setObjectName(QString::fromUtf8("hidButton"));
        sizePolicy1.setHeightForWidth(hidButton->sizePolicy().hasHeightForWidth());
        hidButton->setSizePolicy(sizePolicy1);
        hidButton->setMinimumSize(QSize(0, 0));
        hidButton->setMaximumSize(QSize(120, 16777215));
        hidButton->setBaseSize(QSize(120, 0));

        horizontalLayout->addWidget(hidButton);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout_2->addLayout(horizontalLayout);

        treeWidget = new QTreeWidget(mADeviceBrowser);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(1, QString::fromUtf8("2"));
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setColumnCount(2);

        verticalLayout_2->addWidget(treeWidget);


        retranslateUi(mADeviceBrowser);
        QObject::connect(audioButton, SIGNAL(clicked()), mADeviceBrowser, SLOT(showAudio()));
        QObject::connect(midiButton, SIGNAL(clicked()), mADeviceBrowser, SLOT(showMIDI()));
        QObject::connect(hidButton, SIGNAL(clicked()), mADeviceBrowser, SLOT(showHID()));

        QMetaObject::connectSlotsByName(mADeviceBrowser);
    } // setupUi

    void retranslateUi(QDialog *mADeviceBrowser)
    {
        mADeviceBrowser->setWindowTitle(QApplication::translate("mADeviceBrowser", "Device Browser", 0, QApplication::UnicodeUTF8));
        audioButton->setText(QApplication::translate("mADeviceBrowser", "Audio", 0, QApplication::UnicodeUTF8));
        midiButton->setText(QApplication::translate("mADeviceBrowser", "MIDI", 0, QApplication::UnicodeUTF8));
        hidButton->setText(QApplication::translate("mADeviceBrowser", "HID", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mADeviceBrowser: public Ui_mADeviceBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MADEVICEBROWSER_H

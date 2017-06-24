/********************************************************************************
** Form generated from reading UI file 'mAPreferencesWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPREFERENCESWINDOW_H
#define UI_MAPREFERENCESWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFontComboBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAPreferencesWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *audioTab;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *enableNetworkVM;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *enableAudio;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *audioOutput;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QComboBox *audioInput;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QComboBox *outputChannels;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QComboBox *inputChannels;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_5;
    QComboBox *sampleRate;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_6;
    QComboBox *bufferSize;
    QSpacerItem *verticalSpacer;
    QWidget *editingTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QFontComboBox *font;
    QSpinBox *fontSize;
    QLabel *label_8;
    QCheckBox *enableSyntaxColoring;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_6;
    QComboBox *syntaxColoringType;
    QPushButton *syntaxColoringChangeButton;
    QSpacerItem *horizontalSpacer_5;
    QCheckBox *editorUsesTabs;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_9;
    QSpinBox *tabWidth;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer_2;
    QWidget *chuginsTab;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *enableChugins;
    QListWidget *chuginsList;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *removeChuginButton;
    QToolButton *addChuginButton;
    QSpacerItem *horizontalSpacer_9;
    QWidget *miscTab;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_10;
    QPushButton *currentDirectoryButton;
    QLineEdit *currentDirectory;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *restoreDefaultsButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *mAPreferencesWindow)
    {
        if (mAPreferencesWindow->objectName().isEmpty())
            mAPreferencesWindow->setObjectName(QString::fromUtf8("mAPreferencesWindow"));
        mAPreferencesWindow->resize(435, 367);
        mAPreferencesWindow->setMinimumSize(QSize(435, 367));
        mAPreferencesWindow->setMaximumSize(QSize(435, 367));
        mAPreferencesWindow->setBaseSize(QSize(521, 417));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAPreferencesWindow->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(mAPreferencesWindow);
        verticalLayout->setSpacing(5);
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(mAPreferencesWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setMinimumSize(QSize(425, 325));
        tabWidget->setMaximumSize(QSize(425, 325));
        audioTab = new QWidget();
        audioTab->setObjectName(QString::fromUtf8("audioTab"));
        verticalLayout_3 = new QVBoxLayout(audioTab);
        verticalLayout_3->setSpacing(12);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(12, -1, 12, 12);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        enableNetworkVM = new QCheckBox(audioTab);
        enableNetworkVM->setObjectName(QString::fromUtf8("enableNetworkVM"));

        horizontalLayout_2->addWidget(enableNetworkVM);

        horizontalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        enableAudio = new QCheckBox(audioTab);
        enableAudio->setObjectName(QString::fromUtf8("enableAudio"));

        horizontalLayout_2->addWidget(enableAudio);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(audioTab);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        audioOutput = new QComboBox(audioTab);
        audioOutput->setObjectName(QString::fromUtf8("audioOutput"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(audioOutput->sizePolicy().hasHeightForWidth());
        audioOutput->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(audioOutput);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(audioTab);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_6->addWidget(label_2);

        audioInput = new QComboBox(audioTab);
        audioInput->setObjectName(QString::fromUtf8("audioInput"));
        sizePolicy.setHeightForWidth(audioInput->sizePolicy().hasHeightForWidth());
        audioInput->setSizePolicy(sizePolicy);

        horizontalLayout_6->addWidget(audioInput);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_3 = new QLabel(audioTab);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_7->addWidget(label_3);

        outputChannels = new QComboBox(audioTab);
        outputChannels->setObjectName(QString::fromUtf8("outputChannels"));

        horizontalLayout_7->addWidget(outputChannels);

        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        label_4 = new QLabel(audioTab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_7->addWidget(label_4);

        inputChannels = new QComboBox(audioTab);
        inputChannels->setObjectName(QString::fromUtf8("inputChannels"));

        horizontalLayout_7->addWidget(inputChannels);


        verticalLayout_3->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_5 = new QLabel(audioTab);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_8->addWidget(label_5);

        sampleRate = new QComboBox(audioTab);
        sampleRate->setObjectName(QString::fromUtf8("sampleRate"));

        horizontalLayout_8->addWidget(sampleRate);

        horizontalSpacer_4 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_4);

        label_6 = new QLabel(audioTab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_8->addWidget(label_6);

        bufferSize = new QComboBox(audioTab);
        bufferSize->setObjectName(QString::fromUtf8("bufferSize"));

        horizontalLayout_8->addWidget(bufferSize);


        verticalLayout_3->addLayout(horizontalLayout_8);

        verticalSpacer = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(audioTab, QString());
        editingTab = new QWidget();
        editingTab->setObjectName(QString::fromUtf8("editingTab"));
        verticalLayout_2 = new QVBoxLayout(editingTab);
        verticalLayout_2->setSpacing(12);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, -1, 12, 12);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_7 = new QLabel(editingTab);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_9->addWidget(label_7);

        font = new QFontComboBox(editingTab);
        font->setObjectName(QString::fromUtf8("font"));
        sizePolicy.setHeightForWidth(font->sizePolicy().hasHeightForWidth());
        font->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Courier New"));
        font1.setPointSize(12);
        font->setCurrentFont(font1);

        horizontalLayout_9->addWidget(font);

        fontSize = new QSpinBox(editingTab);
        fontSize->setObjectName(QString::fromUtf8("fontSize"));
        fontSize->setMinimum(8);
        fontSize->setMaximum(36);
        fontSize->setValue(10);

        horizontalLayout_9->addWidget(fontSize);

        label_8 = new QLabel(editingTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_9->addWidget(label_8);


        verticalLayout_2->addLayout(horizontalLayout_9);

        enableSyntaxColoring = new QCheckBox(editingTab);
        enableSyntaxColoring->setObjectName(QString::fromUtf8("enableSyntaxColoring"));

        verticalLayout_2->addWidget(enableSyntaxColoring);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalSpacer_6 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_6);

        syntaxColoringType = new QComboBox(editingTab);
        syntaxColoringType->setObjectName(QString::fromUtf8("syntaxColoringType"));
        sizePolicy.setHeightForWidth(syntaxColoringType->sizePolicy().hasHeightForWidth());
        syntaxColoringType->setSizePolicy(sizePolicy);

        horizontalLayout_10->addWidget(syntaxColoringType);

        syntaxColoringChangeButton = new QPushButton(editingTab);
        syntaxColoringChangeButton->setObjectName(QString::fromUtf8("syntaxColoringChangeButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(syntaxColoringChangeButton->sizePolicy().hasHeightForWidth());
        syntaxColoringChangeButton->setSizePolicy(sizePolicy1);
        syntaxColoringChangeButton->setMaximumSize(QSize(125, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        syntaxColoringChangeButton->setPalette(palette);

        horizontalLayout_10->addWidget(syntaxColoringChangeButton);

        horizontalSpacer_5 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_10);

        editorUsesTabs = new QCheckBox(editingTab);
        editorUsesTabs->setObjectName(QString::fromUtf8("editorUsesTabs"));

        verticalLayout_2->addWidget(editorUsesTabs);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalSpacer_8 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_8);

        label_9 = new QLabel(editingTab);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);

        tabWidth = new QSpinBox(editingTab);
        tabWidth->setObjectName(QString::fromUtf8("tabWidth"));
        tabWidth->setMinimum(1);
        tabWidth->setMaximum(12);
        tabWidth->setValue(4);

        horizontalLayout_12->addWidget(tabWidth);

        horizontalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_7);


        verticalLayout_2->addLayout(horizontalLayout_12);

        verticalSpacer_2 = new QSpacerItem(10, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        tabWidget->addTab(editingTab, QString());
        chuginsTab = new QWidget();
        chuginsTab->setObjectName(QString::fromUtf8("chuginsTab"));
        verticalLayout_4 = new QVBoxLayout(chuginsTab);
        verticalLayout_4->setSpacing(12);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(12, -1, 12, 12);
        enableChugins = new QCheckBox(chuginsTab);
        enableChugins->setObjectName(QString::fromUtf8("enableChugins"));

        verticalLayout_4->addWidget(enableChugins);

        chuginsList = new QListWidget(chuginsTab);
        chuginsList->setObjectName(QString::fromUtf8("chuginsList"));

        verticalLayout_4->addWidget(chuginsList);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        removeChuginButton = new QToolButton(chuginsTab);
        removeChuginButton->setObjectName(QString::fromUtf8("removeChuginButton"));
        removeChuginButton->setMinimumSize(QSize(25, 0));
        QFont font2;
        font2.setBold(true);
        font2.setWeight(75);
        removeChuginButton->setFont(font2);

        horizontalLayout_3->addWidget(removeChuginButton);

        addChuginButton = new QToolButton(chuginsTab);
        addChuginButton->setObjectName(QString::fromUtf8("addChuginButton"));
        addChuginButton->setMinimumSize(QSize(25, 0));
        addChuginButton->setFont(font2);

        horizontalLayout_3->addWidget(addChuginButton);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_9);


        verticalLayout_4->addLayout(horizontalLayout_3);

        tabWidget->addTab(chuginsTab, QString());
        miscTab = new QWidget();
        miscTab->setObjectName(QString::fromUtf8("miscTab"));
        verticalLayout_5 = new QVBoxLayout(miscTab);
        verticalLayout_5->setSpacing(12);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_10 = new QLabel(miscTab);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(3);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label_10);

        currentDirectoryButton = new QPushButton(miscTab);
        currentDirectoryButton->setObjectName(QString::fromUtf8("currentDirectoryButton"));
        sizePolicy1.setHeightForWidth(currentDirectoryButton->sizePolicy().hasHeightForWidth());
        currentDirectoryButton->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(currentDirectoryButton);


        verticalLayout_5->addLayout(horizontalLayout_5);

        currentDirectory = new QLineEdit(miscTab);
        currentDirectory->setObjectName(QString::fromUtf8("currentDirectory"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(currentDirectory->sizePolicy().hasHeightForWidth());
        currentDirectory->setSizePolicy(sizePolicy3);
        currentDirectory->setReadOnly(true);

        verticalLayout_5->addWidget(currentDirectory);

        verticalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);

        tabWidget->addTab(miscTab, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        restoreDefaultsButton = new QPushButton(mAPreferencesWindow);
        restoreDefaultsButton->setObjectName(QString::fromUtf8("restoreDefaultsButton"));
        sizePolicy1.setHeightForWidth(restoreDefaultsButton->sizePolicy().hasHeightForWidth());
        restoreDefaultsButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(restoreDefaultsButton);

        horizontalSpacer = new QSpacerItem(100, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(mAPreferencesWindow);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));
        sizePolicy1.setHeightForWidth(cancelButton->sizePolicy().hasHeightForWidth());
        cancelButton->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(cancelButton);

        okButton = new QPushButton(mAPreferencesWindow);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        sizePolicy1.setHeightForWidth(okButton->sizePolicy().hasHeightForWidth());
        okButton->setSizePolicy(sizePolicy1);
        okButton->setDefault(true);

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(mAPreferencesWindow);
        QObject::connect(okButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(ok()));
        QObject::connect(cancelButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(cancel()));
        QObject::connect(restoreDefaultsButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(restoreDefaults()));
        QObject::connect(audioInput, SIGNAL(currentIndexChanged(int)), mAPreferencesWindow, SLOT(SelectedAudioInputChanged()));
        QObject::connect(audioOutput, SIGNAL(currentIndexChanged(int)), mAPreferencesWindow, SLOT(SelectedAudioOutputChanged()));
        QObject::connect(syntaxColoringChangeButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(syntaxColoringChangeColor()));
        QObject::connect(syntaxColoringType, SIGNAL(currentIndexChanged(int)), mAPreferencesWindow, SLOT(syntaxColoringTypeChanged()));
        QObject::connect(addChuginButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(addChugin()));
        QObject::connect(removeChuginButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(removeChugin()));
        QObject::connect(currentDirectoryButton, SIGNAL(clicked()), mAPreferencesWindow, SLOT(changeCurrentDirectory()));

        tabWidget->setCurrentIndex(2);
        bufferSize->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(mAPreferencesWindow);
    } // setupUi

    void retranslateUi(QDialog *mAPreferencesWindow)
    {
        mAPreferencesWindow->setWindowTitle(QApplication::translate("mAPreferencesWindow", "Preferences", 0, QApplication::UnicodeUTF8));
        enableNetworkVM->setText(QApplication::translate("mAPreferencesWindow", "Accept network VM commands", 0, QApplication::UnicodeUTF8));
        enableAudio->setText(QApplication::translate("mAPreferencesWindow", "Enable Audio", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mAPreferencesWindow", "Audio output:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("mAPreferencesWindow", "Audio input:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("mAPreferencesWindow", "Output channels:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("mAPreferencesWindow", "Input channels:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("mAPreferencesWindow", "Sample rate:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("mAPreferencesWindow", "Buffer size:", 0, QApplication::UnicodeUTF8));
        bufferSize->clear();
        bufferSize->insertItems(0, QStringList()
         << QApplication::translate("mAPreferencesWindow", "64", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mAPreferencesWindow", "128", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mAPreferencesWindow", "256", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mAPreferencesWindow", "512", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mAPreferencesWindow", "1024", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("mAPreferencesWindow", "2048", 0, QApplication::UnicodeUTF8)
        );
        tabWidget->setTabText(tabWidget->indexOf(audioTab), QApplication::translate("mAPreferencesWindow", "Audio", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("mAPreferencesWindow", "Editor Font:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("mAPreferencesWindow", "pt", 0, QApplication::UnicodeUTF8));
        enableSyntaxColoring->setText(QApplication::translate("mAPreferencesWindow", "Enable syntax coloring", 0, QApplication::UnicodeUTF8));
        syntaxColoringChangeButton->setText(QString());
        editorUsesTabs->setText(QApplication::translate("mAPreferencesWindow", "Editor uses tabs, not spaces", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("mAPreferencesWindow", "Tab width:", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(editingTab), QApplication::translate("mAPreferencesWindow", "Editing", 0, QApplication::UnicodeUTF8));
        enableChugins->setText(QApplication::translate("mAPreferencesWindow", "Enable ChuGins", 0, QApplication::UnicodeUTF8));
        removeChuginButton->setText(QApplication::translate("mAPreferencesWindow", "-", 0, QApplication::UnicodeUTF8));
        addChuginButton->setText(QApplication::translate("mAPreferencesWindow", "+", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(chuginsTab), QApplication::translate("mAPreferencesWindow", "ChuGins", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("mAPreferencesWindow", "Current Directory:", 0, QApplication::UnicodeUTF8));
        currentDirectoryButton->setText(QApplication::translate("mAPreferencesWindow", "Select...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(miscTab), QApplication::translate("mAPreferencesWindow", "Miscellaneous", 0, QApplication::UnicodeUTF8));
        restoreDefaultsButton->setText(QApplication::translate("mAPreferencesWindow", "Restore Defaults", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("mAPreferencesWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        okButton->setText(QApplication::translate("mAPreferencesWindow", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mAPreferencesWindow: public Ui_mAPreferencesWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPREFERENCESWINDOW_H

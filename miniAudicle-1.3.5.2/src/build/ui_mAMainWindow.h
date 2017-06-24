/********************************************************************************
** Form generated from reading UI file 'mAMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAMAINWINDOW_H
#define UI_MAMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAMainWindow
{
public:
    QAction *actionNew;
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionPaste;
    QAction *actionSelect_All;
    QAction *actionPreferences;
    QAction *actionAdd_Shred;
    QAction *actionReplace_Shred;
    QAction *actionRemove_Shred;
    QAction *actionAdd_All_Open_Documents;
    QAction *actionReplace_All_Open_Documents;
    QAction *actionRemove_All_Open_Documents;
    QAction *actionRemove_All_Shreds;
    QAction *actionRemove_Last_Shred;
    QAction *actionStart_Virtual_Machine;
    QAction *actionAbort_Currently_Running_Shred;
    QAction *actionVirtual_Machine_Monitor;
    QAction *actionConsole_Monitor;
    QAction *actionMiniAudicle_website;
    QAction *actionChucK_website;
    QAction *actionAbout_miniAudicle;
    QAction *actionLogNone;
    QAction *actionLogCore;
    QAction *actionLogSystem;
    QAction *actionLogSevere;
    QAction *actionLogWarning;
    QAction *actionLogInfo;
    QAction *actionLogConfig;
    QAction *actionLogFine;
    QAction *actionLogFiner;
    QAction *actionLogFinest;
    QAction *actionLogCrazy;
    QAction *actionRecent;
    QAction *actionOpen_Example;
    QAction *actionExport_as_WAV;
    QAction *actionClear_Virtual_Machine;
    QAction *actionDevice_Browser;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuRecent_Files;
    QMenu *menuEdit;
    QMenu *menuChucK;
    QMenu *menuLog_Level;
    QMenu *menuWindow;
    QMenu *menuHelp;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mAMainWindow)
    {
        if (mAMainWindow->objectName().isEmpty())
            mAMainWindow->setObjectName(QString::fromUtf8("mAMainWindow"));
        mAMainWindow->resize(600, 620);
        mAMainWindow->setMinimumSize(QSize(300, 300));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAMainWindow->setWindowIcon(icon);
        actionNew = new QAction(mAMainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionExit = new QAction(mAMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen = new QAction(mAMainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClose = new QAction(mAMainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionSave = new QAction(mAMainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_As = new QAction(mAMainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionCut = new QAction(mAMainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        actionCopy = new QAction(mAMainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        actionUndo = new QAction(mAMainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(mAMainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionPaste = new QAction(mAMainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        actionSelect_All = new QAction(mAMainWindow);
        actionSelect_All->setObjectName(QString::fromUtf8("actionSelect_All"));
        actionPreferences = new QAction(mAMainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionAdd_Shred = new QAction(mAMainWindow);
        actionAdd_Shred->setObjectName(QString::fromUtf8("actionAdd_Shred"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icon/add.png"), QSize(), QIcon::Normal, QIcon::On);
        actionAdd_Shred->setIcon(icon1);
        actionReplace_Shred = new QAction(mAMainWindow);
        actionReplace_Shred->setObjectName(QString::fromUtf8("actionReplace_Shred"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icon/replace.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionReplace_Shred->setIcon(icon2);
        actionRemove_Shred = new QAction(mAMainWindow);
        actionRemove_Shred->setObjectName(QString::fromUtf8("actionRemove_Shred"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icon/remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_Shred->setIcon(icon3);
        actionAdd_All_Open_Documents = new QAction(mAMainWindow);
        actionAdd_All_Open_Documents->setObjectName(QString::fromUtf8("actionAdd_All_Open_Documents"));
        actionReplace_All_Open_Documents = new QAction(mAMainWindow);
        actionReplace_All_Open_Documents->setObjectName(QString::fromUtf8("actionReplace_All_Open_Documents"));
        actionRemove_All_Open_Documents = new QAction(mAMainWindow);
        actionRemove_All_Open_Documents->setObjectName(QString::fromUtf8("actionRemove_All_Open_Documents"));
        actionRemove_All_Shreds = new QAction(mAMainWindow);
        actionRemove_All_Shreds->setObjectName(QString::fromUtf8("actionRemove_All_Shreds"));
        actionRemove_Last_Shred = new QAction(mAMainWindow);
        actionRemove_Last_Shred->setObjectName(QString::fromUtf8("actionRemove_Last_Shred"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icon/removelast.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRemove_Last_Shred->setIcon(icon4);
        actionStart_Virtual_Machine = new QAction(mAMainWindow);
        actionStart_Virtual_Machine->setObjectName(QString::fromUtf8("actionStart_Virtual_Machine"));
        actionStart_Virtual_Machine->setAutoRepeat(false);
        actionAbort_Currently_Running_Shred = new QAction(mAMainWindow);
        actionAbort_Currently_Running_Shred->setObjectName(QString::fromUtf8("actionAbort_Currently_Running_Shred"));
        actionVirtual_Machine_Monitor = new QAction(mAMainWindow);
        actionVirtual_Machine_Monitor->setObjectName(QString::fromUtf8("actionVirtual_Machine_Monitor"));
        actionConsole_Monitor = new QAction(mAMainWindow);
        actionConsole_Monitor->setObjectName(QString::fromUtf8("actionConsole_Monitor"));
        actionMiniAudicle_website = new QAction(mAMainWindow);
        actionMiniAudicle_website->setObjectName(QString::fromUtf8("actionMiniAudicle_website"));
        actionChucK_website = new QAction(mAMainWindow);
        actionChucK_website->setObjectName(QString::fromUtf8("actionChucK_website"));
        actionAbout_miniAudicle = new QAction(mAMainWindow);
        actionAbout_miniAudicle->setObjectName(QString::fromUtf8("actionAbout_miniAudicle"));
        actionLogNone = new QAction(mAMainWindow);
        actionLogNone->setObjectName(QString::fromUtf8("actionLogNone"));
        actionLogNone->setCheckable(true);
        actionLogCore = new QAction(mAMainWindow);
        actionLogCore->setObjectName(QString::fromUtf8("actionLogCore"));
        actionLogCore->setCheckable(true);
        actionLogSystem = new QAction(mAMainWindow);
        actionLogSystem->setObjectName(QString::fromUtf8("actionLogSystem"));
        actionLogSystem->setCheckable(true);
        actionLogSevere = new QAction(mAMainWindow);
        actionLogSevere->setObjectName(QString::fromUtf8("actionLogSevere"));
        actionLogSevere->setCheckable(true);
        actionLogWarning = new QAction(mAMainWindow);
        actionLogWarning->setObjectName(QString::fromUtf8("actionLogWarning"));
        actionLogWarning->setCheckable(true);
        actionLogInfo = new QAction(mAMainWindow);
        actionLogInfo->setObjectName(QString::fromUtf8("actionLogInfo"));
        actionLogInfo->setCheckable(true);
        actionLogConfig = new QAction(mAMainWindow);
        actionLogConfig->setObjectName(QString::fromUtf8("actionLogConfig"));
        actionLogConfig->setCheckable(true);
        actionLogFine = new QAction(mAMainWindow);
        actionLogFine->setObjectName(QString::fromUtf8("actionLogFine"));
        actionLogFine->setCheckable(true);
        actionLogFiner = new QAction(mAMainWindow);
        actionLogFiner->setObjectName(QString::fromUtf8("actionLogFiner"));
        actionLogFiner->setCheckable(true);
        actionLogFinest = new QAction(mAMainWindow);
        actionLogFinest->setObjectName(QString::fromUtf8("actionLogFinest"));
        actionLogFinest->setCheckable(true);
        actionLogCrazy = new QAction(mAMainWindow);
        actionLogCrazy->setObjectName(QString::fromUtf8("actionLogCrazy"));
        actionLogCrazy->setCheckable(true);
        actionRecent = new QAction(mAMainWindow);
        actionRecent->setObjectName(QString::fromUtf8("actionRecent"));
        actionOpen_Example = new QAction(mAMainWindow);
        actionOpen_Example->setObjectName(QString::fromUtf8("actionOpen_Example"));
        actionExport_as_WAV = new QAction(mAMainWindow);
        actionExport_as_WAV->setObjectName(QString::fromUtf8("actionExport_as_WAV"));
        actionClear_Virtual_Machine = new QAction(mAMainWindow);
        actionClear_Virtual_Machine->setObjectName(QString::fromUtf8("actionClear_Virtual_Machine"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icon/removeall.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClear_Virtual_Machine->setIcon(icon5);
        actionDevice_Browser = new QAction(mAMainWindow);
        actionDevice_Browser->setObjectName(QString::fromUtf8("actionDevice_Browser"));
        centralWidget = new QWidget(mAMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);

        verticalLayout_2->addWidget(tabWidget);

        mAMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mAMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 18));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuRecent_Files = new QMenu(menuFile);
        menuRecent_Files->setObjectName(QString::fromUtf8("menuRecent_Files"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuChucK = new QMenu(menuBar);
        menuChucK->setObjectName(QString::fromUtf8("menuChucK"));
        menuLog_Level = new QMenu(menuChucK);
        menuLog_Level->setObjectName(QString::fromUtf8("menuLog_Level"));
        menuWindow = new QMenu(menuBar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        mAMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mAMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        mAMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mAMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        mAMainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuChucK->menuAction());
        menuBar->addAction(menuWindow->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionOpen_Example);
        menuFile->addAction(menuRecent_Files->menuAction());
        menuFile->addAction(actionClose);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addAction(actionExport_as_WAV);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(actionSelect_All);
        menuEdit->addSeparator();
        menuEdit->addAction(actionPreferences);
        menuChucK->addAction(actionAdd_Shred);
        menuChucK->addAction(actionReplace_Shred);
        menuChucK->addAction(actionRemove_Shred);
        menuChucK->addSeparator();
        menuChucK->addAction(actionAdd_All_Open_Documents);
        menuChucK->addAction(actionReplace_All_Open_Documents);
        menuChucK->addAction(actionRemove_All_Open_Documents);
        menuChucK->addSeparator();
        menuChucK->addAction(actionRemove_Last_Shred);
        menuChucK->addAction(actionRemove_All_Shreds);
        menuChucK->addAction(actionClear_Virtual_Machine);
        menuChucK->addSeparator();
        menuChucK->addAction(actionAbort_Currently_Running_Shred);
        menuChucK->addSeparator();
        menuChucK->addAction(actionStart_Virtual_Machine);
        menuChucK->addAction(menuLog_Level->menuAction());
        menuLog_Level->addAction(actionLogNone);
        menuLog_Level->addAction(actionLogCore);
        menuLog_Level->addAction(actionLogSystem);
        menuLog_Level->addAction(actionLogSevere);
        menuLog_Level->addAction(actionLogWarning);
        menuLog_Level->addAction(actionLogInfo);
        menuLog_Level->addAction(actionLogConfig);
        menuLog_Level->addAction(actionLogFine);
        menuLog_Level->addAction(actionLogFiner);
        menuLog_Level->addAction(actionLogFinest);
        menuLog_Level->addAction(actionLogCrazy);
        menuWindow->addAction(actionConsole_Monitor);
        menuWindow->addAction(actionVirtual_Machine_Monitor);
        menuWindow->addAction(actionDevice_Browser);
        menuWindow->addSeparator();
        menuHelp->addAction(actionMiniAudicle_website);
        menuHelp->addAction(actionChucK_website);
        menuHelp->addSeparator();
        menuHelp->addAction(actionAbout_miniAudicle);
        mainToolBar->addAction(actionAdd_Shred);
        mainToolBar->addAction(actionReplace_Shred);
        mainToolBar->addAction(actionRemove_Shred);
        mainToolBar->addAction(actionRemove_Last_Shred);
        mainToolBar->addAction(actionClear_Virtual_Machine);

        retranslateUi(mAMainWindow);
        QObject::connect(actionExit, SIGNAL(triggered()), mAMainWindow, SLOT(exit()));
        QObject::connect(actionNew, SIGNAL(triggered()), mAMainWindow, SLOT(newFile()));
        QObject::connect(actionOpen, SIGNAL(triggered()), mAMainWindow, SLOT(openFile()));
        QObject::connect(actionClose, SIGNAL(triggered()), mAMainWindow, SLOT(closeFile()));
        QObject::connect(tabWidget, SIGNAL(tabCloseRequested(int)), mAMainWindow, SLOT(closeFile(int)));
        QObject::connect(actionSave, SIGNAL(triggered()), mAMainWindow, SLOT(saveFile()));
        QObject::connect(actionStart_Virtual_Machine, SIGNAL(triggered()), mAMainWindow, SLOT(toggleVM()));
        QObject::connect(actionAdd_Shred, SIGNAL(triggered()), mAMainWindow, SLOT(addCurrentDocument()));
        QObject::connect(actionRemove_Shred, SIGNAL(triggered()), mAMainWindow, SLOT(removeCurrentDocument()));
        QObject::connect(actionReplace_Shred, SIGNAL(triggered()), mAMainWindow, SLOT(replaceCurrentDocument()));
        QObject::connect(actionRemove_Last_Shred, SIGNAL(triggered()), mAMainWindow, SLOT(removeLastShred()));
        QObject::connect(actionRemove_All_Shreds, SIGNAL(triggered()), mAMainWindow, SLOT(removeAllShreds()));
        QObject::connect(actionAbout_miniAudicle, SIGNAL(triggered()), mAMainWindow, SLOT(about()));
        QObject::connect(actionConsole_Monitor, SIGNAL(triggered()), mAMainWindow, SLOT(showConsoleMonitor()));
        QObject::connect(actionVirtual_Machine_Monitor, SIGNAL(triggered()), mAMainWindow, SLOT(showVirtualMachineMonitor()));
        QObject::connect(actionLogConfig, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogCore, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogCrazy, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogFine, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogFiner, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogFinest, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogInfo, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogNone, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogSevere, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogSystem, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionLogWarning, SIGNAL(triggered()), mAMainWindow, SLOT(setLogLevel()));
        QObject::connect(actionPreferences, SIGNAL(triggered()), mAMainWindow, SLOT(showPreferences()));
        QObject::connect(actionOpen_Example, SIGNAL(triggered()), mAMainWindow, SLOT(openExample()));
        QObject::connect(actionSave_As, SIGNAL(triggered()), mAMainWindow, SLOT(saveAs()));
        QObject::connect(tabWidget, SIGNAL(currentChanged(int)), mAMainWindow, SLOT(tabSelected(int)));
        QObject::connect(actionAbort_Currently_Running_Shred, SIGNAL(triggered()), mAMainWindow, SLOT(abortCurrentShred()));
        QObject::connect(actionClear_Virtual_Machine, SIGNAL(triggered()), mAMainWindow, SLOT(clearVM()));
        QObject::connect(actionDevice_Browser, SIGNAL(triggered()), mAMainWindow, SLOT(showDeviceBrowser()));

        QMetaObject::connectSlotsByName(mAMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mAMainWindow)
    {
        mAMainWindow->setWindowTitle(QApplication::translate("mAMainWindow", "miniAudicle", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("mAMainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionNew->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+N", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("mAMainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        actionExit->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("mAMainWindow", "Open...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionOpen->setToolTip(QApplication::translate("mAMainWindow", "Open...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionOpen->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+O", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("mAMainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionClose->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+W", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("mAMainWindow", "Save", 0, QApplication::UnicodeUTF8));
        actionSave->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionSave_As->setText(QApplication::translate("mAMainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionSave_As->setToolTip(QApplication::translate("mAMainWindow", "Save As...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave_As->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Shift+S", 0, QApplication::UnicodeUTF8));
        actionCut->setText(QApplication::translate("mAMainWindow", "Cut", 0, QApplication::UnicodeUTF8));
        actionCut->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+X", 0, QApplication::UnicodeUTF8));
        actionCopy->setText(QApplication::translate("mAMainWindow", "Copy", 0, QApplication::UnicodeUTF8));
        actionCopy->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+C", 0, QApplication::UnicodeUTF8));
        actionUndo->setText(QApplication::translate("mAMainWindow", "Undo", 0, QApplication::UnicodeUTF8));
        actionUndo->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Z", 0, QApplication::UnicodeUTF8));
        actionRedo->setText(QApplication::translate("mAMainWindow", "Redo", 0, QApplication::UnicodeUTF8));
        actionRedo->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Shift+Z", 0, QApplication::UnicodeUTF8));
        actionPaste->setText(QApplication::translate("mAMainWindow", "Paste", 0, QApplication::UnicodeUTF8));
        actionPaste->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+V", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setText(QApplication::translate("mAMainWindow", "Select All", 0, QApplication::UnicodeUTF8));
        actionSelect_All->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+A", 0, QApplication::UnicodeUTF8));
        actionPreferences->setText(QApplication::translate("mAMainWindow", "Preferences...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionPreferences->setToolTip(QApplication::translate("mAMainWindow", "Preferences...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionPreferences->setShortcut(QApplication::translate("mAMainWindow", "Alt+,", 0, QApplication::UnicodeUTF8));
        actionAdd_Shred->setText(QApplication::translate("mAMainWindow", "Add Shred", 0, QApplication::UnicodeUTF8));
        actionAdd_Shred->setShortcut(QApplication::translate("mAMainWindow", "Alt++", 0, QApplication::UnicodeUTF8));
        actionReplace_Shred->setText(QApplication::translate("mAMainWindow", "Replace Shred", 0, QApplication::UnicodeUTF8));
        actionReplace_Shred->setShortcut(QApplication::translate("mAMainWindow", "Alt+=", 0, QApplication::UnicodeUTF8));
        actionRemove_Shred->setText(QApplication::translate("mAMainWindow", "Remove Shred", 0, QApplication::UnicodeUTF8));
        actionRemove_Shred->setShortcut(QApplication::translate("mAMainWindow", "Alt+-", 0, QApplication::UnicodeUTF8));
        actionAdd_All_Open_Documents->setText(QApplication::translate("mAMainWindow", "Add All Open Documents", 0, QApplication::UnicodeUTF8));
        actionAdd_All_Open_Documents->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Alt+Shift+=", 0, QApplication::UnicodeUTF8));
        actionReplace_All_Open_Documents->setText(QApplication::translate("mAMainWindow", "Replace All Open Documents", 0, QApplication::UnicodeUTF8));
        actionReplace_All_Open_Documents->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Alt+=", 0, QApplication::UnicodeUTF8));
        actionRemove_All_Open_Documents->setText(QApplication::translate("mAMainWindow", "Remove All Open Documents", 0, QApplication::UnicodeUTF8));
        actionRemove_All_Open_Documents->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Alt+-", 0, QApplication::UnicodeUTF8));
        actionRemove_All_Shreds->setText(QApplication::translate("mAMainWindow", "Remove All Shreds", 0, QApplication::UnicodeUTF8));
        actionRemove_Last_Shred->setText(QApplication::translate("mAMainWindow", "Remove Last Shred", 0, QApplication::UnicodeUTF8));
        actionStart_Virtual_Machine->setText(QApplication::translate("mAMainWindow", "Start Virtual Machine", 0, QApplication::UnicodeUTF8));
        actionStart_Virtual_Machine->setShortcut(QApplication::translate("mAMainWindow", "Alt+.", 0, QApplication::UnicodeUTF8));
        actionAbort_Currently_Running_Shred->setText(QApplication::translate("mAMainWindow", "Abort Currently Running Shred", 0, QApplication::UnicodeUTF8));
        actionAbort_Currently_Running_Shred->setShortcut(QApplication::translate("mAMainWindow", "Alt+K", 0, QApplication::UnicodeUTF8));
        actionVirtual_Machine_Monitor->setText(QApplication::translate("mAMainWindow", "Virtual Machine Monitor", 0, QApplication::UnicodeUTF8));
        actionVirtual_Machine_Monitor->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+1", 0, QApplication::UnicodeUTF8));
        actionConsole_Monitor->setText(QApplication::translate("mAMainWindow", "Console Monitor", 0, QApplication::UnicodeUTF8));
        actionConsole_Monitor->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+0", 0, QApplication::UnicodeUTF8));
        actionMiniAudicle_website->setText(QApplication::translate("mAMainWindow", "miniAudicle website...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionMiniAudicle_website->setToolTip(QApplication::translate("mAMainWindow", "miniAudicle website...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionChucK_website->setText(QApplication::translate("mAMainWindow", "ChucK website...", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionChucK_website->setToolTip(QApplication::translate("mAMainWindow", "ChucK website...", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionAbout_miniAudicle->setText(QApplication::translate("mAMainWindow", "About miniAudicle", 0, QApplication::UnicodeUTF8));
        actionLogNone->setText(QApplication::translate("mAMainWindow", "None", 0, QApplication::UnicodeUTF8));
        actionLogCore->setText(QApplication::translate("mAMainWindow", "Core", 0, QApplication::UnicodeUTF8));
        actionLogSystem->setText(QApplication::translate("mAMainWindow", "System", 0, QApplication::UnicodeUTF8));
        actionLogSevere->setText(QApplication::translate("mAMainWindow", "Severe", 0, QApplication::UnicodeUTF8));
        actionLogWarning->setText(QApplication::translate("mAMainWindow", "Warning", 0, QApplication::UnicodeUTF8));
        actionLogInfo->setText(QApplication::translate("mAMainWindow", "Info", 0, QApplication::UnicodeUTF8));
        actionLogConfig->setText(QApplication::translate("mAMainWindow", "Config", 0, QApplication::UnicodeUTF8));
        actionLogFine->setText(QApplication::translate("mAMainWindow", "Fine", 0, QApplication::UnicodeUTF8));
        actionLogFiner->setText(QApplication::translate("mAMainWindow", "Finer", 0, QApplication::UnicodeUTF8));
        actionLogFinest->setText(QApplication::translate("mAMainWindow", "Finest", 0, QApplication::UnicodeUTF8));
        actionLogCrazy->setText(QApplication::translate("mAMainWindow", "Crazy", 0, QApplication::UnicodeUTF8));
        actionRecent->setText(QApplication::translate("mAMainWindow", "Recent", 0, QApplication::UnicodeUTF8));
        actionOpen_Example->setText(QApplication::translate("mAMainWindow", "Open Example...", 0, QApplication::UnicodeUTF8));
        actionExport_as_WAV->setText(QApplication::translate("mAMainWindow", "Export...", 0, QApplication::UnicodeUTF8));
        actionExport_as_WAV->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+Alt+E", 0, QApplication::UnicodeUTF8));
        actionClear_Virtual_Machine->setText(QApplication::translate("mAMainWindow", "Clear Virtual Machine", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionClear_Virtual_Machine->setToolTip(QApplication::translate("mAMainWindow", "Clear Virtual Machine", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionClear_Virtual_Machine->setShortcut(QApplication::translate("mAMainWindow", "Alt+Del, Ctrl+S", 0, QApplication::UnicodeUTF8));
        actionDevice_Browser->setText(QApplication::translate("mAMainWindow", "Device Browser", 0, QApplication::UnicodeUTF8));
        actionDevice_Browser->setShortcut(QApplication::translate("mAMainWindow", "Ctrl+2", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("mAMainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuRecent_Files->setTitle(QApplication::translate("mAMainWindow", "Open Recent", 0, QApplication::UnicodeUTF8));
        menuEdit->setTitle(QApplication::translate("mAMainWindow", "Edit", 0, QApplication::UnicodeUTF8));
        menuChucK->setTitle(QApplication::translate("mAMainWindow", "ChucK", 0, QApplication::UnicodeUTF8));
        menuLog_Level->setTitle(QApplication::translate("mAMainWindow", "Log Level", 0, QApplication::UnicodeUTF8));
        menuWindow->setTitle(QApplication::translate("mAMainWindow", "Window", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("mAMainWindow", "Help", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mAMainWindow: public Ui_mAMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAMAINWINDOW_H

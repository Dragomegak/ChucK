/********************************************************************************
** Form generated from reading UI file 'mAExportDialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAEXPORTDIALOG_H
#define UI_MAEXPORTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mAExportDialog
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QCheckBox *limit;
    QSpinBox *duration;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *wavCheckbox;
    QCheckBox *oggCheckbox;
    QVBoxLayout *verticalLayout_2;
    QCheckBox *mp3Checkbox;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *mAExportDialog)
    {
        if (mAExportDialog->objectName().isEmpty())
            mAExportDialog->setObjectName(QString::fromUtf8("mAExportDialog"));
        mAExportDialog->resize(309, 139);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icon/miniAudicle.png"), QSize(), QIcon::Normal, QIcon::Off);
        mAExportDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(mAExportDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widget = new QWidget(mAExportDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        limit = new QCheckBox(widget);
        limit->setObjectName(QString::fromUtf8("limit"));

        horizontalLayout->addWidget(limit);

        duration = new QSpinBox(widget);
        duration->setObjectName(QString::fromUtf8("duration"));
        duration->setMinimum(1);
        duration->setMaximum(10000);

        horizontalLayout->addWidget(duration);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(widget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(mAExportDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        wavCheckbox = new QCheckBox(mAExportDialog);
        wavCheckbox->setObjectName(QString::fromUtf8("wavCheckbox"));

        verticalLayout_3->addWidget(wavCheckbox);

        oggCheckbox = new QCheckBox(mAExportDialog);
        oggCheckbox->setObjectName(QString::fromUtf8("oggCheckbox"));

        verticalLayout_3->addWidget(oggCheckbox);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        mp3Checkbox = new QCheckBox(mAExportDialog);
        mp3Checkbox->setObjectName(QString::fromUtf8("mp3Checkbox"));

        verticalLayout_2->addWidget(mp3Checkbox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout_2);


        verticalLayout->addLayout(horizontalLayout_2);

        buttonBox = new QDialogButtonBox(mAExportDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(mAExportDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), mAExportDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), mAExportDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(mAExportDialog);
    } // setupUi

    void retranslateUi(QDialog *mAExportDialog)
    {
        mAExportDialog->setWindowTitle(QApplication::translate("mAExportDialog", "Export as WAV", 0, QApplication::UnicodeUTF8));
        limit->setText(QApplication::translate("mAExportDialog", "Limit duration to", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("mAExportDialog", "seconds", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("mAExportDialog", "Output format(s):", 0, QApplication::UnicodeUTF8));
        wavCheckbox->setText(QApplication::translate("mAExportDialog", "WAV", 0, QApplication::UnicodeUTF8));
        oggCheckbox->setText(QApplication::translate("mAExportDialog", "Ogg Vorbis", 0, QApplication::UnicodeUTF8));
        mp3Checkbox->setText(QApplication::translate("mAExportDialog", "MP3", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mAExportDialog: public Ui_mAExportDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAEXPORTDIALOG_H

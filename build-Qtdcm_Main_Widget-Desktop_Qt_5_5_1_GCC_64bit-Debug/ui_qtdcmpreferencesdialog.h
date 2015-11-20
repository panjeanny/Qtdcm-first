/********************************************************************************
** Form generated from reading UI file 'qtdcmpreferencesdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMPREFERENCESDIALOG_H
#define UI_QTDCMPREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtDcmDcm2niiSettingsWidget.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include "QtDcmPreferencesWidget.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QGridLayout *gridLayout;
    QtDcmPreferencesWidget *preferencesWidget;
    QtDcmDcm2niiSettingsWidget *dcm2niiWidget;
    QDialogButtonBox *buttonBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QStringLiteral("PreferencesDialog"));
        PreferencesDialog->resize(535, 516);
        gridLayout = new QGridLayout(PreferencesDialog);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        preferencesWidget = new QtDcmPreferencesWidget(PreferencesDialog);
        preferencesWidget->setObjectName(QStringLiteral("preferencesWidget"));

        gridLayout->addWidget(preferencesWidget, 0, 0, 1, 1);

        dcm2niiWidget = new QtDcmDcm2niiSettingsWidget(PreferencesDialog);
        dcm2niiWidget->setObjectName(QStringLiteral("dcm2niiWidget"));

        gridLayout->addWidget(dcm2niiWidget, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 1);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "QtDcm settings", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMPREFERENCESDIALOG_H

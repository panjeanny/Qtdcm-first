/********************************************************************************
** Form generated from reading UI file 'qtdcmpreferenceswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMPREFERENCESWIDGET_H
#define UI_QTDCMPREFERENCESWIDGET_H

#include <QtCore/QVariant>
#include <QtDcmLocalDicomSettingsWidget.h>
#include <QtDcmServersDicomSettingsWidget.h>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesWidget
{
public:
    QGridLayout *gridLayout;
    QtDcmLocalDicomSettingsWidget *localDicomSettingsWidget;
    QtDcmServersDicomSettingsWidget *serversDicomSettingsWidget;

    void setupUi(QWidget *PreferencesWidget)
    {
        if (PreferencesWidget->objectName().isEmpty())
            PreferencesWidget->setObjectName(QStringLiteral("PreferencesWidget"));
        PreferencesWidget->resize(544, 529);
        gridLayout = new QGridLayout(PreferencesWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        localDicomSettingsWidget = new QtDcmLocalDicomSettingsWidget(PreferencesWidget);
        localDicomSettingsWidget->setObjectName(QStringLiteral("localDicomSettingsWidget"));

        gridLayout->addWidget(localDicomSettingsWidget, 0, 0, 1, 1);

        serversDicomSettingsWidget = new QtDcmServersDicomSettingsWidget(PreferencesWidget);
        serversDicomSettingsWidget->setObjectName(QStringLiteral("serversDicomSettingsWidget"));

        gridLayout->addWidget(serversDicomSettingsWidget, 1, 0, 1, 1);


        retranslateUi(PreferencesWidget);

        QMetaObject::connectSlotsByName(PreferencesWidget);
    } // setupUi

    void retranslateUi(QWidget *PreferencesWidget)
    {
        PreferencesWidget->setWindowTitle(QApplication::translate("PreferencesWidget", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesWidget: public Ui_PreferencesWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMPREFERENCESWIDGET_H

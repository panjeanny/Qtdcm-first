/********************************************************************************
** Form generated from reading UI file 'qtdcmImportWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMIMPORTWIDGET_H
#define UI_QTDCMIMPORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDcmImportWidget
{
public:
    QGridLayout *gridLayout;
    QProgressBar *importProgressBar;
    QPushButton *importButton;

    void setupUi(QWidget *QtDcmImportWidget)
    {
        if (QtDcmImportWidget->objectName().isEmpty())
            QtDcmImportWidget->setObjectName(QStringLiteral("QtDcmImportWidget"));
        QtDcmImportWidget->resize(301, 72);
        QtDcmImportWidget->setMinimumSize(QSize(0, 72));
        QtDcmImportWidget->setMaximumSize(QSize(16777215, 72));
        gridLayout = new QGridLayout(QtDcmImportWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        importProgressBar = new QProgressBar(QtDcmImportWidget);
        importProgressBar->setObjectName(QStringLiteral("importProgressBar"));
        importProgressBar->setMaximumSize(QSize(300, 16));
        importProgressBar->setValue(0);

        gridLayout->addWidget(importProgressBar, 0, 0, 1, 1);

        importButton = new QPushButton(QtDcmImportWidget);
        importButton->setObjectName(QStringLiteral("importButton"));
        importButton->setMaximumSize(QSize(300, 16777215));
        importButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        importButton->setIcon(icon);

        gridLayout->addWidget(importButton, 1, 0, 1, 1);


        retranslateUi(QtDcmImportWidget);

        QMetaObject::connectSlotsByName(QtDcmImportWidget);
    } // setupUi

    void retranslateUi(QWidget *QtDcmImportWidget)
    {
        QtDcmImportWidget->setWindowTitle(QApplication::translate("QtDcmImportWidget", "Form", 0));
        importButton->setText(QApplication::translate("QtDcmImportWidget", "Import", 0));
    } // retranslateUi

};

namespace Ui {
    class QtDcmImportWidget: public Ui_QtDcmImportWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMIMPORTWIDGET_H

/********************************************************************************
** Form generated from reading UI file 'qtdcmLocalDicomSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMLOCALDICOMSETTINGSWIDGET_H
#define UI_QTDCMLOCALDICOMSETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDcmLocalDicomSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_10;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *localAetitleEdit;
    QLineEdit *localPortEdit;
    QLineEdit *localHostnameEdit;

    void setupUi(QWidget *QtDcmLocalDicomSettingsWidget)
    {
        if (QtDcmLocalDicomSettingsWidget->objectName().isEmpty())
            QtDcmLocalDicomSettingsWidget->setObjectName(QStringLiteral("QtDcmLocalDicomSettingsWidget"));
        QtDcmLocalDicomSettingsWidget->resize(488, 145);
        QtDcmLocalDicomSettingsWidget->setMinimumSize(QSize(0, 145));
        QtDcmLocalDicomSettingsWidget->setMaximumSize(QSize(16777215, 145));
        gridLayout = new QGridLayout(QtDcmLocalDicomSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(QtDcmLocalDicomSettingsWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setFlat(false);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_4->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_4->addWidget(label_2);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QStringLiteral("label_10"));

        verticalLayout_4->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        localAetitleEdit = new QLineEdit(groupBox);
        localAetitleEdit->setObjectName(QStringLiteral("localAetitleEdit"));

        verticalLayout_3->addWidget(localAetitleEdit);

        localPortEdit = new QLineEdit(groupBox);
        localPortEdit->setObjectName(QStringLiteral("localPortEdit"));

        verticalLayout_3->addWidget(localPortEdit);

        localHostnameEdit = new QLineEdit(groupBox);
        localHostnameEdit->setObjectName(QStringLiteral("localHostnameEdit"));

        verticalLayout_3->addWidget(localHostnameEdit);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout_3->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(QtDcmLocalDicomSettingsWidget);

        QMetaObject::connectSlotsByName(QtDcmLocalDicomSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QtDcmLocalDicomSettingsWidget)
    {
        QtDcmLocalDicomSettingsWidget->setWindowTitle(QApplication::translate("QtDcmLocalDicomSettingsWidget", "Form", 0));
        groupBox->setTitle(QApplication::translate("QtDcmLocalDicomSettingsWidget", "Local dicom settings", 0));
        label->setText(QApplication::translate("QtDcmLocalDicomSettingsWidget", "AE Title :", 0));
        label_2->setText(QApplication::translate("QtDcmLocalDicomSettingsWidget", "TCP port :", 0));
        label_10->setText(QApplication::translate("QtDcmLocalDicomSettingsWidget", "Hostname :", 0));
    } // retranslateUi

};

namespace Ui {
    class QtDcmLocalDicomSettingsWidget: public Ui_QtDcmLocalDicomSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMLOCALDICOMSETTINGSWIDGET_H

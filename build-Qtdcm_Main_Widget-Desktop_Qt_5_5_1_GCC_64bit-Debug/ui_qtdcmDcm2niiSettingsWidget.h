/********************************************************************************
** Form generated from reading UI file 'qtdcmDcm2niiSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMDCM2NIISETTINGSWIDGET_H
#define UI_QTDCMDCM2NIISETTINGSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDcmDcm2niiSettingsWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QCheckBox *dcm2niiCheckBox;
    QSpacerItem *horizontalSpacer;
    QFrame *dcm2niiPathFrame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *dcm2niiLineEdit;
    QPushButton *browseDcm2niiButton;

    void setupUi(QWidget *QtDcmDcm2niiSettingsWidget)
    {
        if (QtDcmDcm2niiSettingsWidget->objectName().isEmpty())
            QtDcmDcm2niiSettingsWidget->setObjectName(QStringLiteral("QtDcmDcm2niiSettingsWidget"));
        QtDcmDcm2niiSettingsWidget->resize(386, 111);
        QtDcmDcm2niiSettingsWidget->setMinimumSize(QSize(0, 111));
        QtDcmDcm2niiSettingsWidget->setMaximumSize(QSize(16777215, 111));
        gridLayout_2 = new QGridLayout(QtDcmDcm2niiSettingsWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        groupBox = new QGroupBox(QtDcmDcm2niiSettingsWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        dcm2niiCheckBox = new QCheckBox(groupBox);
        dcm2niiCheckBox->setObjectName(QStringLiteral("dcm2niiCheckBox"));
        dcm2niiCheckBox->setChecked(true);

        horizontalLayout->addWidget(dcm2niiCheckBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 1);

        dcm2niiPathFrame = new QFrame(groupBox);
        dcm2niiPathFrame->setObjectName(QStringLiteral("dcm2niiPathFrame"));
        dcm2niiPathFrame->setFrameShape(QFrame::NoFrame);
        dcm2niiPathFrame->setFrameShadow(QFrame::Plain);
        gridLayout = new QGridLayout(dcm2niiPathFrame);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(dcm2niiPathFrame);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        dcm2niiLineEdit = new QLineEdit(dcm2niiPathFrame);
        dcm2niiLineEdit->setObjectName(QStringLiteral("dcm2niiLineEdit"));
        dcm2niiLineEdit->setReadOnly(true);

        horizontalLayout_2->addWidget(dcm2niiLineEdit);

        browseDcm2niiButton = new QPushButton(dcm2niiPathFrame);
        browseDcm2niiButton->setObjectName(QStringLiteral("browseDcm2niiButton"));

        horizontalLayout_2->addWidget(browseDcm2niiButton);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(dcm2niiPathFrame, 1, 0, 1, 2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);


        retranslateUi(QtDcmDcm2niiSettingsWidget);

        QMetaObject::connectSlotsByName(QtDcmDcm2niiSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QtDcmDcm2niiSettingsWidget)
    {
        QtDcmDcm2niiSettingsWidget->setWindowTitle(QApplication::translate("QtDcmDcm2niiSettingsWidget", "Form", 0));
        groupBox->setTitle(QApplication::translate("QtDcmDcm2niiSettingsWidget", "Dicom converter", 0));
        dcm2niiCheckBox->setText(QApplication::translate("QtDcmDcm2niiSettingsWidget", "Use Dcm2nii", 0));
        label->setText(QApplication::translate("QtDcmDcm2niiSettingsWidget", "Dcm2nii path :", 0));
        browseDcm2niiButton->setText(QApplication::translate("QtDcmDcm2niiSettingsWidget", "Browse...", 0));
    } // retranslateUi

};

namespace Ui {
    class QtDcmDcm2niiSettingsWidget: public Ui_QtDcmDcm2niiSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMDCM2NIISETTINGSWIDGET_H

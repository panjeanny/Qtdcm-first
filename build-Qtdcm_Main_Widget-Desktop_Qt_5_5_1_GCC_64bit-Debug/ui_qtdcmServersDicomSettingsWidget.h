/********************************************************************************
** Form generated from reading UI file 'qtdcmServersDicomSettingsWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMSERVERSDICOMSETTINGSWIDGET_H
#define UI_QTDCMSERVERSDICOMSETTINGSWIDGET_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDcmServersDicomSettingsWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QTreeWidget *treeWidget;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *addButton;
    QPushButton *removeButton;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_5;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QVBoxLayout *verticalLayout;
    QLineEdit *serverHostnameEdit;
    QLineEdit *serverAetitleEdit;
    QLineEdit *serverPortEdit;
    QLineEdit *serverNameEdit;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *echoButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *QtDcmServersDicomSettingsWidget)
    {
        if (QtDcmServersDicomSettingsWidget->objectName().isEmpty())
            QtDcmServersDicomSettingsWidget->setObjectName(QStringLiteral("QtDcmServersDicomSettingsWidget"));
        QtDcmServersDicomSettingsWidget->resize(598, 392);
        gridLayout = new QGridLayout(QtDcmServersDicomSettingsWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_3 = new QGroupBox(QtDcmServersDicomSettingsWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        treeWidget = new QTreeWidget(groupBox_3);
        treeWidget->setObjectName(QStringLiteral("treeWidget"));
        treeWidget->setExpandsOnDoubleClick(true);
        treeWidget->setColumnCount(4);
        treeWidget->header()->setCascadingSectionResizes(false);
        treeWidget->header()->setHighlightSections(true);

        gridLayout_5->addWidget(treeWidget, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        addButton = new QPushButton(groupBox_3);
        addButton->setObjectName(QStringLiteral("addButton"));

        horizontalLayout_4->addWidget(addButton);

        removeButton = new QPushButton(groupBox_3);
        removeButton->setObjectName(QStringLiteral("removeButton"));

        horizontalLayout_4->addWidget(removeButton);


        gridLayout_5->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_6);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(label_7);


        horizontalLayout_5->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        serverHostnameEdit = new QLineEdit(groupBox_3);
        serverHostnameEdit->setObjectName(QStringLiteral("serverHostnameEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(serverHostnameEdit->sizePolicy().hasHeightForWidth());
        serverHostnameEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(serverHostnameEdit);

        serverAetitleEdit = new QLineEdit(groupBox_3);
        serverAetitleEdit->setObjectName(QStringLiteral("serverAetitleEdit"));
        sizePolicy1.setHeightForWidth(serverAetitleEdit->sizePolicy().hasHeightForWidth());
        serverAetitleEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(serverAetitleEdit);

        serverPortEdit = new QLineEdit(groupBox_3);
        serverPortEdit->setObjectName(QStringLiteral("serverPortEdit"));
        sizePolicy1.setHeightForWidth(serverPortEdit->sizePolicy().hasHeightForWidth());
        serverPortEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(serverPortEdit);

        serverNameEdit = new QLineEdit(groupBox_3);
        serverNameEdit->setObjectName(QStringLiteral("serverNameEdit"));
        sizePolicy1.setHeightForWidth(serverNameEdit->sizePolicy().hasHeightForWidth());
        serverNameEdit->setSizePolicy(sizePolicy1);

        verticalLayout->addWidget(serverNameEdit);


        horizontalLayout_5->addLayout(verticalLayout);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_6);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        echoButton = new QPushButton(groupBox_3);
        echoButton->setObjectName(QStringLiteral("echoButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/echo.png"), QSize(), QIcon::Normal, QIcon::Off);
        echoButton->setIcon(icon);

        horizontalLayout_6->addWidget(echoButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_6, 3, 0, 1, 1);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);


        retranslateUi(QtDcmServersDicomSettingsWidget);

        QMetaObject::connectSlotsByName(QtDcmServersDicomSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *QtDcmServersDicomSettingsWidget)
    {
        QtDcmServersDicomSettingsWidget->setWindowTitle(QApplication::translate("QtDcmServersDicomSettingsWidget", "Form", 0));
        groupBox_3->setTitle(QApplication::translate("QtDcmServersDicomSettingsWidget", "Dicom servers settings", 0));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QApplication::translate("QtDcmServersDicomSettingsWidget", "Hostname", 0));
        ___qtreewidgetitem->setText(2, QApplication::translate("QtDcmServersDicomSettingsWidget", "Port", 0));
        ___qtreewidgetitem->setText(1, QApplication::translate("QtDcmServersDicomSettingsWidget", "AETitle", 0));
        ___qtreewidgetitem->setText(0, QApplication::translate("QtDcmServersDicomSettingsWidget", "Name", 0));
        addButton->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "Add", 0));
        removeButton->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "Remove", 0));
        label_4->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "Server", 0));
        label_5->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "AE Title", 0));
        label_6->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "TCP port", 0));
        label_7->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "Name", 0));
        echoButton->setText(QApplication::translate("QtDcmServersDicomSettingsWidget", "Send echo", 0));
    } // retranslateUi

};

namespace Ui {
    class QtDcmServersDicomSettingsWidget: public Ui_QtDcmServersDicomSettingsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMSERVERSDICOMSETTINGSWIDGET_H

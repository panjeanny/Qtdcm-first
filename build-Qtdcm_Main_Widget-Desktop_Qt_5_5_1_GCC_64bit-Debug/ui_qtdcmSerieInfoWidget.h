/********************************************************************************
** Form generated from reading UI file 'qtdcmSerieInfoWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMSERIEINFOWIDGET_H
#define UI_QTDCMSERIEINFOWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDcmSerieInfoWidget
{
public:
    QGridLayout *gridLayout;
    QGroupBox *infosGroupBox;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *elementCountLabel;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLabel *institutionLabel;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QLabel *operatorLabel;

    void setupUi(QWidget *QtDcmSerieInfoWidget)
    {
        if (QtDcmSerieInfoWidget->objectName().isEmpty())
            QtDcmSerieInfoWidget->setObjectName(QStringLiteral("QtDcmSerieInfoWidget"));
        QtDcmSerieInfoWidget->resize(289, 117);
        QtDcmSerieInfoWidget->setMinimumSize(QSize(0, 117));
        QtDcmSerieInfoWidget->setMaximumSize(QSize(16777215, 117));
        gridLayout = new QGridLayout(QtDcmSerieInfoWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        infosGroupBox = new QGroupBox(QtDcmSerieInfoWidget);
        infosGroupBox->setObjectName(QStringLiteral("infosGroupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(infosGroupBox->sizePolicy().hasHeightForWidth());
        infosGroupBox->setSizePolicy(sizePolicy);
        infosGroupBox->setMinimumSize(QSize(200, 0));
        infosGroupBox->setMaximumSize(QSize(300, 16777215));
        gridLayout_3 = new QGridLayout(infosGroupBox);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(infosGroupBox);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_4->addWidget(label);

        elementCountLabel = new QLabel(infosGroupBox);
        elementCountLabel->setObjectName(QStringLiteral("elementCountLabel"));

        horizontalLayout_4->addWidget(elementCountLabel);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(infosGroupBox);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_5->addWidget(label_3);

        institutionLabel = new QLabel(infosGroupBox);
        institutionLabel->setObjectName(QStringLiteral("institutionLabel"));

        horizontalLayout_5->addWidget(institutionLabel);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_5 = new QLabel(infosGroupBox);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_7->addWidget(label_5);

        operatorLabel = new QLabel(infosGroupBox);
        operatorLabel->setObjectName(QStringLiteral("operatorLabel"));

        horizontalLayout_7->addWidget(operatorLabel);


        gridLayout_3->addLayout(horizontalLayout_7, 2, 0, 1, 1);


        gridLayout->addWidget(infosGroupBox, 0, 0, 1, 1);


        retranslateUi(QtDcmSerieInfoWidget);

        QMetaObject::connectSlotsByName(QtDcmSerieInfoWidget);
    } // setupUi

    void retranslateUi(QWidget *QtDcmSerieInfoWidget)
    {
        QtDcmSerieInfoWidget->setWindowTitle(QApplication::translate("QtDcmSerieInfoWidget", "Form", 0));
        infosGroupBox->setTitle(QApplication::translate("QtDcmSerieInfoWidget", "Informations", 0));
        label->setText(QApplication::translate("QtDcmSerieInfoWidget", "Elements count :", 0));
        elementCountLabel->setText(QString());
        label_3->setText(QApplication::translate("QtDcmSerieInfoWidget", "Institution :", 0));
        institutionLabel->setText(QString());
        label_5->setText(QApplication::translate("QtDcmSerieInfoWidget", "Operator :", 0));
        operatorLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QtDcmSerieInfoWidget: public Ui_QtDcmSerieInfoWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMSERIEINFOWIDGET_H

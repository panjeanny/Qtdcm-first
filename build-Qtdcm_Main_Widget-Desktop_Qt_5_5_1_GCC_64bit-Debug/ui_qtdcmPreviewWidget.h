/********************************************************************************
** Form generated from reading UI file 'qtdcmPreviewWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCMPREVIEWWIDGET_H
#define UI_QTDCMPREVIEWWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtDcmPreviewWidget
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *previewGroupBox;
    QGridLayout *gridLayout;
    QLabel *imageLabel;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *QtDcmPreviewWidget)
    {
        if (QtDcmPreviewWidget->objectName().isEmpty())
            QtDcmPreviewWidget->setObjectName(QStringLiteral("QtDcmPreviewWidget"));
        QtDcmPreviewWidget->resize(293, 150);
        QtDcmPreviewWidget->setMinimumSize(QSize(0, 150));
        QtDcmPreviewWidget->setMaximumSize(QSize(16777215, 150));
        gridLayout_2 = new QGridLayout(QtDcmPreviewWidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        previewGroupBox = new QGroupBox(QtDcmPreviewWidget);
        previewGroupBox->setObjectName(QStringLiteral("previewGroupBox"));
        previewGroupBox->setMinimumSize(QSize(130, 130));
        gridLayout = new QGridLayout(previewGroupBox);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        imageLabel = new QLabel(previewGroupBox);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(imageLabel, 0, 0, 1, 1);


        gridLayout_2->addWidget(previewGroupBox, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        retranslateUi(QtDcmPreviewWidget);

        QMetaObject::connectSlotsByName(QtDcmPreviewWidget);
    } // setupUi

    void retranslateUi(QWidget *QtDcmPreviewWidget)
    {
        QtDcmPreviewWidget->setWindowTitle(QApplication::translate("QtDcmPreviewWidget", "Form", 0));
        previewGroupBox->setTitle(QApplication::translate("QtDcmPreviewWidget", "Preview", 0));
        imageLabel->setText(QApplication::translate("QtDcmPreviewWidget", "Preview", 0));
    } // retranslateUi

};

namespace Ui {
    class QtDcmPreviewWidget: public Ui_QtDcmPreviewWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCMPREVIEWWIDGET_H

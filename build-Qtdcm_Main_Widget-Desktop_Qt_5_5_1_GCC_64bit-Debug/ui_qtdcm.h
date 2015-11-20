/********************************************************************************
** Form generated from reading UI file 'qtdcm.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCM_H
#define UI_QTDCM_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtdcmWidget
{
public:
    QWidget *centralWidget;
    QTreeWidget *treeWidgetPatients;
    QTreeWidget *treeWidgetStudies;
    QTreeWidget *treeWidgetSeries;
    QFrame *frame;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_9;
    QComboBox *serieModalityComboBox;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_12;
    QDateEdit *startDateEdit;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_4;
    QLabel *label_2;
    QComboBox *pacsComboBox;
    QPushButton *searchButton;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLineEdit *nameEdit;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QLabel *label_3;
    QPushButton *cdromButton;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *serieDescriptionEdit;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *studyDescriptionEdit;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_8;
    QComboBox *patientSexComboBox;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_14;
    QDateEdit *endDateEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QWidget *QtdcmWidget)
    {
        if (QtdcmWidget->objectName().isEmpty())
            QtdcmWidget->setObjectName(QStringLiteral("QtdcmWidget"));
        QtdcmWidget->resize(1218, 515);
        centralWidget = new QWidget(QtdcmWidget);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeWidgetPatients = new QTreeWidget(centralWidget);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/users.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        __qtreewidgetitem->setIcon(0, icon);
        treeWidgetPatients->setHeaderItem(__qtreewidgetitem);
        treeWidgetPatients->setObjectName(QStringLiteral("treeWidgetPatients"));
        treeWidgetPatients->setGeometry(QRect(10, 70, 1131, 192));
        treeWidgetPatients->setMaximumSize(QSize(16777215, 250));
        treeWidgetPatients->setAlternatingRowColors(true);
        treeWidgetPatients->setRootIsDecorated(false);
        treeWidgetPatients->setAnimated(true);
        treeWidgetPatients->setExpandsOnDoubleClick(false);
        treeWidgetStudies = new QTreeWidget(centralWidget);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Images/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem();
        __qtreewidgetitem1->setText(0, QStringLiteral("1"));
        __qtreewidgetitem1->setIcon(0, icon1);
        treeWidgetStudies->setHeaderItem(__qtreewidgetitem1);
        treeWidgetStudies->setObjectName(QStringLiteral("treeWidgetStudies"));
        treeWidgetStudies->setGeometry(QRect(10, 270, 300, 192));
        treeWidgetStudies->setMaximumSize(QSize(300, 16777215));
        treeWidgetStudies->setAlternatingRowColors(true);
        treeWidgetStudies->setRootIsDecorated(false);
        treeWidgetStudies->setAnimated(true);
        treeWidgetSeries = new QTreeWidget(centralWidget);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Images/paradigm.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem();
        __qtreewidgetitem2->setText(0, QStringLiteral("1"));
        __qtreewidgetitem2->setIcon(0, icon2);
        treeWidgetSeries->setHeaderItem(__qtreewidgetitem2);
        treeWidgetSeries->setObjectName(QStringLiteral("treeWidgetSeries"));
        treeWidgetSeries->setGeometry(QRect(330, 270, 811, 192));
        treeWidgetSeries->setAlternatingRowColors(true);
        treeWidgetSeries->setAnimated(true);
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 1133, 60));
        frame->setMaximumSize(QSize(16777215, 60));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(2);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_9 = new QLabel(frame);
        label_9->setObjectName(QStringLiteral("label_9"));

        verticalLayout_7->addWidget(label_9);

        serieModalityComboBox = new QComboBox(frame);
        serieModalityComboBox->setObjectName(QStringLiteral("serieModalityComboBox"));
        serieModalityComboBox->setMinimumSize(QSize(0, 27));
        serieModalityComboBox->setMaximumSize(QSize(16777215, 27));

        verticalLayout_7->addWidget(serieModalityComboBox);


        gridLayout->addLayout(verticalLayout_7, 0, 5, 1, 1);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_12 = new QLabel(frame);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16777215, 24));

        verticalLayout_9->addWidget(label_12);

        startDateEdit = new QDateEdit(frame);
        startDateEdit->setObjectName(QStringLiteral("startDateEdit"));
        startDateEdit->setMinimumSize(QSize(0, 27));
        startDateEdit->setMaximumSize(QSize(16777215, 27));
        startDateEdit->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(0, 0, 0)));
        startDateEdit->setMinimumDate(QDate(1790, 9, 14));
        startDateEdit->setCalendarPopup(true);

        verticalLayout_9->addWidget(startDateEdit);


        gridLayout->addLayout(verticalLayout_9, 0, 7, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(24, 24));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/Images/pacs.svg")));
        label_4->setScaledContents(true);

        horizontalLayout_8->addWidget(label_4);

        label_2 = new QLabel(frame);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMaximumSize(QSize(45, 24));

        horizontalLayout_8->addWidget(label_2);

        pacsComboBox = new QComboBox(frame);
        pacsComboBox->setObjectName(QStringLiteral("pacsComboBox"));
        pacsComboBox->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_8->addWidget(pacsComboBox);


        verticalLayout->addLayout(horizontalLayout_8);

        searchButton = new QPushButton(frame);
        searchButton->setObjectName(QStringLiteral("searchButton"));
        searchButton->setMinimumSize(QSize(180, 27));
        searchButton->setMaximumSize(QSize(16777215, 27));
        searchButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Images/search.svg"), QSize(), QIcon::Normal, QIcon::Off);
        searchButton->setIcon(icon3);

        verticalLayout->addWidget(searchButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(frame);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMaximumSize(QSize(16777215, 24));
        label_7->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_7);


        verticalLayout_4->addLayout(horizontalLayout);

        nameEdit = new QLineEdit(frame);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));
        nameEdit->setMinimumSize(QSize(160, 27));
        nameEdit->setMaximumSize(QSize(16777215, 27));

        verticalLayout_4->addWidget(nameEdit);


        gridLayout->addLayout(verticalLayout_4, 0, 2, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label = new QLabel(frame);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(24, 24));
        label->setMaximumSize(QSize(24, 24));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Images/cdrom.svg")));
        label->setScaledContents(true);

        horizontalLayout_4->addWidget(label);

        label_3 = new QLabel(frame);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMaximumSize(QSize(16777215, 24));

        horizontalLayout_4->addWidget(label_3);


        verticalLayout_2->addLayout(horizontalLayout_4);

        cdromButton = new QPushButton(frame);
        cdromButton->setObjectName(QStringLiteral("cdromButton"));
        cdromButton->setMinimumSize(QSize(0, 27));
        cdromButton->setMaximumSize(QSize(16777215, 27));
        cdromButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Images/cddrive.png"), QSize(), QIcon::Normal, QIcon::Off);
        cdromButton->setIcon(icon4);

        verticalLayout_2->addWidget(cdromButton);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_11 = new QLabel(frame);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMaximumSize(QSize(16777215, 24));
        label_11->setAlignment(Qt::AlignCenter);

        horizontalLayout_6->addWidget(label_11);


        verticalLayout_6->addLayout(horizontalLayout_6);

        serieDescriptionEdit = new QLineEdit(frame);
        serieDescriptionEdit->setObjectName(QStringLiteral("serieDescriptionEdit"));
        serieDescriptionEdit->setMinimumSize(QSize(0, 27));
        serieDescriptionEdit->setMaximumSize(QSize(16777215, 27));

        verticalLayout_6->addWidget(serieDescriptionEdit);


        gridLayout->addLayout(verticalLayout_6, 0, 4, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_10 = new QLabel(frame);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(16777215, 24));
        label_10->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_10);


        verticalLayout_5->addLayout(horizontalLayout_2);

        studyDescriptionEdit = new QLineEdit(frame);
        studyDescriptionEdit->setObjectName(QStringLiteral("studyDescriptionEdit"));
        studyDescriptionEdit->setMinimumSize(QSize(0, 27));
        studyDescriptionEdit->setMaximumSize(QSize(16777215, 27));

        verticalLayout_5->addWidget(studyDescriptionEdit);


        gridLayout->addLayout(verticalLayout_5, 0, 3, 1, 1);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        label_8 = new QLabel(frame);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMaximumSize(QSize(16777215, 24));

        verticalLayout_8->addWidget(label_8);

        patientSexComboBox = new QComboBox(frame);
        patientSexComboBox->setObjectName(QStringLiteral("patientSexComboBox"));
        patientSexComboBox->setMinimumSize(QSize(0, 27));
        patientSexComboBox->setMaximumSize(QSize(50, 27));

        verticalLayout_8->addWidget(patientSexComboBox);


        gridLayout->addLayout(verticalLayout_8, 0, 6, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        label_14 = new QLabel(frame);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16777215, 24));

        verticalLayout_10->addWidget(label_14);

        endDateEdit = new QDateEdit(frame);
        endDateEdit->setObjectName(QStringLiteral("endDateEdit"));
        endDateEdit->setMinimumSize(QSize(0, 27));
        endDateEdit->setMaximumSize(QSize(16777215, 27));
        endDateEdit->setCalendarPopup(true);

        verticalLayout_10->addWidget(endDateEdit);


        gridLayout->addLayout(verticalLayout_10, 0, 8, 1, 1);

        treeWidgetPatients->raise();
        treeWidgetStudies->raise();
        treeWidgetSeries->raise();
        frame->raise();
        nameEdit->raise();
        menuBar = new QMenuBar(QtdcmWidget);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1218, 25));
        mainToolBar = new QToolBar(QtdcmWidget);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        statusBar = new QStatusBar(QtdcmWidget);
        statusBar->setObjectName(QStringLiteral("statusBar"));

        retranslateUi(QtdcmWidget);

        QMetaObject::connectSlotsByName(QtdcmWidget);
    } // setupUi

    void retranslateUi(QWidget *QtdcmWidget)
    {
        QtdcmWidget->setWindowTitle(QApplication::translate("QtdcmWidget", "Qtdcm", 0));
        label_9->setText(QApplication::translate("QtdcmWidget", "Modality :", 0));
        serieModalityComboBox->clear();
        serieModalityComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("QtdcmWidget", "MR", 0)
         << QApplication::translate("QtdcmWidget", "CT", 0)
         << QApplication::translate("QtdcmWidget", "PET", 0)
        );
        label_12->setText(QApplication::translate("QtdcmWidget", "Start Date :", 0));
        startDateEdit->setDisplayFormat(QApplication::translate("QtdcmWidget", "dd/MM/yyyy", 0));
        label_4->setText(QString());
        label_2->setText(QApplication::translate("QtdcmWidget", " PACS", 0));
        searchButton->setText(QApplication::translate("QtdcmWidget", "Search", 0));
        label_7->setText(QApplication::translate("QtdcmWidget", "Patient name", 0));
        label->setText(QString());
        label_3->setText(QApplication::translate("QtdcmWidget", "CDROM", 0));
        cdromButton->setText(QApplication::translate("QtdcmWidget", "Open", 0));
        label_11->setText(QApplication::translate("QtdcmWidget", "Serie description", 0));
        label_10->setText(QApplication::translate("QtdcmWidget", "Study description", 0));
        label_8->setText(QApplication::translate("QtdcmWidget", "Sex :", 0));
        patientSexComboBox->clear();
        patientSexComboBox->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("QtdcmWidget", "M", 0)
         << QApplication::translate("QtdcmWidget", "F", 0)
        );
        label_14->setText(QApplication::translate("QtdcmWidget", "End Date :", 0));
        endDateEdit->setDisplayFormat(QApplication::translate("QtdcmWidget", "dd/MM/yyyy", 0));
    } // retranslateUi

};

namespace Ui {
    class QtdcmWidget: public Ui_QtdcmWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCM_H

/********************************************************************************
** Form generated from reading UI file 'qtdcm_fiel_search.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTDCM_FIEL_SEARCH_H
#define UI_QTDCM_FIEL_SEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Qtdcm_fiel_search
{
public:
    QWidget *centralWidget;
    QTreeWidget *treeWidgetPatients;
    QTreeWidget *treeWidgetStudies;
    QTreeWidget *treeWidgetSeries;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Qtdcm_fiel_search)
    {
        if (Qtdcm_fiel_search->objectName().isEmpty())
            Qtdcm_fiel_search->setObjectName(QStringLiteral("Qtdcm_fiel_search"));
        Qtdcm_fiel_search->resize(1099, 590);
        centralWidget = new QWidget(Qtdcm_fiel_search);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        treeWidgetPatients = new QTreeWidget(centralWidget);
        QIcon icon;
        icon.addFile(QStringLiteral(":/Images/users.svg"), QSize(), QIcon::Normal, QIcon::Off);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        __qtreewidgetitem->setIcon(0, icon);
        treeWidgetPatients->setHeaderItem(__qtreewidgetitem);
        treeWidgetPatients->setObjectName(QStringLiteral("treeWidgetPatients"));
        treeWidgetPatients->setGeometry(QRect(10, 110, 1083, 192));
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
        treeWidgetStudies->setGeometry(QRect(10, 310, 300, 192));
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
        treeWidgetSeries->setGeometry(QRect(320, 310, 775, 192));
        treeWidgetSeries->setAlternatingRowColors(true);
        treeWidgetSeries->setAnimated(true);
        Qtdcm_fiel_search->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Qtdcm_fiel_search);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1099, 25));
        Qtdcm_fiel_search->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Qtdcm_fiel_search);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        Qtdcm_fiel_search->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Qtdcm_fiel_search);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        Qtdcm_fiel_search->setStatusBar(statusBar);
        toolBar = new QToolBar(Qtdcm_fiel_search);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        Qtdcm_fiel_search->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Qtdcm_fiel_search);

        QMetaObject::connectSlotsByName(Qtdcm_fiel_search);
    } // setupUi

    void retranslateUi(QMainWindow *Qtdcm_fiel_search)
    {
        Qtdcm_fiel_search->setWindowTitle(QApplication::translate("Qtdcm_fiel_search", "Qtdcm_fiel_search", 0));
        toolBar->setWindowTitle(QApplication::translate("Qtdcm_fiel_search", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class Qtdcm_fiel_search: public Ui_Qtdcm_fiel_search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTDCM_FIEL_SEARCH_H

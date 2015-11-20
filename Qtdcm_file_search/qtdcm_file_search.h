#ifndef QTDCM_FIEL_SEARCH_H
#define QTDCM_FIEL_SEARCH_H

#include <QMainWindow>
#include<QtGui>

#include "ui_qtdcm_fiel_search.h"


class QtDcmPrivate;



class Qtdcm_file_search : public QMainWindow, public Ui::Qtdcm_fiel_search
{
    Q_OBJECT

public:
    explicit Qtdcm_file_search(QWidget *parent = 0); //Classic constructor
    //~Qtdcm_file_search();


/*    Get the pointer of the treewidegt
    return the pointer on the QTreeWidget*/

//    QTreeView * getPatientsTreeView()
//    {
//        return treeWidgetPatients;
//    }

//    QTreeView * getSeriesTreeView()
//    {
//        return treeWidgetSeries;
//    }

//    QTreeView * getStudiesTreeView()
//    {
//        return treeWidgetStudies;
//    }
    enum mode // enumeration consists of a set of named interger constants
    {
        CD, PACS
    };




};

#endif // QTDCM_FIEL_SEARCH_H

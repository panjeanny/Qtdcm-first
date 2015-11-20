#include "qtdcm_file_search.h"
#include "ui_qtdcm_fiel_search.h"
#include <QFileDialog>
#include<QtCore>
#include <QTextCodec>

#include "QtDcmPatient.h"
#include "QtDcmStudy.h"
#include "QtDcmManager.h"
#include "QtDcmSerie.h"
#include "QtDcmServer.h"
#include "QtDcmImage.h"
#include "QtDcmPreferences.h"
//#include "QtDcmPreferencesDialog.h"

class QtdcmPrivate // a class in a cpp file always end with };
{
public:
        int mode;
        QList<QString> imageList; // Contains the filenames of the current selected serie in the treewidget
        QString currentSerieID; // ID of the current selected serie in the treewidget
        QDate startDate, endDate; //begin and end of the search dates
        QMap <QString, QList<QString> > selectedSeries; //QMap(a template class that provides a red-black-tree-based dictionary)
};

Qtdcm_file_search::Qtdcm_file_search(QWidget *parent) :
    QMainWindow(parent), d (new QtdcmPrivate)
    //ui(new Ui::Qtdcm_fiel_search)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("iso")); // set all (const char*) to QString and the other way around
    setupUi(this);
    d->mode=Qtdcm_file_search::CD;

    // Initialize QTreeWidgetPatients
    ui->treeWidgetPatients->setColumnWidth(0,400);







}

Qtdcm_file_search::~Qtdcm_file_search()
{

    delete ui;
}

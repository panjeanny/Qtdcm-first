#include "qtdcm.h"
#include "ui_qtdcm.h"

#include<QtCore>
#include<QFileDialog>

#include "qtdcm.h"
#include <QtDcmPatient.h>
#include <QtDcmStudy.h>
#include <QtDcmSerie.h>
#include <QtDcmServer.h>
#include <QtDcmImage.h>
#include "QtDcmPreferences.h"
#include <QtDcmPreferencesDialog.h>
#include <QtDcmManager.h>


class QtdcmPrivate // a class in a cpp file always end with };
{
public:
        int mode;
        QList<QString> imageList; // Contains the filenames of the current selected serie in the treewidget
        QString currentSerieID; // ID of the current selected serie in the treewidget
        QDate beginDate, endDate; //begin and end of the search dates
        QMap <QString, QList<QString> > selectedSeries; //QMap(a template class that provides a red-black-tree-based dictionary)
};


Qtdcm::Qtdcm(QWidget *parent) :
    QWidget(parent),
    d(new QtdcmPrivate)
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("iso")); // set all (const char*) to QString and the other way around
    setupUi(this);
    d->mode=Qtdcm::CD;

    // Initialize QTreeWidgetPatients
    treeWidgetPatients->setColumnWidth(0,400);
    treeWidgetPatients->setColumnWidth(1,100);
    treeWidgetPatients->setColumnWidth(2,100);
    QStringList labelPatients;
    labelPatients << "Patient's name" << "ID" << "Birthday" << "Sex";
    treeWidgetPatients->setHeaderLabels(labelPatients);
    treeWidgetPatients ->setContextMenuPolicy(Qt::CustomContextMenu);

    //Initialize QTreeWidgetSeries
    treeWidgetStudies->setColumnWidth ( 0, 200 );
    treeWidgetStudies->setColumnWidth ( 1, 100 );
    QStringList labelsStudies;
    labelsStudies << "Studies description" << "Date" << "ID";
    treeWidgetStudies->setHeaderLabels ( labelsStudies );
    treeWidgetStudies->setContextMenuPolicy ( Qt::CustomContextMenu );

    //Initialize widgets
    startDateEdit->setDate ( QDate ( 1900, 01, 01 ) );
    endDateEdit->setDate ( QDate::currentDate() );

    QtDcmManager::instance()->setPatientsTreeWidget(treeWidgetPatients);

   // QtDcmManager::instance()->setPatientsTreeWidget ( treeWidgetPatients );
    QtDcmManager::instance()->setStudiesTreeWidget ( treeWidgetStudies );
    QtDcmManager::instance()->setSeriesTreeWidget ( treeWidgetSeries );

    QtDcmManager::instance()->setDate1 ( startDateEdit->date().toString ( "yyyyMMdd" ) );
    QtDcmManager::instance()->setDate2 ( endDateEdit->date().toString ( "yyyyMMdd" ) );

    initConnections();

}

Qtdcm::~Qtdcm()
{
    QtDcmManager::instance()->deleteTemporaryDirs();
}

void Qtdcm::initConnections()
{
    // Initialize connections
    QObject::connect ( treeWidgetPatients, SIGNAL ( currentItemChanged ( QTreeWidgetItem*, QTreeWidgetItem* ) ), this, SLOT ( patientItemSelected ( QTreeWidgetItem*, QTreeWidgetItem* ) ) );
    QObject::connect ( treeWidgetStudies, SIGNAL ( currentItemChanged ( QTreeWidgetItem*, QTreeWidgetItem* ) ), this, SLOT ( studyItemSelected ( QTreeWidgetItem*, QTreeWidgetItem* ) ) );
    QObject::connect ( treeWidgetSeries, SIGNAL ( currentItemChanged ( QTreeWidgetItem*, QTreeWidgetItem* ) ), this, SLOT ( serieItemSelected ( QTreeWidgetItem*, QTreeWidgetItem* ) ) );
    QObject::connect ( treeWidgetSeries, SIGNAL ( itemClicked ( QTreeWidgetItem*, int ) ), this, SLOT ( serieItemClicked ( QTreeWidgetItem*, int ) ) );
    QObject::connect ( nameEdit, SIGNAL ( textChanged ( QString ) ), this, SLOT ( patientNameTextChanged ( QString ) ) );
    QObject::connect ( serieDescriptionEdit, SIGNAL ( textChanged ( QString ) ), this, SLOT ( serieDescriptionTextChanged ( QString ) ) );
    QObject::connect ( studyDescriptionEdit, SIGNAL ( textChanged ( QString ) ), this, SLOT ( studyDescriptionTextChanged ( QString ) ) );
    QObject::connect ( searchButton, SIGNAL ( clicked() ), this, SLOT ( findSCU() ) );
    QObject::connect ( cdromButton, SIGNAL ( clicked() ), this, SLOT ( openDicomdir() ) );
    QObject::connect ( patientSexComboBox, SIGNAL ( currentIndexChanged ( int ) ), this, SLOT ( updateSex ( int ) ) );
    QObject::connect ( serieModalityComboBox, SIGNAL ( currentIndexChanged ( int ) ), this, SLOT ( updateModality ( int ) ) );
    QObject::connect ( pacsComboBox, SIGNAL ( currentIndexChanged ( int ) ), this, SLOT ( updatePACS ( int ) ) );
    QObject::connect ( startDateEdit, SIGNAL ( dateChanged ( QDate ) ), this, SLOT ( startDateChanged ( QDate ) ) );
    QObject::connect ( endDateEdit, SIGNAL ( dateChanged ( QDate ) ), this, SLOT ( endDateChanged ( QDate ) ) );
}

void Qtdcm::updatePacsComboBox()
{
    pacsComboBox->blockSignals ( true );
    pacsComboBox->clear();

//    for ( int i = 0; i < QtDcmPreferences::instance()->getServers().size(); i++ )
//        pacsComboBox->addItem ( QtDcmPreferences::instance()->getServers().at ( i )->getName() );
//    pacsComboBox->blockSignals ( false );
}

void Qtdcm::findSCU()
{
    d->mode = Qtdcm::PACS;
    treeWidgetPatients->clear();
    treeWidgetStudies->clear();
    treeWidgetSeries->clear();
    QtDcmManager::instance()->setCurrentPacs ( pacsComboBox->currentIndex() );
    QtDcmManager::instance()->findPatientsScu();
}

void Qtdcm::clearDisplay()
{
    treeWidgetPatients->clear();
    treeWidgetStudies->clear();
    treeWidgetSeries->clear();
}

void Qtdcm::patientItemSelected ( QTreeWidgetItem* current, QTreeWidgetItem* previous )
{
    QtDcmManager::instance()->clearSerieInfo();
    QtDcmManager::instance()->clearPreview();

    treeWidgetStudies->clear();

    if ( current != 0 )   // Avoid crash when clearDisplay is called
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findStudiesScu ( current->text ( 0 ) );
        else
            QtDcmManager::instance()->findStudiesDicomdir ( current->text ( 0 ) );
    }
}

void Qtdcm::studyItemSelected ( QTreeWidgetItem* current, QTreeWidgetItem* previous )
{
    treeWidgetSeries->clear();

    QtDcmManager::instance()->clearSerieInfo();
    QtDcmManager::instance()->clearPreview();

    if ( current != 0 )   // Avoid crash when clearDisplay is called
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findSeriesScu ( treeWidgetPatients->currentItem()->text ( 0 ), current->data ( 2, 0 ).toString() );
        else
            QtDcmManager::instance()->findSeriesDicomdir ( treeWidgetPatients->currentItem()->text ( 0 ), current->data ( 2, 0 ).toString() );
    }
}

void Qtdcm::serieItemSelected ( QTreeWidgetItem* current )
{
    if ( current != 0 )   // Avoid crash when clearDisplay is called
    {
        QtDcmManager::instance()->clearListImages();

        if ( d->mode == Qtdcm::CD )
            QtDcmManager::instance()->findImagesDicomdir ( current->text ( 3 ) );
        else
            QtDcmManager::instance()->findImagesScu ( current->text ( 3 ) );

        int elementCount = QtDcmManager::instance()->getListImages().size();
        QString institution = current->data ( 5, 0 ).toString();
        QString opName = current->data ( 6, 0 ).toString();

        QtDcmManager::instance()->updateSerieInfo ( QString::number ( elementCount ), institution, opName );
        QtDcmManager::instance()->clearPreview();
        QtDcmManager::instance()->getPreviewFromSelectedSerie ( current->text ( 3 ), elementCount / 2 );
    }
}

void Qtdcm::serieItemClicked ( QTreeWidgetItem * item, int column )
{
    if ( item->checkState ( 0 ) == Qt::Checked )
        QtDcmManager::instance()->addSerieToImport ( item->text ( 3 ) );
    else
        QtDcmManager::instance()->removeSerieToImport ( item->text ( 3 ) );
}

void Qtdcm::openDicomdir()
{
    this->clearDisplay();
    d->mode = Qtdcm::CD;
    // Open a QFileDialog for choosing a Dicomdir
    QFileDialog dialog ( this );
    dialog.setFileMode ( QFileDialog::ExistingFile );
    dialog.setDirectory ( QDir::home().dirName() );
    dialog.setWindowTitle ( tr ( "Open dicomdir" ) );
    dialog.setNameFilter ( tr ( "Dicomdir (dicomdir DICOMDIR)" ) );
    QString fileName;

    if ( dialog.exec() )
    {
        fileName = dialog.selectedFiles() [0];
    }

    dialog.close();

    if ( !fileName.isEmpty() )   // A file has been chosen
    {
        QtDcmManager::instance()->setDicomdir ( fileName );
        this->loadPatientsFromDicomdir();
    }
}

void Qtdcm::loadPatientsFromDicomdir()
{
    this->clearDisplay();
    QtDcmManager::instance()->loadDicomdir();
}

void Qtdcm::queryPACS()
{
    this->findSCU();
}

void Qtdcm::updateModality ( int index )
{
    switch ( index )
    {

    case 0://*
        QtDcmManager::instance()->setModality ( "*" );
        break;

    case 1://MR
        QtDcmManager::instance()->setModality ( "MR" );
        break;

    case 2://CT
        QtDcmManager::instance()->setModality ( "CT" );
        break;

    case 3://PET
        QtDcmManager::instance()->setModality ( "PET" );
        break;
    }

    treeWidgetSeries->clear();

    if ( treeWidgetPatients->currentItem() && treeWidgetStudies->currentItem() )
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findSeriesScu ( treeWidgetPatients->currentItem()->text ( 0 ), treeWidgetStudies->currentItem()->data ( 2, 0 ).toString() );
        else
            QtDcmManager::instance()->findSeriesDicomdir ( treeWidgetPatients->currentItem()->text ( 0 ), treeWidgetStudies->currentItem()->data ( 2, 0 ).toString() );
    }
}

void Qtdcm::updateSex ( int index )
{
    switch ( index )
    {

    case 0://all
        QtDcmManager::instance()->setPatientSex ( "*" );
        this->queryPACS();
        break;

    case 1://M
        QtDcmManager::instance()->setPatientSex ( "M" );
        this->queryPACS();
        break;

    case 2://F
        QtDcmManager::instance()->setPatientSex ( "F" );
        this->queryPACS();
    }
}

void Qtdcm::updatePACS ( int index )
{
    QtDcmManager::instance()->setCurrentPacs ( index );
    this->findSCU();
}

void Qtdcm::startDateChanged ( QDate date )
{
    if ( date > endDateEdit->date() )
    {
        date = endDateEdit->date();
        startDateEdit->setDate ( date );
        return;
    }

    QtDcmManager::instance()->setDate1 ( date.toString ( "yyyyMMdd" ) );

    treeWidgetStudies->clear();
    treeWidgetSeries->clear();

    if ( treeWidgetPatients->currentItem() )
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findStudiesScu ( treeWidgetPatients->currentItem()->text ( 0 ) );
        else
            qDebug() << "recherche sur le cd";
    }
}

void Qtdcm::endDateChanged ( QDate date )
{
    if ( date < startDateEdit->date() )
    {
        date = startDateEdit->date();
        endDateEdit->setDate ( date );
        return;
    }

    QtDcmManager::instance()->setDate2 ( date.toString ( "yyyyMMdd" ) );

    treeWidgetStudies->clear();
    treeWidgetSeries->clear();

    if ( treeWidgetPatients->currentItem() )
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findStudiesScu ( treeWidgetPatients->currentItem()->text ( 0 ) );
        else
            qDebug() << "recherche sur le cd";
    }
}

void Qtdcm::editPreferences()
{
    //Launch a dialog window for editing PACS settings
    QtDcmPreferencesDialog * dialog = new QtDcmPreferencesDialog ( this );
    dialog->getWidget()->setPreferences ( QtDcmPreferences::instance() );
    dialog->setPreferences ( QtDcmPreferences::instance() );

    if ( dialog->exec() )
    {
        dialog->getWidget()->updatePreferences();
        dialog->updatePreferences();
//         this->updatePacsComboBox();
    }
    dialog->close();
    delete dialog;
}

void Qtdcm::patientNameTextChanged ( QString name )
{
    if ( name.isEmpty() )
        QtDcmManager::instance()->setPatientName ( "*" );
    else
        QtDcmManager::instance()->setPatientName ( name + "*" );

    if ( d->mode == Qtdcm::PACS )
        this->findSCU();
}

void Qtdcm::studyDescriptionTextChanged ( QString desc )
{
    if ( desc.isEmpty() )
        QtDcmManager::instance()->setStudyDescription ( "*" );
    else
        QtDcmManager::instance()->setStudyDescription ( "*" + desc + "*" );

    if ( d->mode == Qtdcm::PACS )
    {
        treeWidgetStudies->clear();
        treeWidgetSeries->clear();
    }
    if ( treeWidgetPatients->currentItem() )
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findStudiesScu ( treeWidgetPatients->currentItem()->text ( 0 ) );
    }
}

void Qtdcm::serieDescriptionTextChanged ( QString desc )
{
    if ( desc.isEmpty() )
    {
        QtDcmManager::instance()->setSerieDescription ( "*" );
    }
    else
        QtDcmManager::instance()->setSerieDescription ( "*" + desc + "*" );

    if ( d->mode == Qtdcm::PACS )
        treeWidgetSeries->clear();

    if ( treeWidgetPatients->currentItem() && treeWidgetStudies->currentItem() )
    {
        if ( d->mode == Qtdcm::PACS )
            QtDcmManager::instance()->findSeriesScu ( treeWidgetPatients->currentItem()->text ( 0 ), treeWidgetStudies->currentItem()->data ( 2, 0 ).toString() );
    }
}

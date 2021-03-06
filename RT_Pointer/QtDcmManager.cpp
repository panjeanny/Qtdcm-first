#include "QtDcmManager.h"

#include "rt_pointer.h"
#include "QtDcmServer.h"
#include "QtDcmPatient.h"

//Qt Creator header
#include <QDir>
#include <QUuid>


//dcmtk header
#include "dcmtk/dcmdata/dcrledrg.h"
#include"dcmtk/dcmdata/dcfilefo.h"

class QtDcmManagerPrivate
{
public:
    rt_pointer *mainWidget;
    QString dicomdir,outputDir;/*dicomdir = dicom file path,outputdir =
    output directory for constructed serie path*/

    QDir currentSerieDir, tempDir, logsDir; /*currentSerieDir = current serie dicom slice,
tempDir = temporary directory, logsDir = reconstructiond process logs file path (/temp/qtdcm/logs)  */

    DcmFileFormat dfile; // this attribute is usefull for parsing the dicomdir

    QList<QString> images; //List of image filemane to export from a CD

    QList<QtDcmPatient *> patients; /** List that contains patients resulting of a query or read from a CD */

    QMap<QString, QList<QString> > seriesToExport;
    QList<QString> listImages;
    QMap<int, QString> mapImages;
    QList<QString> seriesToImport;
    QString serieId; /** Id of the serie to export from the PACS */
    QProcess * process; /** This attribute launch the reconstruction process */
    QString patientName; /** Attribute frepresenting the patient name used for query PACS */
    QString patientId; /** Attribute representing the patient id used for query PACS */
    QString patientSex;
    QString patientBirthDate;
    QString modality; /** Attibute for the modality of the search (MR, US, CT, etc) */
    QString date1; /** Attribute for the begin date of the query (usefull for date based queries) */
    QString date2; /** Attribute for the end date of the query (usefull for date based queries) */
    QString serieDescription; /** Attibute representing the serie description used for query PACS */
    QString studyDescription; /** Attibute representing the study description used for query PACS */
    QString mode; /** Mode that determine the type of media (CD or PACS) */
    QString dcm2nii; /** Absolute filename of the dcm2nii program */
    QByteArray query;
    QString previewImageUID;

    QtDcmManager::outputdirmode outputdirMode;
    QtDcmServer * currentPacs;

    QTreeWidget * patientsTreeWidget;
    QTreeWidget * studiesTreeWidget;
    QTreeWidget * seriesTreeWidget;

//    QtDcmPreviewWidget * previewWidget;
//    QtDcmImportWidget * importWidget;
//    QtDcmSerieInfoWidget * serieInfoWidget;

    bool useConverter;
};


QtDcmManager * QtDcmManager::_instance =0;

QtDcmManager * QtDcmManager::instance()
{
    if(_instance == 0)
        _instance = new QtDcmManager();
    return _instance;
}

QtDcmManager::QtDcmManager() : d(new QtDcmManagerPrivate)
{
    //Initialization of the private attributes
   d->useConverter = true;
   d->mode = "PACS";
   d->dicomdir = "";
   d->outputDir = "";

   d->outputdirMode = DIALOG;

   d->patientName = "*";
   d->patientId = "*";
   d->patientBirthDate = "";
   d->modality = "*";
   d->date1 = "*";
   d->date2 = "*";
   d->serieDescription = "*";
   d->studyDescription = "*";
   d->patientSex = "*";

   d->mainWidget = NULL;
   d->patientsTreeWidget = NULL;
   d->studiesTreeWidget = NULL;
   d->seriesTreeWidget = NULL;

//   d->importWidget = NULL;
//   d->previewWidget = NULL;
//   d->serieInfoWidget = NULL;
//   d->currentPacs = NULL;

   // creation of the temperary directories (/temp/qtdcm/ & /temp/qtdcm/logs)
    this->createTemporaryDirs();




}

void QtDcmManager::createTemporaryDirs()
{
    QDir temp = QDir (QDir::tempPath()); // temp =/temp/

    QString randName = QUuid::createUuid().toString();

    if (!temp.exists("rt pointer"))
        temp.mkdir ("rt_pointer"); //if folder("rt_pointer") not exists then mkdir

    QDir rt_pointerDir = QDir (QDir::tempPath()+QDir::separator()+"rt_pointer");

    if(!rt_pointerDir.exists(randName))
    {
        rt_pointerDir.mkdir(randName);
    }


    d->tempDir = QDir(rt_pointerDir.absolutePath()+QDir::separator()+randName);


}

void QtDcmManager::deleteTemporaryDirs()
{
    QDir rt_pointerTmpDir(QDir::tempPath()+QDir::separator()+"rt_pointer");
    if(!rt_pointerTmpDir.removeRecursively())
    {
        qWarning() << "Cannot remove recursively temporary directory" << rt_pointerTmpDir.absolutePath();
    }
}



QtDcmManager::~QtDcmManager()
{

}

QtDcmManager::outputdirmode QtDcmManager::getOutputdirMode()
{
    return d->outputdirMode;
}



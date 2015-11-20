/*
    QtDcm is a C++ Qt based library for communication and conversion of Dicom images.
    Copyright (C) 2011  Alexandre Abadie <Alexandre.Abadie@univ-rennes1.fr>

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public
    License along with this library; if not, write to the Free Software
    Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef QTDCMMANAGER_H_
#define QTDCMMANAGER_H_

#include <QtGui>
#include <QtNetwork>
#include<QTreeWidget>
#include <QMessageBox>
#include <QLabel>

class Qtdcm;
class QtDcmServer;
class QtDcmPreferences;
class QtDcmFindScuSignalManager;
class QtDcmPreviewWidget;
class QtDcmImportWidget;
class QtDcmSerieInfoWidget;

class QtDcmManagerPrivate;

/**
 * This class is in charge of the different process (dcm2nii), pacs query/retrieve (dcm4chee),
 * temporary directory creation and removing, PACS server settings.
 *
 */

class QtDcmManager : public QObject
{
    Q_OBJECT

private:
    void generateCurrentSerieDir();

    void deleteCurrentSerieDir();

    /**
     * Create the temporary directory (/tmp/qtdcm on Unix) and the logging directory.
     * (/tmp/qtdcm/logs)
     */
    void createTemporaryDirs();

public:
    enum outputdirmode
    {
        CUSTOM, DIALOG
    };

    enum convertiontool
    {
        ITK, DCM2NII
    };

    static QtDcmManager*
    instance();

    /**
     * Default constructor. Instantiate the internal pointers and create the temporary directory.
     */
    QtDcmManager();

    /**
     * The default destructor
     */
    virtual ~QtDcmManager();

    /**
     * Find SCU with Dcmtk code
     */
    void findPatientsScu();
    void findStudiesScu ( QString patientName );
    void findSeriesScu ( QString patientName, QString studyUID );
    void findImagesScu ( QString uid );
    void foundPatient ( QMap<QString, QString> infosMap );
    void foundStudy ( QMap<QString, QString> infosMap );
    void foundSerie ( QMap<QString, QString> infosMap );
//     void foundImage ( QMap<QString, QString> infosMap );
    void foundImage ( QString image, int number );
    void moveSelectedSeries();
    void getPreviewFromSelectedSerie ( QString uid, int elementCount );
//     void getPreviewFromSelectedSerie ( int elementIndex );
    
    void findPatientsDicomdir();
    void findStudiesDicomdir ( QString patientName );
    void findSeriesDicomdir ( QString patientName, QString studyDescription );
    void findImagesDicomdir ( QString serieUID );

    void setQtDcmWidget ( Qtdcm * widget );
    void setPatientsTreeWidget ( QTreeWidget * widget );
    void setStudiesTreeWidget ( QTreeWidget * widget );
    void setSeriesTreeWidget ( QTreeWidget * widget );

    void setImportWidget ( QtDcmImportWidget * widget );
    void setPreviewWidget ( QtDcmPreviewWidget * widget );
    void setSerieInfoWidget ( QtDcmSerieInfoWidget * widget );

    void setOutputdirMode ( QtDcmManager::outputdirmode mode );
    QtDcmManager::outputdirmode getOutputdirMode();

    void clearSerieInfo();
    void updateSerieInfo ( QString eltCount, QString institution, QString name );

    void clearPreview();

    /**
     * This method read the dicomdir file and populate the patient treewidget
     *
     */
    void loadDicomdir();

    /**
     * Convenience method that display error message in a QMessageBox window.
     *
     * @param message the error message to display
     */
    void displayErrorMessage ( QString message );

    /**
     * Convenience method that display information message in a QMessageBox window.
     *
     * @param info the information message to display
     */
    void displayMessage ( QString info );

    /**
     * Return the dicomdir absolute path name
     *
     * @return _dicomdir the dicomdir file name.
     */
    QString getDicomdir() const;

    /**
     * Set the dicomdir file name
     *
     * @param dicomdir the dicomdir file name
     */
    void setDicomdir ( QString dicomdir );

    /**
     * Return the output directory where the current serie will be reconstructed
     *
     * @return _outputdir the output directory path
     */
    QString getOutputDirectory() const;

    /**
     * Set the output directory
     *
     * @param directory the output directory
     */
    void setOutputDirectory ( QString directory );

    QtDcmServer * getCurrentPacs();

    void setCurrentPacs ( int index );

    /**
     * Patient name getter
     *
     * @return _patientName as a QString
     */
    QString getPatientName();

    /**
     * Patient name setter
     *
     * @param patientName as a QString
     */
    void setPatientName ( QString patientName );

    /**
     * Patient id getter
     *
     * @return _patientId as a QString
     */
    QString getPatientId();

    /**
     * Patient id setter
     *
     * @param patientId as a QString
     */
    void setPatientId ( QString patientId );

    QString getPatientBirthDate();
    
    QString getPatientSex();
    
    void setPatientSex ( QString sex );

    /**
     * Serie description getter
     *
     * @return _serieDescription as a QString
     */
    QString getSerieDescription();

    /**
     * Serie description setter
     *
     * @param serieDescription as a QString
     */
    void setSerieDescription ( QString serieDescription );

    /**
     * Study description getter
     *
     * @return _studyDescription as a QString
     */
    QString getStudyDescription();

    /**
     * Study description setter
     *
     * @param studyDescription as a QString
     */
    void setStudyDescription ( QString studyDescription );

    QString getExamDate();
    
    /**
     * Study modality setter
     *
     * @param modality as a QString
     */
    void setModality ( QString modality );

    /**
     * Study modality getter
     *
     * @return _modality as a QString
     */
    QString getModality();

    /**
     * Study date setter
     *
     * @param date as a QString
     */
    void setDate1 ( QString date );

    /**
     * Study date getter
     *
     * @return _date as a QString
     */
    QString getDate1();

    /**
     * Study date setter
     *
     * @param date as a QString
     */
    void setDate2 ( QString date );

    /**
     * Study date getter
     *
     * @return _date as a QString
     */
    QString getDate2();

    void addSerieToImport ( QString uid );

    void removeSerieToImport ( QString uid );

    void clearSeriesToImport();

    int seriesToImportSize();

    /**
     * add patient in the list
     */
    void addPatient();

    /**
     * Mode getter
     */
    QString getMode();

    void setImagesList ( QList<QString> images );

    QList<QString> getListImages();
    void clearListImages();

    void setSerieId ( QString id );

    QString getCurrentSerieDirectory();

    void setSeriesToExport ( QMap<QString, QList<QString> > seriesToExport );

    void setQuery ( QByteArray query );

    void setPreviewImageUID ( QString uid );

    bool useConverter();

    void useConverter ( bool use );

    /**
     * This method try to delete the temporary directory when closing the QtDcm widget
     * (Doesn't work for the moment)
     */
    void deleteTemporaryDirs();

public slots:
    void updateProgressBar ( int i );
    void moveSeriesFinished();
    void makePreview ( QString filename );
    void onSerieMoved ( QString directory, QString uid, int number );

    void importSelectedSeries();
    void importToDirectory ( QString directory );

signals:
    void serieMoved ( QString directory );
    void importFinished();
    void gettingPreview();

private:
    static QtDcmManager * _instance;
    QtDcmManagerPrivate *d;
};

#endif /* QTDCMMANAGER_H_ */

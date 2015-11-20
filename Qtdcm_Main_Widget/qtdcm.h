#ifndef QTDCM_H
#define QTDCM_H

#include <QtGui>
#include"ui_qtdcm.h"



class QtdcmPrivate;
class QtDcmManager;

/**
 * This class contains the widget for managing Dicom data. It is possible to read and display in a QTreeWidget
 * the content of a DICOMDIR. It is also possible to query and retrieve data from a PACS.
 * Once read/retrieve, each serie can be reconstructed, using the QtDcmManager.
 */

class Qtdcm : public QWidget, public Ui::QtdcmWidget
{
    Q_OBJECT

public:
    Qtdcm(QWidget *parent = 0);
    ~Qtdcm();


    /*    Get the pointer of the treewidegt
        return the pointer on the QTreeWidget*/

        QTreeView * getPatientsTreeView()
        {
            return treeWidgetPatients;
        }

        QTreeView * getSeriesTreeView()
        {
            return treeWidgetSeries;
        }

        QTreeView * getStudiesTreeView()
        {
            return treeWidgetStudies;
        }


        enum mode // enumeration consists of a set of named interger constants
        {
            CD, PACS
        };

        /* Clear the content of the QTreeWidget
        */
        void clearDisplay();

        // Initialize Signal/Slots connetions of the different widget

        void initConnections();

        void findSCU();

        /**
         * Slot that change the modality parameter of the query
         *
         */
        void updateModality ( int index );

        void updateSex ( int index );

        void updatePACS ( int index );

        /**
         * Slot that launch the Date selection dialog. This change the begin date (or current date) for the Dicom query
         *
         */
        void startDateChanged ( QDate date );

        /**
         * Slot that launch the Date selection dialog. This change the end date for the Dicom query (Use only in range mode)
         *
         */
        void endDateChanged ( QDate date );

        void patientItemSelected ( QTreeWidgetItem* current, QTreeWidgetItem* previous );

        void studyItemSelected ( QTreeWidgetItem* current, QTreeWidgetItem* previous );

        void serieItemSelected ( QTreeWidgetItem* current);

        void serieItemClicked ( QTreeWidgetItem* current, int );

        /**
         * Slot that query the list of server with the user specified parameters
         */
        void queryPACS();

        /**
         * Slot that launch a QFileDialog for choosing a dicomdir
         *
         *
         */
        void openDicomdir();

        void loadPatientsFromDicomdir();

        /**
         * Slot that launch the PACS preferences dialog
         *
         */
        void editPreferences();

        /**
         * Slot called when user modify patient name edit line
         */
        void patientNameTextChanged ( QString );

        /**
         * Slot called when user modify serie description edit line
         */
        void serieDescriptionTextChanged ( QString );

        /**
         * Slot called when user modify study description edit line
         */
        void studyDescriptionTextChanged ( QString );

        /**
         * Update the PACS combo box when the user modify the preferences
         */
        void updatePacsComboBox();

    signals:
        void serieChecked ( bool checked );
        void serieSelected ( bool selected );


private:
    QtdcmPrivate *d;
};

#endif // QTDCM_H

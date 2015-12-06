#ifndef RT_POINTER_H
#define RT_POINTER_H

#include <QMainWindow>
#include <QtGui>
#include <QTreeView>

#include "ui_rt_pointer.h"
#include "QtDcmManager.h"




class rt_pointerPrivate;
class QtDcmManagerPrivate;


/**
 * This class contains the widget for managing Dicom data. It is possible to read and display in a QTreeWidget
 * the content of a DICOMDIR. It is also possible to query and retrieve data from a PACS.
 * Once read/retrieve, each serie can be reconstructed, using the QtDcmManager.
 */



class rt_pointer : public QWidget, public Ui::rt_pointer
{
    Q_OBJECT

public:
    rt_pointer(QWidget *parent = 0);
    ~rt_pointer();

        enum mode // enumeration consists of a set of named interger constants
        {
            CD, PACS
        };

        void initConnections();

        void clearDisplay();

public slots:

        void findSCU();
        void opendicomdir();


private:
    rt_pointerPrivate *d;
};

#endif // RT_POINTER_H

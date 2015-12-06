#include "rt_pointer.h"
#include "ui_rt_pointer.h"

#include <QtWidgets>
#include <QtUiTools/QtUiTools>



class rt_pointerPrivate // a class in a cpp file always end with };
{
public:
    int mode;
    QList<QString> imagesList;
    QString currentSerieId;
    QDate beginDate, endDate;
    QMap<QString,QList<QString> > selectedSeries;
};






rt_pointer::rt_pointer(QWidget *parent) :
    QWidget(parent), d(new rt_pointerPrivate)

{
   QTextCodec::setCodecForLocale(QTextCodec::codecForName("iso"));
   setupUi (this);
   d->mode=rt_pointer::CD; //=ui->...

   //Initialize QtreeWidgetPatients

   treeWidgetPatients->setColumnWidth(0,400);
   treeWidgetPatients->setColumnWidth(1,100);
   treeWidgetPatients->setColumnWidth(2,100);

   QStringList labelsPatients;
   labelsPatients << "Patient's name"<<"ID"<<"Birthday"<<"Sex";
   treeWidgetPatients->setHeaderLabels(labelsPatients);
   treeWidgetPatients->setContextMenuPolicy(Qt::CustomContextMenu);

   //Initialize QtreeWidgetSeries

   treeWidgetSeries->setColumnWidth(0,230);
   treeWidgetSeries->setColumnWidth(1,100);
   treeWidgetSeries->setColumnWidth(2,100);

   QStringList labelsSeries;
   labelsSeries << "Series description"<<"Modality"<<"Date"<<"ID";
   treeWidgetSeries->setHeaderLabels(labelsSeries);
   treeWidgetSeries->setContextMenuPolicy(Qt::CustomContextMenu);

   //Initialize QtreeWidgetStudies

   treeWidgetStudies->setColumnWidth(0,200);
   treeWidgetStudies->setColumnWidth(1,100);

   QStringList labelsStudies;
   labelsStudies << "Studies description"<<"Date"<<"ID";
   treeWidgetStudies->setHeaderLabels(labelsStudies);
   treeWidgetStudies->setContextMenuPolicy(Qt::CustomContextMenu);


   //Initialize widgets
   startDateEdit->setDate(QDate(2000,01,01));
   endDateEdit->setDate(QDate::currentDate());


   initConnections();





}

rt_pointer::~rt_pointer()
{
    delete d;
}


void rt_pointer::initConnections()
{
    // Initialize conncetions
    //QObject::connect(treeWidgetPatients,SIGNAL(currentItemChanged(QTreeWidgetItem*,QTreeWidgetItem*)),this,SLOT(patientItemSelected )
}

void rt_pointer::opendicomdir()
{

}


void rt_pointer::findSCU()
{
    d->mode = rt_pointer::PACS;
    treeWidgetPatients->clear();
    treeWidgetSeries->clear();
    treeWidgetStudies->clear();



}

void rt_pointer::clearDisplay()
{
    treeWidgetPatients->clear();
    treeWidgetSeries->clear();
    treeWidgetStudies->clear();
}

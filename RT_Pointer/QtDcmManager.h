#ifndef QTDCMMANAGER_H
#define QTDCMMANAGER_H

#include <QTreeWidget>
#include <QtCore>
#include <QtGui>
#include <QLabel>
#include <QMessageBox>
#include <QtNetwork>

#include "QtDcmServer.h"

class rt_pointer;
class QtDcmServer;


class QtDcmManagerPrivate;


class QtDcmManager : public QObject
{
    Q_OBJECT

public:
    QtDcmManager(); //default destructor

    static QtDcmManager* instance(); /*default constructor. Instantiate
    the internal inters and create the temporary directory.*/

    virtual ~QtDcmManager();

    enum outputdirmode
    {
        CUSTOM, DIALOG
    };

    void setOutputdirMode(QtDcmManager::outputdirmode mode);
    QtDcmManager::outputdirmode getOutputdirMode();

    void createTemporaryDirs();

    void deleteTemporaryDirs();

private:
    static QtDcmManager * _instance;
    QtDcmManagerPrivate *d;



};

#endif // QTDCMMANAGER_H

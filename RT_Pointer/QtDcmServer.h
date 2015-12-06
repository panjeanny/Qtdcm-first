#ifndef QTDCMSERVER_H
#define QTDCMSERVER_H

#include <QObject>
#include <QWidget>

class QtDcmServer : public QObject
{
    Q_OBJECT
public:
    /**
     * Default constructor
     */
    QtDcmServer() {}

    /**
     * Default destructor
     */
    virtual ~QtDcmServer() {}

    /**
     * PACS AETitle getter
     *
     * @return _aetitle a QString
     */
    inline QString getAetitle() const
    {
        return _aetitle;
    }

    /**
     * Description name getter
     *
     * @return _name a QString
     */
    inline QString getName() const
    {
        return _name;
    }

    /**
     * PACS server port getter (QtDcm only ports between 1000 and 100000)
     *
     * @return _port as a QString
     */
    inline QString getPort() const
    {
        return _port;
    }

    /**
     * PACS server hostname getter
     *
     * @return _server as a QString
     */
    inline QString getServer() const
    {
        return _server;
    }

    /**
     * PACS AETitle setter
     *
     * @param _aetitle as a QString
     */
    inline void setAetitle ( QString _aetitle )
    {
        this->_aetitle = _aetitle;
    }

    /**
     * PACS Name setter
     *
     * @param _name as a QString
     */
    inline void setName ( QString _name )
    {
        this->_name = _name;
    }

    /**
     * PACS server port setter (QtDcm only ports between 1000 and 100000)
     *
     * @param port as a QString
     */
    inline void setPort ( QString port )
    {
        this->_port = port;
    }

    /**
     * PACS server hostname setter
     *
     * @param _server as a QString
     */
    inline void setServer ( QString _server )
    {
        this->_server = _server;
    }

signals:

public slots:

private:
    QString _aetitle; /** Application entity title (AETitle) of the PACS server */
    QString _server; /** The hostname of the server */
    QString _port; /** TCP port the application is listening on */
    QString _name; /** Description name of the PACS */
};

#endif // QTDCMSERVER_H

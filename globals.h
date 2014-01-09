#ifndef GLOBALS_H
#define GLOBALS_H

#include <QObject>
#include <QString>

class Globals : public QObject
{
    Q_OBJECT
public:
    explicit Globals(QObject *parent = 0);

    typedef enum
    {
        ROW_ADD, ROW_EDIT, ROW_DEL
    }
    EDIT_MODE;

    typedef int UNWRITTEN_ID;

    static const UNWRITTEN_ID NEW_ID;
    static const int INVALID_PIN_NUMBER;

    static const QString ORGANIZATION_NAME;
    static const QString APPLICATION_NAME;
    static const QString APPLICATION_VERSION;

    static const QString DB_DRIVER;
    static const QString DB_HOSTNAME;
    static const QString DB_DATABASENAME;
    static const QString DB_USERNAME;
    static const QString DB_PASSWORD;


signals:

public slots:

};

#endif // GLOBALS_H

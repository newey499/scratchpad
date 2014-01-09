#include "globals.h"


const QString Globals::ORGANIZATION_NAME    = "net.home.chris-newey";
const QString Globals::APPLICATION_NAME     = "SCRATCHPAD";
const QString Globals::APPLICATION_VERSION  = "0.1.0";

const QString Globals::DB_DRIVER        = "QMYSQL";
const QString Globals::DB_HOSTNAME      = "127.0.0.1";
const QString Globals::DB_DATABASENAME  = "enigma";
const QString Globals::DB_USERNAME      = "cdn";
const QString Globals::DB_PASSWORD      = "charlton";

const Globals::UNWRITTEN_ID Globals::NEW_ID = -999;
const int Globals::INVALID_PIN_NUMBER = -888;


Globals::Globals(QObject *parent) :
    QObject(parent)
{
}

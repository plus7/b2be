#include "db.h"

DB::DB(QObject *parent = 0):
        m_manager(this)
{
}

BBS2chReply *DB::get(const QString& uri)
{
    if(isRunning(uri)){
        if(state1){

        }else if(state2){

        }else{

        }
    }else{
        QString path(getPathFromURI(uri));
        QFile logfile(path);
        if(!logfile.exists()){

        }else{
            if(!logfile.open(QIODevice::ReadOnly | QIODevice::Text)){
                return NULL;
            }
        }
    }
}

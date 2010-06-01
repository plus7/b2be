#ifndef DB_H
#define DB_H

#include <QObject>
#include <QtCore>
#include <QtNetwork>

class BBS2chReply;

class DB : public QObject
{
    Q_OBJECT
public:
    explicit DB(QObject *parent = 0);

    virtual QString getPathFromURI(const QString& uri) = 0;
    BBS2chReply *get(const QString& uri);
    BBS2chReply *get(const QString& uri, const QString& query);

signals:

public slots:

private:
    QNetworkAccessManager m_manager;
    QList<QNetworkReply*> m_networkReplies;

};

#endif // DB_H

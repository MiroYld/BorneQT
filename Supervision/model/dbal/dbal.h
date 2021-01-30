#ifndef DBAL_H
#define DBAL_H

#include <QtSql/QSqlDatabase>
#include <QtNetwork/QtNetwork>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlQueryModel>
#include <QtSql/QSqlRecord>

class dbal
{

    public:
         dbal();
    public:
         void sqlconnection();
         QSqlQueryModel* GetAll(QString what,QString table, QString where);
         QMap<QString,QVariant> Get(QString what,QString table,QString where);
         QMap<QString,QVariant> Update(QString what,QString table,QString data,QString where);
         QMap<QString,QVariant> Create(QString what,QString table,QString field,QString data);
         QMap<QString,QVariant> Delete(QString what,QString table,QString where);

         QSqlDatabase db;
         QSqlError error;
         QSqlRecord record;
         QSqlQuery query;
};

#endif // DBAL_H

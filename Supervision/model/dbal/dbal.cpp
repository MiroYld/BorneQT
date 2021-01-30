#include "dbal.h"

dbal::dbal()
{
 sqlconnection();
}

void dbal::sqlconnection(){

    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
       db.setHostName("127.0.0.1");
       db.setDatabaseName("bornedb");
       db.setUserName("mirodev");
       db.setPassword("mirodev");

       if(!db.open("mirodev","mirodev")){
           error =  query.lastError();
           qDebug() <<db.drivers();
       }
       else qDebug()<<"database connected";
}

QMap<QString,QVariant> dbal::Get(QString what,QString table,QString where){

    QMap<QString,QVariant> map;
    map.clear();
    QSqlQuery query("SELECT "+what+" FROM "+table+" WHERE "+where+" ");
    record = query.record();
    int nbchamp = record.count();
    QString champs[nbchamp];

    for(int i=0;i<nbchamp;i++)
    {
     champs[i]= record.fieldName(i);
    }
       while(query.next())
       {
          for(int i=0;i<nbchamp;i++)
          {
            map[champs[i]]=query.value(champs[i]);
          }
       }
     return map;
}

QSqlQueryModel* dbal::GetAll(QString what,QString table, QString where){

    QSqlQueryModel* modal = new QSqlQueryModel();
    modal->setQuery("SELECT "+what+" FROM "+table+" WHERE "+where+" ");

    return modal;
}

QMap<QString,QVariant> dbal::Update(QString what, QString table, QString data, QString where){

    QMap<QString,QVariant> map;
    map.clear();
    QSqlQuery query(""+what+" "+table+" "+data+" WHERE "+where+" ;");
    record = query.record();
    int nbchamp = record.count();
    QString champs[nbchamp];

       for(int i=0;i<nbchamp;i++)
       {
         champs[i]= record.fieldName(i);
       }
       while(query.next())
       {
          for(int i=0;i<nbchamp;i++)
          {
            map[champs[i]]=query.value(champs[i]);
          }
       }
     return map;

}

QMap<QString,QVariant> dbal::Create(QString what,QString table,QString field,QString data){

     QMap<QString,QVariant> map;
     QSqlQuery query(""+what+" "+table+" ("+field+") VALUES ("+data+") ;");
      query.bindValue(":"+field,data);
      query.bindValue(":"+field,data);
      query.bindValue(":"+field,data);
      query.bindValue(":"+field,data);
      query.bindValue(":"+field,data);
      query.bindValue(":"+field,data);
      query.exec();
      qDebug()<<query.lastQuery();
      qDebug()<<query.lastError();
}

/*QMap<QString,QVariant> dbal::Delete(QString what,QString table,QString where){


}*/











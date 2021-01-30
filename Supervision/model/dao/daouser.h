#ifndef DAOUSER_H
#define DAOUSER_H

#include "model/dbal/dbal.h"
#include "metier/user.h"

class daouser
{
    public:
           daouser(dbal*);
          ~daouser();

           bool checklogin(QString mail, QString password);
           QSqlQueryModel* users();

           bool updateuser(user o_user);
           bool adduser(user o_user);
           bool deleteuser(user o_user);

           user getusers(QString val);

    private:
          dbal *o_dbal;
          user * o_user;

};

#endif // DAOUSER_H

#include "security/security.h"
#include "supervision.h"
#include "model/dbal/dbal.h"
#include "model/dao/daouser.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    dbal o_dbal;
    daouser o_daouser(&o_dbal);

    QApplication a(argc, argv);
    //security w(&o_daouser);
    supervision w(&o_daouser);
    w.show();
    return a.exec();
}

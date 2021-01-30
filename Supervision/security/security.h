#ifndef SECURITY_H
#define SECURITY_H

#include "model/dao/daouser.h"
#include "supervision.h"
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class security;
}

class security : public QWidget
{
    Q_OBJECT

    public:
        explicit security(daouser *,QWidget *parent = nullptr);
        ~security();

    public slots:
        void on_BtnLogin_clicked();

    private:
        Ui::security *ui;
        daouser *o_daouser;
        supervision *o_supervision;

};

#endif // SECURITY_H

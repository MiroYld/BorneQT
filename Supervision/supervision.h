#ifndef SUPERVISION_H
#define SUPERVISION_H

#include <QMainWindow>
#include <QMessageBox>

#include "model/dao/daouser.h"
#include "metier/user.h"

namespace Ui { class supervision; }


class supervision : public QMainWindow
{
    Q_OBJECT

    public:
        supervision(daouser *,QWidget *parent = nullptr);
        ~supervision();
        void displayusers();
        user getusersdata();

    private slots:
        void on_btn_page_1_clicked();
        void on_btn_page_2_clicked();
        void on_BtMAJ_clicked();
        void on_BtnNouveau_clicked();
        void on_BtnSupprimer_clicked();
        void on_userTableView_activated(const QModelIndex &index);

private:
        Ui::supervision *ui;
        daouser *o_daouser;
        //user userdata;
};
#endif // SUPERVISION_H

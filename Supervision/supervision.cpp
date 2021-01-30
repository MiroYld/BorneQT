#include "supervision.h"
#include "ui_supervision.h"

supervision::supervision(daouser *m_daouser,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::supervision)
{
    ui->setupUi(this);
    o_daouser = m_daouser;
    displayusers(); //user qtableview
}

supervision::~supervision()
{
    delete ui;
}

void supervision::on_btn_page_1_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void supervision::on_btn_page_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

user supervision::getusersdata()
{ 
    user userdata;

    userdata.setNom((ui->TbNom->text()));
    userdata.setPrenom((ui->TbPrenom->text()));
    userdata.setMdp((ui->TbMdp->text()));
    userdata.setMail((ui->TbMail->text()));
    userdata.setStatut((ui->TbStatut->text()));
    userdata.setUtilisateur((ui->TbUtilisateur->text()));
    userdata.setId((ui->TbId->text()).toInt());

    return userdata;

}
void supervision::displayusers()
{
    if (o_daouser->users())
    {
        ui->userTableView->setModel(o_daouser->users());
    }
    else QMessageBox::critical(this,"Erreur","Erreur d'éxecution de la méthode displayusers.");
}

void supervision::on_userTableView_activated(const QModelIndex &index)
{
     user alldata = o_daouser->getusers(ui->userTableView->model()->data(index).toString());
     ui->TbNom->setText(alldata.getNom());
     ui->TbPrenom->setText(alldata.getPrenom());
     ui->TbMail->setText(alldata.getMail());
     ui->TbMdp->setText(alldata.getMdp());
     ui->TbUtilisateur->setText(alldata.getUtilisateur());
     ui->TbStatut->setText(alldata.getStatut());
     ui->TbId->setText(QString::number(alldata.getId()));
}

void supervision::on_BtMAJ_clicked()
{

   if (!o_daouser->updateuser(getusersdata()))
   {
       QMessageBox::critical(this,"Erreur","Erreur d'éxecution de la méthode de mise à jour.");

   }
   else
   {
       QMessageBox::information(this,"M.A.J","Utilisateur mis à jour!");
       displayusers();
   }

}

void supervision::on_BtnNouveau_clicked()
{
    if (o_daouser->adduser(getusersdata()))
    {
        displayusers();
    }
    else QMessageBox::critical(this,"Erreur","Erreur d'éxecution de la méthode d'ajout.");
}

void supervision::on_BtnSupprimer_clicked()
{

}


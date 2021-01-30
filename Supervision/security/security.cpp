#include "security.h"
#include "ui_security.h"

security::security(daouser *m_daouser,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::security)
{
    ui->setupUi(this);
    o_daouser = m_daouser;
    o_supervision = new supervision(m_daouser);
}

security::~security()
{
    delete ui;
    delete o_supervision;
}

void security::on_BtnLogin_clicked()
{


    if (o_daouser->checklogin(ui->TbMail->text(),ui->TbPassword->text())){ //class daouser function checklogin
        security::close();
        o_supervision->show();
        QMessageBox::information(this,"Bienvenue","Bienvenue dans l'application de supervision de solar phone!");
    }
    else QMessageBox::warning(this,"connexion","Erreur lors de la connexion. Merci de verifier votre adresse mail et votre mot de passe");
}

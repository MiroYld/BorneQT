#include "daouser.h"

daouser::daouser(dbal *m_dbal)
{
 o_dbal = m_dbal;
}

 daouser::~daouser()
 {
 }

 bool daouser::checklogin(QString mail, QString password){

     QMap<QString,QVariant> map = o_dbal->Get(
                                              "*",
                                              "user",
                                              "mail='"+mail+"' AND  mdp='"+password+"' "
                                             );
     return (map.size() != 0);
 }

 QSqlQueryModel* daouser::users(){

      QSqlQueryModel *modal = o_dbal->GetAll(
                                             "nom,prenom,mdp,mail,statut,utilisateur",
                                             "user",
                                             "1"
                                            );
      return modal;
 }
 user daouser::getusers(QString val){

       QMap<QString,QVariant> map = o_dbal->Get(
                                                "*",
                                                "user",
                                                "nom='"+val+
                                                "' or prenom='"+val+
                                                "' or mdp='"+val+
                                                "' or mail='"+val+
                                                "' or utilisateur='"+val+
                                                "' or statut='"+val+"' "
                                                );
       user alldata(map);
       return alldata;
  }

 bool daouser::updateuser(user o_user){
     QMap<QString,QVariant> map = o_dbal->Update(
                                                 "UPDATE",
                                                 "user set",
                                                 " nom='"+o_user.getNom()+
                                                 "',prenom='"+o_user.getPrenom()+
                                                 "',mdp='"+o_user.getMdp()+
                                                 "',mail='"+o_user.getMail()+
                                                 "',utilisateur='"+o_user.getUtilisateur()+
                                                 "',statut='"+o_user.getStatut()+"'",
                                                 "idUser="+QString::number(o_user.getId())+""
                                                 );
     return (map.size() == 0);
  }


 bool daouser::adduser(user o_user){
    QMap<QString,QVariant> map  =  o_dbal->Create(
                                                  "INSERT INTO",
                                                  "user",
                                                  "nom,prenom,mdp,mail,utilisateur,statut",
                                                  ":nom='"+o_user.getNom()+
                                                  "',:prenom='"+o_user.getPrenom()+
                                                  "',:mdp='"+o_user.getMdp()+
                                                  "',:mail='"+o_user.getMail()+
                                                  "',:utilisateur='"+o_user.getUtilisateur()+
                                                  "',:statut='"+o_user.getStatut()+"'"
                                                  );

     return (map.size() == 0);
 }

 /*bool daouser::deleteuser(user o_user){

 }*/















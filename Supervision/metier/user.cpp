#include "user.h"

user::user()
{


}

user::user(QMap<QString,QVariant>map){

    nom = map["nom"].toString();
    prenom = map["prenom"].toString();
    mail = map["mail"].toString();
    mdp = map["mdp"].toString();
    utilisateur = map["utilisateur"].toString();
    statut = map["statut"].toString();
    Id = map["idUser"].toInt();

}
int user::getId() const
{
    return Id;
}

void user::setId(int value)
{
    Id = value;
}

QString user::getStatut() const
{
    return statut;
}

void user::setStatut(const QString &value)
{
    statut = value;
}

QString user::getUtilisateur() const
{
    return utilisateur;
}

void user::setUtilisateur(const QString &value)
{
    utilisateur = value;
}

QString user::getMail() const
{
    return mail;
}

void user::setMail(const QString &value)
{
    mail = value;
}

QString user::getMdp() const
{
    return mdp;
}

void user::setMdp(const QString &value)
{
    mdp = value;
}

QString user::getPrenom() const
{
    return prenom;
}

void user::setPrenom(const QString &value)
{
    prenom = value;
}

QString user::getNom() const
{
    return nom;
}

void user::setNom(const QString &value)
{
    nom = value;
}

void user::setUsers(const QString &value)
{
    users = value;
}

QString user::getUsers() const
{
    return users;
}

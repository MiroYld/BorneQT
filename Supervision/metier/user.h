#ifndef USER_H
#define USER_H

#include <QString>
#include <QVariant>
class user
{
public:
    user(QMap<QString,QVariant>map);
    user();

    int Id;
    QString users,nom,prenom,mdp,mail,utilisateur,statut;

    int getId() const;
    void setId(int value);

    QString getUsers() const;
    void setUsers(const QString &value);

    QString getNom() const;
    void setNom(const QString &value);

    QString getPrenom() const;
    void setPrenom(const QString &value);

    QString getMdp() const;
    void setMdp(const QString &value);

    QString getMail() const;
    void setMail(const QString &value);

    QString getUtilisateur() const;
    void setUtilisateur(const QString &value);

    QString getStatut() const;
    void setStatut(const QString &value);
};

#endif // USER_H

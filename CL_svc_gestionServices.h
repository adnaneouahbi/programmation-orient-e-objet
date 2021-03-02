#pragma once

#include "CL_CAD.h" 
#include "CL_map_TBCLIENT.h"
#include "CL_map_TBCOMMANDE.h"
#include "CL_map_TBFACTURE.h"
#include "CL_map_TBPERSONNEL.h"
#include "CL_map_TBSTOCK.h"

// On crée un namespace specifique pour la gestion de service, ça permet de regrouper les classes
// C'est purement cosmétique mais permet d'avoir un code plus elegant
namespace NS_Svc
{
    ref class CL_svc_gestionServices
    {
    public:
        CL_svc_gestionServices();

        // Permet de recuperer la liste des personnes presentes dans la bdd (identifiant de la liste)
        DataSet^ listePersonnel(String^);
        DataSet^ listeClient(String^);
        DataSet^ listeCommande(String^);
        DataSet^ listeStock(String^);
        DataSet^ listeFacture(String^);


        // Permet d'ajouter une personne (nom, prenom)
        int ajouterPersonnel(String^, String^, String^, String^, String^);
        int ajouterClients(String^, String^, String^, String^, String^, String^);
        int ajouterArticles(String^, String^);
        int ajouterCommande(String^, String^, String^, String^, String^);
        int ajouterFactures(String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);

        // Permet de modifier une personne (indentifiant de la personne à modifier, nouveau nom, nouveau prenom)
        void modifierPersonnel(int, String^, String^, String^, String^, String^);
        void modifierClients(int, String^, String^, String^, String^, String^, String^);
        void modifierArticles(int, String^, String^);
        void modifierCommande(int, String^, String^, String^, String^, String^);
        void modifierFactures(int, String^, String^, String^, String^, String^, String^, String^, String^, String^, String^);

        // Permet de supprimer une personne (identifiant de la personne à supprimer)
        void supprimerPersonnel(int);
        void supprimerClients(int);
        void supprimerArticles(int);
        void supprimerCommande(int);
        void supprimerFactures(int);

    private:
        // Permet d'acceder à la donnee
        NS_Composants::CL_CAD^ cad;

        // Permet de mapper une donnee personne vers/depuis la bdd
        NS_Composants::CL_map_TBPERSONNEL^ personnel;
        NS_Composants::CL_map_TBCOMMANDE^ commande;
        NS_Composants::CL_map_TBCLIENT^ client;
        NS_Composants::CL_map_TBFACTURE^ facture;
        NS_Composants::CL_map_TBSTOCK^ stock;

        // Cache de donnée en memoire de la bdd
        DataSet^ ds;
    };
}
#pragma once

using namespace System;

namespace NS_Composants
{

    ref class CL_map_TBCLIENT
    {
    public:
        // Constructeur par defaut
        CL_map_TBCLIENT();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setNumClient(int);
        void setPrenomCLient(String^);
        void setNomCLient(String^);
        void setAdresseFact(String^);
        void setAdresseLivr(String^);
        void setDateNaiss(String^);
        void setDatePremAchat(String^);

        int getNumClient();
        String^ getPrenomCLient();
        String^ getNomCLient();
        String^ getAdresseFact();
        String^ getAdresseLivr();
        String^ getDateNaiss();
        String^ getDatePremAchat();


    private:
        int numero_client;
        String^ nom_client;
        String^ prenom_client;
        String^ adresse_facturation;
        String^ adresse_livraison;
        String^ date_naissance;
        String^ date_premier_achat;

    };
}

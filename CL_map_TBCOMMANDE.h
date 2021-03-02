#pragma once

using namespace System;

namespace NS_Composants
{

    ref class CL_map_TBCOMMANDE
    {
    public:
        // Constructeur par defaut
        CL_map_TBCOMMANDE();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setRef(int);
        void setDateEmiss(String^);
        void setDateLivraison(String^);
        void setDatePaiement(String^);
        void setMoyenPaiement(String^);
        void setDateSoldement(String^);

        int getRef();
        String^ getDateEmiss();
        String^ getDateLivraison();
        String^ getDatePaiement();
        String^ getMoyenPaiement();
        String^ getDateSoldement();


    private:
        int ref;
        String^ date_livraison;
        String^ date_emission;
        String^ date_paiement;
        String^ moyen_paiement;
        String^ date_soldement;

    };
}

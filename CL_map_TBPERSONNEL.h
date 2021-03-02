#pragma once

using namespace System;

namespace NS_Composants
{

    ref class CL_map_TBPERSONNEL
    {
    public:
        // Constructeur par defaut
        CL_map_TBPERSONNEL();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees

        void setNumPersonnel(int);
        void setPrenomPersonnel(String^);
        void setNomPersonnel(String^);
        void setAdresse(String^);
        void setDateEmbauche(String^);
        void setSupHier(String^);

        int getNumPersonnel();
        String^ getPrenomPersonnel();
        String^ getNomPersonnel();
        String^ getAdresse();
        String^ getDateEmbauche();
        String^ getSupHier();


    private:

        int numero_personnel;
        String^ nom_personnel;
        String^ prenom_personnel;
        String^ addresse;
        String^ dateEmbauche;
        String^ superieur_hierarchique;

    };
}

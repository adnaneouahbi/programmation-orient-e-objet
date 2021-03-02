#pragma once

using namespace System;

namespace NS_Composants
{

    ref class CL_map_TBSTOCK
    {
    public:
        // Constructeur par defaut
        CL_map_TBSTOCK();

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
        void setNomArtcl(String^);
        void setQte(String^);

        int getRef();
        String^ getNomArtcl();
        String^ getQte();


    private:

        int reference_article;
        String^ nom_article;
        String^ qte_article;

    };
}

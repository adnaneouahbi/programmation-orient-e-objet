#pragma once

using namespace System;

namespace NS_Composants
{

    ref class CL_map_TBFACTURE
    {
    public:
        // Constructeur par defaut
        CL_map_TBFACTURE();

        // retourne le commande pour selectionner une personne dans la bdd
        String^ SELECT();

        // retourne le commande pour ajouter une personne dans la bdd
        String^ INSERT();

        // retourne le commande pour mettre à jour une personne dans la bdd
        String^ UPDATE();

        // retourne le commande pour suppprimer une personne dans la bdd
        String^ DELETE();

        // Accesseurs et setters classique de donnees
        void setnumfact(int);
        void setnomSociete(String^);
        void setadresSociete(String^);
        void setNumeroServiceClient(String^);
        void setLogoSociete(String^);
        void setNomclient(String^);
        void setCodeClient(String^);
        void setadressLivraison(String^);
        void setadressFacturation(String^);
        void setmontantTotalHT(String^);
        void setmontantTotalTVA(String^);
        void setmontantTotalTTC(String^);
        void setTotalArticles(String^);





        int getnumfact();
        String^ getnomSociete();
        String^ getadresSociete();
        String^ getNumeroServiceClient();
        String^ getLogoSociete();
        String^ getNomclient();
        String^ getCodeClient();
        String^ getadressLivraison();
        String^ getadressFacturation();
        String^ getmontantTotalHT();
        String^ getmontantTotalTVA();
        String^ getmontantTotalTTC();
        String^ getTotalArticles();


    private:
        int numero_facture;
        String^ nom_societe;
        String^ adresse_societe;
        String^ numeros_service_client;
        String^ logo_societe;
        String^ nom_client;
        String^ code_client;
        String^ adresse_livraison;
        String^ adresse_facturation;
        String^ montant_total_achete;
        String^ montant_total_tva;
        String^ montant_total_ttc;
        String^ total_article;
    };
}

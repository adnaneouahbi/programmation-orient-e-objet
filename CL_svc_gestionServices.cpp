#include "CL_svc_gestionServices.h"

using namespace NS_Svc;

CL_svc_gestionServices::CL_svc_gestionServices()
{
    this->cad = gcnew NS_Composants::CL_CAD();
    this->personnel = gcnew NS_Composants::CL_map_TBPERSONNEL();
    this->client = gcnew NS_Composants::CL_map_TBCLIENT();
    this->commande = gcnew NS_Composants::CL_map_TBCOMMANDE();
    this->stock = gcnew NS_Composants::CL_map_TBSTOCK();
    this->facture = gcnew NS_Composants::CL_map_TBFACTURE();
    this->ds = gcnew Data::DataSet();
}




DataSet^ CL_svc_gestionServices::listePersonnel(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->personnel->SELECT(), dataTableName);

    return this->ds;
}

DataSet^ CL_svc_gestionServices::listeCommande(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->commande->SELECT(), dataTableName);

    return this->ds;
}

DataSet^ CL_svc_gestionServices::listeFacture(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->facture->SELECT(), dataTableName);

    return this->ds;
}

DataSet^ CL_svc_gestionServices::listeClient(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->client->SELECT(), dataTableName);

    return this->ds;
}

DataSet^ CL_svc_gestionServices::listeStock(String^ dataTableName)
{
    this->ds->Clear();
    this->ds = this->cad->getRows(this->stock->SELECT(), dataTableName);

    return this->ds;
}





int CL_svc_gestionServices::ajouterPersonnel(String^ nom_personnel, String^ prenom_personnel, String^ addresse, String^ dateEmbauche, String^ superieur_hierarchique)
{
    int numero_personnel;

    this->personnel->setNomPersonnel(nom_personnel);
    this->personnel->setPrenomPersonnel(prenom_personnel);
    this->personnel->setAdresse(addresse);
    this->personnel->setDateEmbauche(dateEmbauche);
    this->personnel->setSupHier(superieur_hierarchique);

    numero_personnel = this->cad->actionRowsID(this->personnel->INSERT());

    return numero_personnel;
}

int CL_svc_gestionServices::ajouterCommande(String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, String^ date_soldement)
{
    int ref;

    this->commande->setDateEmiss(date_emission);
    this->commande->setDateLivraison(date_livraison);
    this->commande->setDatePaiement(date_paiement);
    this->commande->setMoyenPaiement(moyen_paiement);
    this->commande->setDateSoldement(date_soldement);

    ref = this->cad->actionRowsID(this->commande->INSERT());

    return ref;
}

int CL_svc_gestionServices::ajouterFactures(String^ adresse_societe, String^ numeros_service_client, String^ nom_client, String^ code_client, String^ adresse_livraison, String^ adresse_facturation, String^ montant_total_achete, String^ montant_total_tva, String^ montant_total_ttc, String^ total_article)
{
    int numero_facture;

    //this->facture->setnomSociete(nom_societe);
    this->facture->setadresSociete(adresse_societe);
    this->facture->setNumeroServiceClient(numeros_service_client);
    //this->facture->setLogoSociete(logo_societe);
    this->facture->setNomclient(nom_client);
    this->facture->setCodeClient(code_client);
    this->facture->setadressLivraison(adresse_livraison);
    this->facture->setadressFacturation(adresse_facturation);
    this->facture->setmontantTotalHT(montant_total_achete);
    this->facture->setmontantTotalTVA(montant_total_tva);
    this->facture->setmontantTotalTTC(montant_total_ttc);
    this->facture->setTotalArticles(total_article);

    numero_facture = this->cad->actionRowsID(this->facture->INSERT());

    return numero_facture;
}

int CL_svc_gestionServices::ajouterClients(String^ nom_client, String^ prenom_client, String^ adresse_facturation, String^ adresse_livraison, String^ date_naissance, String^ date_premier_achat)
{
    int numero_client;

    this->client->setNomCLient(nom_client);
    this->client->setPrenomCLient(prenom_client);
    this->client->setAdresseFact(adresse_facturation);
    this->client->setAdresseLivr(adresse_livraison);
    this->client->setDateNaiss(adresse_livraison);
    this->client->setDatePremAchat(date_premier_achat);

    numero_client = this->cad->actionRowsID(this->personnel->INSERT());

    return numero_client;
}

int CL_svc_gestionServices::ajouterArticles(String^ nom_article, String^ qte_article)
{
    int reference_article;

    this->stock->setNomArtcl(nom_article);
    this->stock->setQte(qte_article);


    reference_article = this->cad->actionRowsID(this->stock->INSERT());

    return reference_article;
}







void CL_svc_gestionServices::modifierPersonnel(int numero_personnel, String^ nom_personnel, String^ prenom_personnel, String^ addresse, String^ dateEmbauche, String^ superieur_hierarchique)
{

    this->personnel->setNumPersonnel(numero_personnel);
    this->personnel->setNomPersonnel(nom_personnel);
    this->personnel->setPrenomPersonnel(prenom_personnel);
    this->personnel->setAdresse(addresse);
    this->personnel->setDateEmbauche(dateEmbauche);
    this->personnel->setSupHier(superieur_hierarchique);


    this->cad->actionRows(this->personnel->UPDATE());
}

void CL_svc_gestionServices::modifierCommande(int ref, String^ date_livraison, String^ date_emission, String^ date_paiement, String^ moyen_paiement, String^ date_soldement)
{
    this->commande->setRef(ref);
    this->commande->setDateEmiss(date_emission);
    this->commande->setDateLivraison(date_livraison);
    this->commande->setDatePaiement(date_paiement);
    this->commande->setMoyenPaiement(moyen_paiement);
    this->commande->setDateSoldement(date_soldement);

    this->cad->actionRows(this->commande->UPDATE());
}

void CL_svc_gestionServices::modifierFactures(int numero_facture, String^ adresse_societe, String^ numeros_service_client, String^ nom_client, String^ code_client, String^ adresse_livraison, String^ adresse_facturation, String^ montant_total_achete, String^ montant_total_tva, String^ montant_total_ttc, String^ total_article)
{
    this->facture->setnumfact(numero_facture);
    //this->facture->setnomSociete(nom_societe);
    this->facture->setadresSociete(adresse_societe);
    this->facture->setNumeroServiceClient(numeros_service_client);
    //this->facture->setLogoSociete(logo_societe);
    this->facture->setNomclient(nom_client);
    this->facture->setCodeClient(code_client);
    this->facture->setadressLivraison(adresse_livraison);
    this->facture->setadressFacturation(adresse_facturation);
    this->facture->setmontantTotalHT(montant_total_achete);
    this->facture->setmontantTotalTVA(montant_total_tva);
    this->facture->setmontantTotalTTC(montant_total_ttc);
    this->facture->setTotalArticles(total_article);

    this->cad->actionRows(this->facture->UPDATE());
}

void CL_svc_gestionServices::modifierClients(int numero_client, String^ nom_client, String^ prenom_client, String^ adresse_facturation, String^ adresse_livraison, String^ date_naissance, String^ date_premier_achat)
{
    this->client->setNumClient(numero_client);
    this->client->setNomCLient(nom_client);
    this->client->setPrenomCLient(prenom_client);
    this->client->setAdresseFact(adresse_facturation);
    this->client->setAdresseLivr(adresse_livraison);
    this->client->setDateNaiss(adresse_livraison);
    this->client->setDatePremAchat(date_premier_achat);

    this->cad->actionRows(this->client->UPDATE());
}

void CL_svc_gestionServices::modifierArticles(int reference_article, String^ nom_article, String^ qte_article)
{
    this->stock->setRef(reference_article);
    this->stock->setNomArtcl(nom_article);
    this->stock->setQte(qte_article);


    this->cad->actionRows(this->stock->UPDATE());
}






void CL_svc_gestionServices::supprimerPersonnel(int numero_personnel)
{
    this->personnel->setNumPersonnel(numero_personnel);

    this->cad->actionRows(this->personnel->DELETE());
}

void CL_svc_gestionServices::supprimerCommande(int ref)
{
    this->commande->setRef(ref);

    this->cad->actionRows(this->commande->DELETE());
}

void CL_svc_gestionServices::supprimerFactures(int numero_facture)
{
    this->facture->setnumfact(numero_facture);

    this->cad->actionRows(this->facture->DELETE());
}

void CL_svc_gestionServices::supprimerClients(int numero_client)
{
    this->client->setNumClient(numero_client);

    this->cad->actionRows(this->client->DELETE());



}

void CL_svc_gestionServices::supprimerArticles(int reference_article)
{
    this->stock->setRef(reference_article);

    this->cad->actionRows(this->stock->DELETE());



}
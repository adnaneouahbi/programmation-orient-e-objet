#include "CL_map_TBFACTURE.h"


using namespace NS_Composants;

CL_map_TBFACTURE::CL_map_TBFACTURE()
{
    this->numero_facture = -1;
    this->nom_societe = "RIEN";
    this->adresse_societe = "RIEN";
    this->numeros_service_client = "RIEN";
    this->logo_societe = "RIEN";
    this->nom_client = "RIEN";
    this->code_client = "RIEN";
    this->adresse_livraison = "RIEN";
    this->adresse_facturation = "RIEN";
    this->montant_total_achete = "RIEN" ;
    this->montant_total_tva = "RIEN";
    this->montant_total_ttc = "RIEN";
    this->total_article = "RIEN";
}

String^ CL_map_TBFACTURE::SELECT()
{
    return "SELECT numero_facture, nom_societe, adresse_societe, numeros_service_client, logo_societe, nom_client,code_client, adresse_livraison, adresse_facturation, montant_total_achete, montant_total_tva, montant_total_ttc, total_article;" +
        "FROM TB_FACTURE;";
}

String^ CL_map_TBFACTURE::INSERT()
{
    return "INSERT INTO TB_FACTURE " +
        "(nom_societe, adresse_societe, numeros_service_client, logo_societe, nom_client,code_client, adresse_livraison, adresse_facturation, montant_total_achete, montant_total_tva, montant_total_ttc, total_article) " +
        "VALUES('" + this->getnomSociete() + "','" + this->getadresSociete() + "','" + this->getNumeroServiceClient() + "','" + this->getLogoSociete() + "','" + this->getNomclient() + "','" + this->getCodeClient() + "','" + this->getadressLivraison() + "','" + this->getadressFacturation() + "','" + this->getmontantTotalHT() + "','" + this->getmontantTotalTVA() + "','" + this->getmontantTotalTTC() + "','" + this->getTotalArticles() + "');SELECT @@IDENTITY;";
}

String^ CL_map_TBFACTURE::UPDATE()
{
    return "UPDATE TB_FACTURE " +
        "SET nom_societe = '" + this->getnomSociete() + "', adresse_societe = '" + this->getadresSociete() + "', numeros_service_client = '" + this->getNumeroServiceClient() + "', logo_societe = '" + this->getLogoSociete() + "', nom_client = '" + this->getNomclient() + "', code_client = '" + this->getCodeClient() + "', adresse_livraison '" + this->getadressLivraison() + "', adresse_facturation = '" + this->getadressFacturation() + "', montant_total_achete = '" + this->getmontantTotalHT() + "', montant_total_tva = '" + this->getmontantTotalTVA() + "', montant_total_ttc = '" + this->getmontantTotalTTC() + "', total_article = '" + this->getTotalArticles() + "' " +
        "WHERE(numero_facture = " + this->getnumfact() + ");";
}

String^ CL_map_TBFACTURE::DELETE()
{
    return "DELETE FROM TB_FACTURE " +
        "WHERE(numero_facture = " + this->getnumfact() + ");";
}

void CL_map_TBFACTURE::setnumfact(int numero_facture)
{
    if (numero_facture > 0)
    {
        this->numero_facture = numero_facture;
    }
}

void CL_map_TBFACTURE::setnomSociete(String^ nom_societe)
{
    if (nom_societe != "")
    {
        this->nom_societe = nom_societe;
    }
}

void CL_map_TBFACTURE::setadresSociete(String^ adresse_societe)
{
    if (adresse_societe != "")
    {
        this->adresse_societe = adresse_societe;
    }
}

void CL_map_TBFACTURE::setNumeroServiceClient(String^ numeros_service_client)
{
    if (numeros_service_client != "")
    {
        this->numeros_service_client = numeros_service_client;
    }
}

void CL_map_TBFACTURE::setLogoSociete(String^ logo_societe)
{
    if (logo_societe != "")
    {
        this->logo_societe = logo_societe;
    }
}

void CL_map_TBFACTURE::setNomclient(String^ nom_client)
{
    if (nom_client != "")
    {
        this->nom_client = nom_client;
    }
}

void CL_map_TBFACTURE::setCodeClient(String^ code_client)
{
    if (code_client != "")
    {
        this->code_client = code_client;
    }
}




void CL_map_TBFACTURE::setadressLivraison(String^ adresse_livraison)
{
    if (adresse_livraison != "")
    {
        this->adresse_livraison = adresse_livraison;
    }
}

void CL_map_TBFACTURE::setadressFacturation(String^ adresse_facturation)
{
    if (adresse_facturation != "")
    {
        this->adresse_facturation = adresse_facturation;
    }
}

void CL_map_TBFACTURE::setmontantTotalHT(String^ montant_total_achete)
{
    if (montant_total_achete != "")
    {
        this->montant_total_achete = montant_total_achete;
    }
}

void CL_map_TBFACTURE::setmontantTotalTVA(String^ montant_total_tva)
{
    if (montant_total_tva != "")
    {
        this->montant_total_tva = montant_total_tva;
    }
}

void CL_map_TBFACTURE::setmontantTotalTTC(String^ montant_total_ttc)
{
    if (montant_total_ttc != "")
    {
        this->montant_total_ttc = montant_total_ttc;
    }
}

void CL_map_TBFACTURE::setTotalArticles(String^ total_article)
{
    if (total_article != "")
    {
        this->total_article = total_article;
    }
}







int CL_map_TBFACTURE::getnumfact()
{
    return this->numero_facture = numero_facture;
}

String^ CL_map_TBFACTURE::getnomSociete()
{
    return this->nom_societe = nom_societe;
}

String^ CL_map_TBFACTURE::getadresSociete()
{
    return this->adresse_societe = adresse_societe;
}

String^ CL_map_TBFACTURE::getNumeroServiceClient()
{
    return this->numeros_service_client = numeros_service_client;
}

String^ CL_map_TBFACTURE::getLogoSociete()
{
    return this->logo_societe = logo_societe;
}

String^ CL_map_TBFACTURE::getNomclient()
{
    return this->nom_client = nom_client;
}

String^ CL_map_TBFACTURE::getCodeClient()
{
    return this->code_client = code_client;
}

String^ CL_map_TBFACTURE::getadressLivraison()
{
    return this->adresse_livraison = adresse_livraison;
}

String^ CL_map_TBFACTURE::getadressFacturation()
{
    return this->adresse_facturation = adresse_facturation;
}

String^ CL_map_TBFACTURE::getmontantTotalHT()
{
    return this->montant_total_achete = montant_total_achete;
}

String^ CL_map_TBFACTURE::getmontantTotalTVA()
{
    this->montant_total_tva = montant_total_tva;
}

String^ CL_map_TBFACTURE::getmontantTotalTTC()
{
    return this->montant_total_ttc = montant_total_ttc;
}

String^ CL_map_TBFACTURE::getTotalArticles()
{
    return this->total_article = total_article;
}
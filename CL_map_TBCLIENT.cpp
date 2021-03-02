#include "CL_map_TBCLIENT.h"



using namespace NS_Composants;

CL_map_TBCLIENT::CL_map_TBCLIENT()
{
    this->numero_client = -1;
    this->nom_client = "RIEN";
    this->prenom_client = "RIEN";
    this->adresse_facturation = "RIEN";
    this->adresse_livraison = "RIEN";
    this->date_naissance = "RIEN";
    this->date_premier_achat = "RIEN";
}

String^ CL_map_TBCLIENT::SELECT()
{
    return "SELECT numero_client, nom_client, prenom_client, adresse_facturation, adresse_livraison, date_naissance, date_premier_achat " +
        "FROM TB_CLIENT;";
}

String^ CL_map_TBCLIENT::INSERT()
{
    return "INSERT INTO TB_CLIENT " +
        "(nom_client, prenom_client, adresse_facturation, adresse_livraison, date_naissance, date_premier_achat) " +
        "VALUES('" + this->getNomCLient() + "','" + this->getPrenomCLient() + "','" + this->getAdresseFact() + "','" + this->getAdresseLivr() + "','" + this->getDateNaiss() + "','" + this->getDatePremAchat() + "');SELECT @@IDENTITY;";
}

String^ CL_map_TBCLIENT::UPDATE()
{
    return "UPDATE TB_CLIENT " +
        "SET nom_client = '" + this->getNomCLient() + "', prenom_client = '" + this->getPrenomCLient() + "'adresse_facturation = '" + this->getAdresseFact() + "'adresse_livraison = '" + this->getAdresseLivr() + "'date_naissance = '" + this->getDateNaiss() + "'date_premier_achat = '" + this->getDatePremAchat() + "' " +
        "WHERE(numero_client = " + this->getNumClient() + ");";
}

String^ CL_map_TBCLIENT::DELETE()
{
    return "DELETE FROM TB_CLIENT " +
        "WHERE(numero_client = " + this->getNumClient() + ");";
}

void CL_map_TBCLIENT::setNumClient(int numero_client)
{
    if (numero_client > 0)
    {
        this->numero_client = numero_client;
    }
}

void CL_map_TBCLIENT::setPrenomCLient(String^ prenom_client)
{
    if (prenom_client != "")
    {
        this->prenom_client = prenom_client;
    }
}

void CL_map_TBCLIENT::setNomCLient(String^ nom_client)
{
    if (nom_client != "")
    {
        this->nom_client = nom_client;
    }
}

void CL_map_TBCLIENT::setAdresseFact(String^ adresse_facturation)
{
    if (adresse_facturation != "")
    {
        this->adresse_facturation = adresse_facturation;
    }
}

void CL_map_TBCLIENT::setAdresseLivr(String^ adresse_livraison)
{
    if (adresse_livraison != "")
    {
        this->adresse_livraison = adresse_livraison;
    }
}

void CL_map_TBCLIENT::setDatePremAchat(String^ date_premier_achat)
{
    if (date_premier_achat != "")
    {
        this->date_premier_achat = date_premier_achat;
    }
}

void CL_map_TBCLIENT::setDateNaiss(String^ date_naissance)
{
    if (date_naissance != "")
    {
        this->date_naissance = date_naissance;
    }
}

int CL_map_TBCLIENT::getNumClient()
{
    return this->numero_client;
}

String^ CL_map_TBCLIENT::getPrenomCLient()
{
    return this->prenom_client;
}

String^ CL_map_TBCLIENT::getNomCLient()
{
    return this->nom_client;
}

String^ CL_map_TBCLIENT::getAdresseFact()
{
    return this->adresse_facturation;
}

String^ CL_map_TBCLIENT::getAdresseLivr()
{
    return this->adresse_livraison;
}

String^ CL_map_TBCLIENT::getDatePremAchat()
{
    return this->date_premier_achat;
}

String^ CL_map_TBCLIENT::getDateNaiss()
{
    return this->date_naissance;
}
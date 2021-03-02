#include "CL_map_TBPERSONNEL.h"

using namespace NS_Composants;

CL_map_TBPERSONNEL::CL_map_TBPERSONNEL()
{
    this->numero_personnel = -1;
    this->nom_personnel = "RIEN";
    this->prenom_personnel = "RIEN";
    this->addresse = "RIEN";
    this->dateEmbauche = "RIEN";
    this->superieur_hierarchique = "RIEN";
}

String^ CL_map_TBPERSONNEL::SELECT()
{
    return "SELECT numero_personnel, nom_personnel, prenom_personnel, addresse, dateEmbauche, superieur_hierarchique " +
        "FROM TB_PERSONNEL;";
}

String^ CL_map_TBPERSONNEL::INSERT()
{
    return "INSERT INTO TB_PERSONNEL " +
        "(nom_personnel, prenom_personnel, addresse, dateEmbauche, superieur_hierarchique) " +
        "VALUES('" + this->getNomPersonnel() + "','" + this->getPrenomPersonnel() + "','" + this->getAdresse() + "','" + this->getDateEmbauche() + "','" + this->getSupHier() + "');SELECT @@IDENTITY;";
}

String^ CL_map_TBPERSONNEL::UPDATE()
{
    return "UPDATE TB_PERSONNEL " +
        "SET nom_personnel = '" + this->getNomPersonnel() + "', prenom_personnel = '" + this->getPrenomPersonnel() + "'addresse = '" + this->getAdresse() + "'dateEmbauche = '" + this->getDateEmbauche() + "'superieur_hierarchique = '" + this->getSupHier() + "' " +
        "WHERE(numero_personnel = " + this->getNumPersonnel() + ");";
}

String^ CL_map_TBPERSONNEL::DELETE()
{
    return "DELETE FROM TB_PERSONNEL " +
        "WHERE(numero_personnel = " + this->getNumPersonnel() + ");";
}

void CL_map_TBPERSONNEL::setNumPersonnel(int numero_personnel)
{
    if (numero_personnel > 0)
    {
        this->numero_personnel = numero_personnel;
    }
}

void CL_map_TBPERSONNEL::setPrenomPersonnel(String^ prenom_personnel)
{
    if (prenom_personnel != "")
    {
        this->prenom_personnel = prenom_personnel;
    }
}

void CL_map_TBPERSONNEL::setNomPersonnel(String^ nom_personnel)
{
    if (nom_personnel != "")
    {
        this->nom_personnel = nom_personnel;
    }
}

void CL_map_TBPERSONNEL::setAdresse(String^ adresse)
{
    if (adresse != "")
    {
        this->addresse = adresse;
    }
}

void CL_map_TBPERSONNEL::setDateEmbauche(String^ date_dateEmbauche)
{
    if (dateEmbauche != "")
    {
        this->dateEmbauche = dateEmbauche;
    }
}

void CL_map_TBPERSONNEL::setSupHier(String^ superieur_hierarchique)
{
    if (superieur_hierarchique != "")
    {
        this->superieur_hierarchique = superieur_hierarchique;
    }
}

int CL_map_TBPERSONNEL::getNumPersonnel()
{
    this->numero_personnel;
}

String^ CL_map_TBPERSONNEL::getPrenomPersonnel()
{
    this->prenom_personnel;
}

String^ CL_map_TBPERSONNEL::getNomPersonnel()
{
    this->nom_personnel;
}

String^ CL_map_TBPERSONNEL::getAdresse()
{
    this->addresse;
}

String^ CL_map_TBPERSONNEL::getDateEmbauche()
{
    this->dateEmbauche = dateEmbauche;
}

String^ CL_map_TBPERSONNEL::getSupHier()
{
    this->superieur_hierarchique;
}

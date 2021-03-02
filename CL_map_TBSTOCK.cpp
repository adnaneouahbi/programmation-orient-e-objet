#include "CL_map_TBSTOCK.h"

using namespace NS_Composants;

CL_map_TBSTOCK::CL_map_TBSTOCK()
{
    this->reference_article = -1;
    this->nom_article = "RIEN";
    this->qte_article = "RIEN";
}

String^ CL_map_TBSTOCK::SELECT()
{
    return "SELECT reference_article, nom_article, qte_article " +
        "FROM TB_STOCK;";
}

String^ CL_map_TBSTOCK::INSERT()
{
    return "INSERT INTO TB_STOCK " +
        "(nom_article, qte_article) " +
        "VALUES('" + this->getNomArtcl() + "', '" + this->getQte() + "');SELECT @@IDENTITY;";
}

String^ CL_map_TBSTOCK::UPDATE()
{
    return "UPDATE TB_STOCK " +
        "SET nom_article = '" + this->getNomArtcl() + "', qte_article = '" + this->getQte() + "' " +
        "WHERE(reference_article = " + this->getRef() + ");";
}

String^ CL_map_TBSTOCK::DELETE()
{
    return "DELETE FROM TB_STOCK " +
        "WHERE(reference_article = " + this->getRef() + ");";
}

void CL_map_TBSTOCK::setRef(int reference_article)
{
    if (reference_article > 0)
    {
        this->reference_article = reference_article;
    }
}

void CL_map_TBSTOCK::setNomArtcl(String^ nom_article)
{
    if (nom_article != "")
    {
        this->nom_article = nom_article;
    }
}

void CL_map_TBSTOCK::setQte(String^ qte_article)
{
    if (qte_article != "")
    {
        this->qte_article = qte_article;
    }
}



int CL_map_TBSTOCK::getRef()
{
    return this->reference_article;
}

String^ CL_map_TBSTOCK::getNomArtcl()
{
    return this->nom_article;
}

String^ CL_map_TBSTOCK::getQte()
{
    this->qte_article = qte_article;
}

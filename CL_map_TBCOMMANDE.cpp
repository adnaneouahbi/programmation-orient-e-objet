#include "CL_map_TBCOMMANDE.h"


using namespace NS_Composants;

CL_map_TBCOMMANDE::CL_map_TBCOMMANDE()
{
    this->ref = -1;
    this->date_livraison = "RIEN";
    this->date_emission = "RIEN";
    this->date_paiement = "RIEN";
    this->moyen_paiement = "RIEN";
    this->date_soldement = "RIEN";
}

String^ CL_map_TBCOMMANDE::SELECT()
{
    return "SELECT ref, date_livraison, date_emission, date_paiement, moyen_paiement, date_soldement " +
        "FROM TB_COMMANDE;";
}

String^ CL_map_TBCOMMANDE::INSERT()
{
    return "INSERT INTO TB_COMMANDE " +
        "(date_livraison, date_emission, date_paiement, moyen_paiement, date_soldement) " +
        "VALUES('" + this->getDateLivraison() + "','" + this->getDateEmiss() + "','" + this->getDatePaiement() + "','" + this->getMoyenPaiement() + "','" + this->getDateSoldement() + "');SELECT @@IDENTITY;";
}

String^ CL_map_TBCOMMANDE::UPDATE()
{
    return "UPDATE TB_COMMANDE " +
        "SET date_livraison = '" + this->getDateLivraison() + "', date_emission = '" + this->getDateEmiss() + "'date_paiement = '" + this->getDatePaiement() + "'moyen_paiement = '" + this->getMoyenPaiement() + "'date_soldement = '" + this->getDateSoldement() + "' " +
        "WHERE(ref = " + this->getRef() + ");";
}

String^ CL_map_TBCOMMANDE::DELETE()
{
    return "DELETE FROM TB_COMMANDE " +
        "WHERE(ref = " + this->getRef() + ");";
}

void CL_map_TBCOMMANDE::setRef(int ref)
{
    if (ref > 0)
    {
        this->ref = ref;
    }
}

void CL_map_TBCOMMANDE::setDateEmiss(String^ date_emission)
{
    if (date_emission != "")
    {
        this->date_emission = date_emission;
    }
}

void CL_map_TBCOMMANDE::setDateLivraison(String^ date_livraison)
{
    if (date_livraison != "")
    {
        this->date_livraison = date_livraison;
    }
}

void CL_map_TBCOMMANDE::setDatePaiement(String^ date_paiement)
{
    if (date_paiement != "")
    {
        this->date_paiement = date_paiement;
    }
}

void CL_map_TBCOMMANDE::setMoyenPaiement(String^ moyen_paiement)
{
    if (moyen_paiement != "")
    {
        this->moyen_paiement = moyen_paiement;
    }
}

void CL_map_TBCOMMANDE::setDateSoldement(String^ date_soldement)
{
    if (date_soldement != "")
    {
        this->date_soldement = date_soldement;
    }
}




int CL_map_TBCOMMANDE::getRef()
{
    return this->ref;
}

String^ CL_map_TBCOMMANDE::getDateEmiss()
{
    return this->date_emission;
}

String^ CL_map_TBCOMMANDE::getDateLivraison()
{
    return this->date_livraison;
}

String^ CL_map_TBCOMMANDE::getDatePaiement()
{
    return this->date_paiement;
}

String^ CL_map_TBCOMMANDE::getMoyenPaiement()
{
    return this->moyen_paiement;
}

String^ CL_map_TBCOMMANDE::getDateSoldement()
{
    return this->date_soldement = date_soldement;
}

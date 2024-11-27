#include "AgentGestionnaire.h"
#include<iostream>
AgentGestionnaire::AgentGestionnaire(int ventes, double nbr_heure, string Nom, string Prenom) :Employee(nbr_heure, Nom, Prenom), Agent(ventes, nbr_heure, Nom, Prenom), gestionnaire(nbr_heure, Nom, Prenom)
{
}
/*
void AgentGestionnaire::Calculer_salaire()
{
	Agent::Calculer_salaire();
	gestionnaire::Calculer_salaire();
	this->salaire = Agent::salaire + gestionnaire::salaire;
}*/
void AgentGestionnaire::Calculer_salaire()
{
    // Variables locales pour stocker les salaires calculés
    double salaire_agent = 0;
    double salaire_gestionnaire = 0;

    // Appel explicite des méthodes des classes parent
    Agent::Calculer_salaire();
    salaire_agent = Agent::salaire;

    gestionnaire::Calculer_salaire();
    salaire_gestionnaire = gestionnaire::salaire;

    // Combinaison des deux salaires
    this->salaire = salaire_agent + salaire_gestionnaire;

    // Affichage du salaire total
    cout << "Salaire total (AgentGestionnaire): " << this->salaire << endl;
}

void AgentGestionnaire::afficher() const
{
    cout << "\nLes informations de l'AgentGestionnaire :" << endl;
	cout << "\nLe salaire :" << this->salaire << endl;
	cout << endl;
}

AgentGestionnaire::~AgentGestionnaire()
{
}

#include "Agent.h"
#include <iostream>
using namespace std;

// Initialisation de la commission statique
double Agent::commission = 50.0;

// Constructeur
Agent::Agent(int ventes, double nbr_heure, string Nom, string Prenom)
    : Employee(nbr_heure, Nom, Prenom), ventes(ventes), indemnite(0) // Initialisation de indemnite � 0
{
}

// M�thode pour afficher les informations de l'agent
void Agent::afficher() const
{
    cout << "\nLes informations de l'agent :" << endl;
    cout << "Formule de salaire : salaire de base + indemnit�" << endl;
    cout << "Commission par vente : " << Agent::commission << endl;
    cout << "Nombre de ventes : " << this->ventes << endl;
    cout << "Indemnit� : " << this->indemnite << endl;
    Salarie::afficher(); // Appel de la m�thode afficher() de la classe Employee
    cout << endl;
}

// Calcul de l'indemnit� de l'agent
double Agent::calculer_indemnite()
{
    indemnite = commission * ventes; // Calcul de l'indemnit�
    return indemnite;
}

// Calcul du salaire total de l'agent
void Agent::Calculer_salaire()
{
    salaire = Taux_horaire * nbr_heure;
    salaire += calculer_indemnite();
    cout << "\nSalaire total de l'agent : " << salaire << endl;
}

// Destructeur
Agent::~Agent()
{
}

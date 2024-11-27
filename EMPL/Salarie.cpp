#include "Salarie.h"
#include<iostream>
double Salarie::Taux_horaire = 100.00;

Salarie::Salarie(double nbr_heure, string Nom, string Prenom)
    : salaire(0), nbr_heure(nbr_heure), Nom(Nom), Prenom(Prenom)
{
}

void Salarie::afficher() const
{
	cout << "Le Taux Horaire est :" << Salarie::Taux_horaire << endl;
	cout << "Le nom :" << this->Nom << endl;
	cout << "Le prenom :" << this->Prenom << endl;
	cout << "Le nombre d'heure travaille est  :" << this->nbr_heure << endl;
	cout << "Le salaire est :" << this->salaire << endl;
}

Salarie::~Salarie()  // Implémentation du destructeur
{
}

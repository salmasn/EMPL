#include "Employee.h"
#include<iostream>



Employee::Employee(double nbr_heure, string Nom, string Prenom) :Salarie(nbr_heure,Nom,Prenom)
{

}

double Employee::operator+(const double& d) const
{
	return this->salaire+d;
}


void Employee::Calculer_salaire()
{
	this->salaire = this->Taux_horaire * this->nbr_heure;
	cout << endl;
	cout <<"Salaire Employee:" << this->salaire << endl;
	cout << endl;
}



Employee::~Employee()
{
}

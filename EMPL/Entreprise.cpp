#include "Entreprise.h"
#include<iostream>

int Entreprise::compteur = 0;

void Entreprise::ajouterEmployee(Employee* E)
{
	if (this->capacity == this->nbEmp)
	{
		this->resize();
	}
	this->emp[this->nbEmp++] = E;
}

void Entreprise::calculer_TotaleSalaire()
{
	double totale = 0.0;
	for (int i = 0; i < this->nbEmp; i++)
	{
		this->totalsalaire = this->emp[i]->operator+(this->totalsalaire);
	}
	//this->totalsalaire = totale;
}

Entreprise::Entreprise(string Nom_Entreprise, string adresse):Id_Entreprise(++compteur), Nom_Entreprise(Nom_Entreprise), adresse(adresse), capacity(5), nbEmp(0), totalsalaire(0.0)
{
	this->emp = new Employee * [this->capacity];
}

void Entreprise::afficherall() const
{
	cout << "Lister des les info des employee d'entreprise :" <<endl;
	for (int i = 0; i < nbEmp; i++)
	{
		cout << "L'employee  :" << i << std::endl;
		this->emp[i]->afficher();
		cout << endl;
	}
	cout << "Salaire total de l'entreprise : " << this->totalsalaire <<endl;

}

void Entreprise::resize()
{
	this->capacity *= 2;
	Employee** newtab = new Employee * [this->capacity];
	for (int i = 0; i < this->nbEmp; i++)
	{
		newtab[i] = this->emp[i];
	}
	for (int i = this->nbEmp; i < this->capacity; i++)
	{
		newtab[i] = nullptr;
	}
	delete[] this->emp;
	this->emp = nullptr;
	this->emp = newtab;
}



Entreprise::~Entreprise()
{
	delete[] this->emp;
}

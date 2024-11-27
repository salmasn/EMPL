#pragma once
#include <string>
using namespace std;

class Salarie
{
protected:
    static double Taux_horaire;
    double nbr_heure;
    double salaire;
    string Nom;
    string Prenom;

public:
    Salarie(double, string, string);
    virtual void afficher() const;
    virtual void Calculer_salaire() = 0;
    virtual ~Salarie();
};

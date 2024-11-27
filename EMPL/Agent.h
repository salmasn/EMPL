#pragma once
#include "Employee.h"

class Agent : public virtual Employee
{
protected:
    static double commission; // Commission par vente
    double indemnite;         // Indemnité de l'agent
    int ventes;               // Nombre de ventes

public:
    Agent(int ventes, double nbr_heure, string Nom, string Prenom);
    void afficher() const override;
    double calculer_indemnite();
    void Calculer_salaire() override;
    ~Agent();
};

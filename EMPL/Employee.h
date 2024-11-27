#pragma once
#include <string>
#include "Salarie.h"

class Employee : public Salarie
{
public:
    Employee(double, string, string);
    double operator+(const double&) const;
    void Calculer_salaire() override;
    ~Employee();
};

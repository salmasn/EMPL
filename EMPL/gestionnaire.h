#pragma once
#include "Employee.h"
class gestionnaire:public virtual Employee
{
private:
	static double salaireheb;
public:
	gestionnaire(double, string, string);
	void afficher() const override;
	void Calculer_salaire() override;
	~gestionnaire();
};


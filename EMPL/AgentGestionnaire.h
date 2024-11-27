#pragma once
#include "Agent.h"
#include "gestionnaire.h"

class AgentGestionnaire:public Agent, public gestionnaire
{
public: 
	AgentGestionnaire(int, double, string, string);
	void Calculer_salaire() override;
	void afficher() const override;
	~AgentGestionnaire();
};


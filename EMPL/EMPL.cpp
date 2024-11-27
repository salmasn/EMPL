#include <iostream>
#include "Employee.h"
#include "Agent.h"
#include "gestionnaire.h"
#include "AgentGestionnaire.h"
/*
int main()
{
    AgentGestionnaire* G1 = new AgentGestionnaire(10, 5, "AAAAA", "aa");
    G1->Agent::afficher();
    G1->Calculer_salaire();
    G1->Agent::afficher();
    delete G1;
    /*
    Employee* E1 = new Employee(5, "souneini", "salma");
    E1->afficher();
    cout << endl;
    cout << endl;


    Agent* A1 = new Agent(10, 5, "AAAAA", "aa");
    A1->afficher();
    delete A1;
    cout << endl;
    cout << endl;

    gestionnaire* G1= new gestionnaire(5, "", "salma");
    G1->afficher();
    delete G1;


    //polymorphisme at run time
    Employee* E2 = new Agent(20,10, "SSS", "salma");
    E2->afficher();
    cout << endl;
    cout << endl;
    */


    /*
    Employee::initializeTaux(20);
    Employee* E2 = new Employee(5, "nn", "salma");
    E2->afficher();
    delete E2;
    */

    //E1->afficher();
    //Agent::;

        /*
    Agent::initializeTaux(20);
    Agent* A1 = new Agent(10, 5, "hehe", "h");
    A1->afficher();
    delete A1;
    cout << endl;
    cout << endl;
    */
/*
    //Agent::initializeTaux(20);
}
*/

#include <iostream>
#include "Entreprise.h"
#include "Employee.h"

int main()
{
    Entreprise entreprise("NomEntreprise", "AdresseEntreprise");

    // Ajout d'employés
    Employee* E1 = new Employee(40, "salma", "sn");
    E1->Calculer_salaire();
    entreprise.ajouterEmployee(E1);

    /*Employee* E2 = new Employee(35, "meriem", "ss");
    E2->Calculer_salaire();
    entreprise.ajouterEmployee(E2);*/

    Agent* A1 = new Agent(10, 35, "amine", "qq"); // 10 ventes, 35 heures
    A1->Calculer_salaire();
    A1->afficher();
    entreprise.ajouterEmployee(A1);

    gestionnaire* G1 = new gestionnaire(40, "Dupont", "Jean");
    G1->Calculer_salaire();
    G1->afficher();
    entreprise.ajouterEmployee(G1);

    AgentGestionnaire* AG1 = new AgentGestionnaire(5, 30, "manal", "ll"); // 5 ventes, 30 heures
    AG1->Calculer_salaire();
    AG1->afficher();
    entreprise.ajouterEmployee(AG1);


    // Calcul du salaire total
    entreprise.calculer_TotaleSalaire();

    // Affichage des informations de l'entreprise et du salaire total
    entreprise.afficherall();



    delete E1;
    //delete E2;
    delete A1;
    delete G1;
    delete AG1;
    return 0;
}

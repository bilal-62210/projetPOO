#include "class.hpp"
#include <iostream>
#include <cmath>

using namespace std;


void A::m(void)
{
    
    cout << "Entrer le numero de l'ouvrier: ";
    cin >> this->x;

}

void B::m(void)
{
    cout << "Entrer le numero de l'ouvrier: ";
    cin >> this->x;
    cout << "Entrée le numero de specialité  : ";
    cin >> this->z;
}

typedef struct Z
{

string valeur;
Z* suivant;
}Z;

Z* liste = NULL;

void stockage::ajouter(void)
{

Z*element= new Z;

string x;
cout << "Entrez votre nom d'objet  : \n";
cin >> x ;

element->valeur = x;

element->suivant = liste;

liste = element;

}
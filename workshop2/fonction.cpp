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

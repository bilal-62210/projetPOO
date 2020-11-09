#include "wswp2.h"
#include <cmath>
#include <iostream>
#include <sstream>

using namespace std;

Clcalcul::Clcalcul(void)
{
    this->ini(0);
}

Clcalcul::Clcalcul(int n)
{
    this->ini(n);
}

void Clcalcul::ini(int n)
{
    this->setN(n);
}


void Clcalcul::carre(void)
{
    this->b = pow(this->getN(),2);
    cout << "Resultat :" << this->b << endl;
}

int Clcalcul::getN(void)
{
    return this->n;
}

void Clcalcul::setN(int n)
{
    this->n = n;
}

int Clcalcul::getB(void)
{
    return this->b;
}


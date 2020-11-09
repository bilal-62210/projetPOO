#include "wswp2.h"
#include "wsp2.cpp"
#include <cmath>
#include <iostream>
#include <sstream>


int main(void)
{
int pause;
Clcalcul o1(9);
Clcalcul o2(2);
Clcalcul* p1;
Clcalcul* p2;
p1 = new Clcalcul(3);
p2 = new Clcalcul(4);
o1.carre(); o2.carre();
cout << o1.getN() << endl;
cout << o2.getN() << endl;
p1->carre(); p2->carre();
cout << p1->getN() << endl;
cout << p2->getN() << endl;
cin >> pause;
}
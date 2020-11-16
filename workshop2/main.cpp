#include "class.hpp"
#include "fonctionm.cpp"
#include <iostream>

using namespace std;

int main()
{
     A *o1;
     B *o2;
     o1 = new A();
    o2 = new B();
    o1->m();
    o2->m();
    o1 = o2;
    o1->m();

    delete o1;
    delete o2;
}
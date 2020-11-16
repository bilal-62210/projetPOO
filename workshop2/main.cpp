#include "class.hpp"
#include "fonction.cpp"
#include <iostream>

using namespace std;

int main()
{
     A *o1 = new A();
     B *o2 = new B();

    o1->m();
    o2->m();
    
    delete o1;
    delete o2;
    

}
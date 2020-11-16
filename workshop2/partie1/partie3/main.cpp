#include <iostream>

using namespace std;

int main()
{
    int i;
    int *tab;
    tab = new int[3] {5,7,5};

    for (i=0; i<3; i++)
    {
        cout<<tab[i]<<endl;
    }

}
#pragma once
#include <iostream>
#include <string>

using namespace std;

class cesar
{

    public:
        void crypt(void);
};



void cesar::crypt(void)
{
    string message;
    int k;
    int i=0;
    char *fichier;
    FILE *crypt = NULL;
    cout << "Donner le message a crypter >";
    getline(cin,message);
    cout << " Donnez la cle numerique de cryptage/decryptage >";
    cin >>k;
    if (k<0)
    k=(k%26)+26;
 
    while (message[i] !='\0')
    {
 
    if (message[i] >='A' && message[i] <='Z' )
    message[i]=(message[i] - 'A' +k)%26+'A';
    if (message[i] >='a' && message[i] <='z' )
    message[i]=(message[i] - 'a' +k)%26+'a';
    i++;
    }

}



#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    
    
    cesar c1;
    c1.crypt();

    string const nomFichier("TQT.txt");
    ofstream monFlux(nomFichier.c_str());

    if(monFlux)    
    {
        monFlux << "Message crypté:" << endl;
        monFlux<<"bonjour"<< endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }
    return 0;
}
#include <iostream>    //utile pour le cout
#include "Compteur.h"  //on inclut le fichier header
using namespace std;   //utile pour le cout

int main()
{
    Compteur compter,compter2;  //on cree une instance qui va appeler les differentes méthodes
    compter.clic();
    compter.afficheValeur();
    compter.raz();
    compter.clic();
    compter.clic();
    compter.afficheValeur();
    compter2.clicsMultiples(5);
    int compt=compter2.getValeur();
    cout<<compt<<endl;
    compter2.raz();
    compter2.clicsMultiples(compter.getValeur());

    return 0;
}

#include <iostream>   //utile pour le cout
#include "Compteur.h" //on inclut le fichier header
using namespace std;  //utile pour le cout

    Compteur::Compteur()  //Le constructeur pour initialiser les variables
    {
        val=0;  //on initialise val a
    }

    void Compteur::clic(){  //méthode clic qui incremente la variable val
        val++;
    }
    void Compteur::raz(){  //méthiode raz qui va remettre val a 0
        val=0;
    }
    void Compteur::afficheValeur(){
        cout << "la valeur est : " << val <<endl; //on affiche la valeur ATTENTION : "endl" ce n'est pas un "un" mais une lettre
    }

    void Compteur::clicsMultiples(int a){
        val+=a;    //c'est la meme chose que val=val+a;
    }
    int Compteur::getValeur(){
        return val;
    }

    void Compteur::setValeur(int x)
    {
        val=x;
    }

    //ctor


Compteur::~Compteur() //destructeur
{
    //dtor
}

#ifndef COMPTEUR_H
#define COMPTEUR_H


class Compteur         //on cree une classe dans laquelle les méthodes,les variables,etc... sont déclarées
{
    public:
        Compteur();
        virtual ~Compteur();
        void clic();
        void raz();
        void afficheValeur();
        void clicsMultiples(int);
        int getValeur();
        void setValeur(int);

    protected:

    private:
        int val;

};

#endif // COMPTEUR_H

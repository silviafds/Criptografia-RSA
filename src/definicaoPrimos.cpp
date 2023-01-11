#include <iostream>
#include <math.h>
#include "definicaoPrimos.hpp"

using namespace std;

class Primo {
    private:
        int primo;

    public:
        int getPrimo();
        void setPrimo(int);
        
};

int Primo::getPrimo() {
    return primo;
}

void Primo::setPrimo(int p) {
    primo = p;
}

/*
Primo::Primo(int a) {
    primo = a;
}

void calculo_primos() {
    definirBase();
}*/


void definirBase() {
    /*Primo p = new Primo();
    int x = pow(10, 5);
    p.
 
    Primo primoBase = x;*/
    Primo primos;
    int x = pow(10, 5);
    primos.setPrimo(x);
    cout << primos.getPrimo() << endl;


}
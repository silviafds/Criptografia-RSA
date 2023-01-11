#include <iostream>
#include <math.h>
#include "definicaoPrimos.h"

using namespace std;

int Primos::getPrimo() {
    return primo;
}

void Primos::setPrimo(int p) {
    primo = p;
}

/*
Primo::Primo(int a) {
    primo = a;
}*/

void calculo_primos() {
    definirBase();
    mostra();
}


void definirBase() {
    Primos primos;
    int x = pow(10, 5);
    primos.setPrimo(x);
    cout << primos.getPrimo() << endl;
}

void mostra() {
    Primos p;
    cout << "primo base:" << p.getPrimo() << endl;
}
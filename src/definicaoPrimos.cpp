#include <iostream>
#include <math.h>
#include <vector>
#include "definicaoPrimos.h"

using namespace std;

int Primos::getPrimo() {
    return primo;
}

void Primos::setPrimo(int p) {
    primo = p;
}

vector<int> Primos::getnumerosPrimos() {
    return numerosPrimos;
}

void Primos::setnumerosPrimos(int numero) {
    numerosPrimos.push_back(numero);
}

void calculo_primos() {
    definirBase();
    verificaPrimo();
    mostra();
}

void definirBase() {
    Primos primos;
    int x = pow(10, 5);
    primos.setPrimo(x);
    cout << primos.getPrimo() << endl;
}

void verificaPrimo() {
    Primos p;
    bool booleana;
    for(int i=2; i<=100; i++) {
        booleana = validaPrimo(i);
        if(booleana == true) {
            p.setnumerosPrimos(i);
        }   
    }
}

bool validaPrimo(int numero) {
    Primos p;
    
    bool primo = true;
    for(int i=2; i<numero; i++) {
        if(numero % i == 0) {
            primo = false;        
        }
    }
    return primo;
}

void mostra() {
    Primos p;
    for(int i=0; i<20; i++) {
        cout << "primos: " << p.getnumerosPrimos()[i] << endl;
    }

}
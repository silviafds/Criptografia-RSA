#ifndef DEFINICAOPRIMOS_H
#define DEFINICAOPRIMOS_H
#include <iostream>
#include <vector>
using namespace std;

class Primos {
    private:
        int primo;
        vector<int> numerosPrimos;
    public:
        int getPrimo();
        void setPrimo(int);

        vector<int> getnumerosPrimos();
        void setnumerosPrimos(int);
        
};

void calculo_primos();

void definirBase();

void verificaPrimo();

bool validaPrimo(int numero);

void mostra();

#endif
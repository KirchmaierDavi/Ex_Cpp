#ifndef ARVBINBUSCA_H
#define ARVBINBUSCA_H
#include <iostream>
#include <cstdlib>
#include <math.h>
#include "NoArv.h"

using namespace std;

class ArvBinBusca
{
public:
    ArvBinBusca();
    ~ArvBinBusca();
    void addValores1();
    void addValores2();
    void imprime();

    // Questao 1  -------------------------------------------------------------
    void nosImpares02Filhos(int *nImp, int *n02F);


    // Questao 2  -------------------------------------------------------------
    void insNaoRec(int val);


    // Questao 3  -------------------------------------------------------------
    int* vetIntervalo(int a, int b, int k);
private:
    NoArv *raiz;

    void auxImprime(NoArv *p);
    void cria(int c, ArvBinBusca *sae, ArvBinBusca *sad);
};

#endif //ARVBINBUSCA_H

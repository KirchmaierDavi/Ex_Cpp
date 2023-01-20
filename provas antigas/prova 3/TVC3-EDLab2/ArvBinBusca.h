#ifndef TVC3_ARVBINBUSCA_H
#define TVC3_ARVBINBUSCA_H

#include <iostream>
#include <cstdlib>
#include "No.h"

using namespace std;

class ArvBinBusca
{
public:
    ArvBinBusca();
    ~ArvBinBusca();
    void imprime();
    void insere(int x);
    int consultaRaiz();
    bool vazia();
    bool busca(int x);
    int numNos();

    // Questao 1  ------------------------------------------------------------
    int contaIntervalo(int a, int b);
    void auxContaIntervalo(int a, int b, int *n, No *p);

    // Questao 2 --------------------------------------------------------------
    No* buscaPai(int x);
    No* auxBuscaPai(int x, No* p);
    // Questao 3 --------------------------------------------------------------
    int * criaVetNivel(int k);
    void AUXcriaVetNivel(No *p,int *vet, int atual, int k, int *pos);

private:

    No * raiz;

    // funcoes auxiliares
    No * auxInsere(No * p, int x);
    bool auxBusca(No * p, int x);
    void auxImprime(No * p, int nivel);
    int auxNumNos(No * p);

};


#endif //TVC3_ARVBINBUSCA_H

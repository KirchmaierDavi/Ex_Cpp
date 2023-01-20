#include <iostream>
#include <cmath>
#include "ArvBinBusca.h"

// ----------------------------------------------------------------------------
//Q1
int ArvBinBusca::contaIntervalo(int a, int b)
{
    int n = 0;
    if(a < b){
        auxContaIntervalo(a, b, &n, raiz);
    }else{
        auxContaIntervalo(b, a, &n, raiz);
    }

    return n;
}

void ArvBinBusca::auxContaIntervalo(int a, int b, int *n, No *p){
    if(p != NULL){
        if(p->getInfo() >= a && p->getInfo() <= b){
            *n = *n + 1;
        }
        auxContaIntervalo(a, b, n, p->getDir());
        auxContaIntervalo(a, b, n, p->getEsq());
    }else{
        cout<<"lista vazia"<< endl;
    }
}
//-Q1
// ----------------------------------------------------------------------------


// ----------------------------------------------------------------------------
//Q2
No * ArvBinBusca::buscaPai(int x)
{
    No* pai = auxBuscaPai(x, raiz);
    return pai;
}

No * ArvBinBusca::auxBuscaPai(int x, No* p){
    if(p == NULL){
        return NULL;
    }else{
        if(p->getDir()->getInfo() == x){
            return p;
        }else if(p->getEsq()->getInfo() == x){
            return p;
        }

        if(p->getInfo() > x);
            return auxBuscaPai(x, p->getEsq());
        return auxBuscaPai(x, p->getDir());
    }
}
//-Q2
// ----------------------------------------------------------------------------

// ----------------------------------------------------------------------------
//Q3
int * ArvBinBusca::criaVetNivel(int k)
{
    int tam = pow(2,k);
    int *vet = new int [tam];
    int pos = 0;

    AUXcriaVetNivel(raiz,vet, 0, k, &pos);


    return vet;
}

void ArvBinBusca::AUXcriaVetNivel(No *p,int *vet, int atual, int k, int *pos)
{
    if(p!= NULL)
    {
        if(atual == k)
            vet[(*pos)++] = p->getInfo();

        AUXcriaVetNivel(p->getEsq(), vet, atual+1, k, pos);
        AUXcriaVetNivel(p->getDir(), vet, atual+1, k, pos);
    }
}
//-Q3
// ----------------------------------------------------------------------------


// Restante da classe da ABB --------------------------------------------------

 ArvBinBusca::ArvBinBusca()
 {
    raiz = NULL;
 }

 ArvBinBusca::~ArvBinBusca()
 {

 }

int ArvBinBusca::consultaRaiz()
{
    if(raiz != NULL)
        return raiz->getInfo();
    else
    {
        cout << "Erro em consultaRaiz(): arvore vazia" << endl;
        exit(1);
    }
}

bool ArvBinBusca::vazia()
{
    return raiz == NULL;
}

void ArvBinBusca::insere(int x)
{
    No * p = auxInsere(raiz, x);
    if (raiz == NULL)
        raiz = p;
}

No * ArvBinBusca::auxInsere(No * p, int x)
{
    if(p == NULL)
    {
        p = new No();
        p->setInfo(x);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else if(x < p->getInfo())
        p->setEsq(auxInsere(p->getEsq(), x));
    else
        p->setDir(auxInsere(p->getDir(), x));

    return p;
}

bool ArvBinBusca::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBinBusca::auxBusca(No * p, int x)
{
    if(p == NULL)
        return false;
    else if (p->getInfo() == x)
        return true;
    else if (x < p->getInfo() )
        return auxBusca(p->getEsq(), x);
    else
        return auxBusca(p->getDir(), x);
}

void ArvBinBusca::imprime()
{
    auxImprime(raiz, 0);
}

void ArvBinBusca::auxImprime(No * p, int nivel)
{
    if (p != NULL) {
        cout << "(" << nivel << ")";
        for (int i = 1; i <= nivel; i++)
            cout << "--";
        cout << p->getInfo() << endl;
        auxImprime(p->getEsq(), nivel + 1);
        auxImprime(p->getDir(), nivel + 1);
    }
}

int ArvBinBusca::numNos()
{
    return auxNumNos(raiz);
}

int ArvBinBusca::auxNumNos(No *p)
{
	if (p == NULL)
		return 0;
	else
		return 1 + auxNumNos(p->getEsq()) + auxNumNos(p->getDir());
}

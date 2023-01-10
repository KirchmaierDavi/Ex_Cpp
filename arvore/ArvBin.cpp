#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include "ArvBin.h"

using namespace std;

ArvBin::ArvBin()
{
    raiz = NULL;
}

int ArvBin::getRaiz()
{
    if (raiz != NULL)
        return raiz->getInfo();
    else
    {
        cout << "�rvore vazia!" << endl;
        exit(1);
    }
}

void ArvBin::cria(int x, ArvBin *sae, ArvBin *sad)
{
    NoArv *p = new NoArv();
    p->setInfo(x);
    p->setEsq(sae->raiz);
    p->setDir(sad->raiz);
    raiz = p;
}

void ArvBin::anulaRaiz()
{
    raiz = NULL;
}

void ArvBin::montaArvore()
{
    if(!vazia())
        cout << "Arvore jah montada. So eh possivel a insercao de nos." << endl;
    else
    {
        cout << "Montagem da arvore em pre-ordem:" << endl;
        raiz = auxMontaArvore();
    }
}

NoArv* ArvBin::auxMontaArvore()
{
    string linha;
    cout << "Valor: ";
    cin >> linha;
    if(linha != "NULL" && linha != "null")
    {
        istringstream ent(linha);
        int valor;
        ent >> valor;
        NoArv *p = new NoArv();
        p->setInfo(valor);
        cout << "Esquerda" << endl;
        p->setEsq(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        cout << "Direita" << endl;
        p->setDir(auxMontaArvore());
        cout << "Volta no noh " << p->getInfo() << endl;
        return p;
    }
    else
        return NULL;
}

void ArvBin::insere(int x)
{
    raiz = auxInsere(raiz, x);
}

NoArv* ArvBin::auxInsere(NoArv *p, int x)
{
    if(p == NULL)
    {
        p = new NoArv();
        p->setInfo(x);
        p->setEsq(NULL);
        p->setDir(NULL);
    }
    else
    {
        char direcao;
        cout << x << " a esquerda (e) ou direita (d) de " << p->getInfo() << ": ";
        cin >> direcao;
        if(direcao == 'e' || direcao == 'E')
            p->setEsq(auxInsere(p->getEsq(), x));
        else
            p->setDir(auxInsere(p->getDir(), x));
    }
    return p;
}

bool ArvBin::vazia()
{
    return (raiz == NULL);
}

bool ArvBin::busca(int x)
{
    return auxBusca(raiz, x);
}

bool ArvBin::auxBusca(NoArv *p, int x)
{
    if (p == NULL)
        return false;
    else if (p->getInfo() == x)
        return true;
    else if (auxBusca(p->getEsq(), x))
        return true;
    else
        return auxBusca(p->getDir(), x);
}

ArvBin::~ArvBin()
{
    raiz = libera(raiz);
}

NoArv* ArvBin::libera(NoArv *p)
{
    if (p != NULL)
    {
        p->setEsq(libera(p->getEsq()));
        p->setDir(libera(p->getDir()));
        delete p;
        p = NULL;
    }
    return NULL;
}

void ArvBin::preOrdem()
{
    cout << "Arvore Binaria em Pre-Ordem: ";
    auxPreOrdem(raiz);
}

void ArvBin::auxPreOrdem(NoArv *p)
{
    if (p != NULL)
    {
        cout << p->getInfo() << " ";
        auxPreOrdem(p->getEsq());
        auxPreOrdem(p->getDir());
    }
}

int ArvBin::contaNos(){
    return auxcontaNos(raiz);
}

int ArvBin::auxcontaNos(NoArv* p){
    if(p == NULL){
        return 0;
    }else{
        return 1 + (auxcontaNos(p->getEsq())) + (auxcontaNos(p->getDir()));
    }
}

int ArvBin::contaNosFolhas(){
    return auxcontaNosFolhas(raiz);
}

int ArvBin::auxcontaNosFolhas(NoArv *p){
    if(p == NULL){
        return 0;
    }else if(p->getDir() == NULL && p->getEsq() == NULL){
        return 1 + (auxcontaNosFolhas(p->getEsq())) + (auxcontaNosFolhas(p->getDir()));
    }else{
        return (auxcontaNosFolhas(p->getEsq())) + (auxcontaNosFolhas(p->getDir()));
    }
}

int ArvBin::altura(){
    return auxAltura(raiz);
}

int ArvBin::auxAltura(NoArv *p){
    if(p == NULL){
        return 0;
    }else{
        int esq = auxAltura(p->getEsq());
        int dir = auxAltura(p->getDir());
        if(esq > dir){
            return esq + 1;
        }
        return dir + 1;
    }
}

int ArvBin::contaImpar(){
    return auxContaImpar(raiz);
}

int ArvBin::auxContaImpar(NoArv *p){
    if(p == NULL){
        if(p->getInfo() % 2 == 0){
            return 0;
        }
        return 1;
    }else if(p->getInfo() % 2 == 0){
        return auxContaImpar(p->getEsq()) + auxContaImpar(p->getDir());
    }else{
        return 1 + auxContaImpar(p->getEsq()) + auxContaImpar(p->getDir());
    }
}

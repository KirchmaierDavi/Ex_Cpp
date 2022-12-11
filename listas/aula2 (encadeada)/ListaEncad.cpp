#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    cout << "Criando objeto ListaEncad" << endl;
    primeiro = NULL;
    ultimo = NULL;
    n = 0;
}

ListaEncad::~ListaEncad()
{
    cout << "Destruindo objeto ListaEncad" << endl;
    No *p = primeiro;
    while(p != NULL)
    {
        No *t = p->getProx();
        delete p;
        p = t;
    }
}

bool ListaEncad::busca(int val)
{
    No *p;
    for(p = primeiro; p != NULL; p = p->getProx())
        if(p->getInfo() == val)
            return true;
    return false;
}

int ListaEncad::get(int k)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
    {
        cout << "ERRO: Indice invalido!" << endl;
        exit(1);
    }
    else
        return p->getInfo();
}

void ListaEncad::set(int k, int val)
{
    No *p = primeiro;
    int i = 0;
    while(i < k && p != NULL)
    {
        i++;
        p = p->getProx();
    }
    if(p == NULL)
        cout << "ERRO: Indice invalido!" << endl;
    else
        p->setInfo(val);
}


void ListaEncad::insereInicio(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(primeiro);

    primeiro = p;

    n++;
    if(n == 1) ultimo = p;
}

void ListaEncad::insereFinal(int val)
{
    No* p = new No();
    p->setInfo(val);
    p->setProx(NULL);

    if(ultimo != NULL) ultimo->setProx(p);
    ultimo = p;

    n++;
    if(n == 1) primeiro = p;
}

void ListaEncad::removeInicio()
{
    No* p;
    if(primeiro != NULL)
    {
        p = primeiro;
        primeiro = p->getProx();
        delete p;

        n--;
        if(n == 0) ultimo = NULL;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::removeFinal()
{
    No* p;
    if(ultimo != NULL)
    {
        if(primeiro == ultimo)
        {
            primeiro = NULL;
            p = NULL;
        }
        else
        {
            p = primeiro;
            while(p->getProx() != ultimo)
                p = p->getProx();
            p->setProx(NULL);
        }
        delete ultimo;
        ultimo = p;
        n--;
    }
    else
        cout << "ERRO: lista vazia!" << endl;
}

void ListaEncad::imprime(){
    No* p;
    for(p = primeiro; p != NULL; p = p->getProx()){
        cout << p->getInfo() << " ";
    }
}

int ListaEncad::numNos(){
    return n;
}

int ListaEncad::buscaMaior(int val){
    No* p;
    int i = 0;
    for(p = primeiro; p != NULL; p = p->getProx()){
        if(p->getInfo() > val){
            return i;
        }
        i++;
    }
    return -1;
}

void ListaEncad::limpar(){
    No* p = ultimo;
    while(p != NULL){
        removeFinal();
        p = ultimo;
    } 
    cout<< endl <<"Lista limpa!";
}

float ListaEncad::calculaMedia(){
    float media = 0;
    No* p;
    for(p = primeiro; p != NULL; p = p->getProx()){
        media = media + (p->getInfo());
    }
    return media/n;
}

void ListaEncad::concatena(ListaEncad *l2){
    if(this->primeiro != NULL && l2->primeiro != NULL){
        this->ultimo->setProx(l2->primeiro);
        this->ultimo = l2->ultimo;
        this->n = this->n + l2->n;
        l2->primeiro = l2->ultimo = NULL;
        l2->n = 0;
    }else{
        cout<<"Listas vazias"<< endl;
    }
}

ListaEncad* ListaEncad::partir(int x){
    return this;
}
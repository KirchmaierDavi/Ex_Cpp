#include <iostream>
#include <cstdlib>
#include "ListaEncad.h"

using namespace std;

ListaEncad::ListaEncad()
{
    primeiro = NULL;
}

ListaEncad::~ListaEncad()
{
    // OMITIDO
}

void ListaEncad::insereInicio(int val)
{
    No *novo = new No();
    novo->setInfo(val);
    novo->setProx(primeiro);
    primeiro = novo;
}

void ListaEncad::imprime()
{
    cout << "[";
    for (No *p = primeiro; p != NULL; p = p->getProx())
    {
        cout << p->getInfo();
        if (p->getProx() != NULL)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// ----------------------------------------------------------------------------
// Q4

void ListaEncad::removeBloco(int a, int b)
{
    No *p = primeiro;
    No *ant = primeiro;
    if (p == NULL)
    {
        exit(1);
    }

    /*while (p != NULL)
    {
        if (p->getInfo() == a && p->getProx() != NULL)
        {
            while (p->getInfo() != b)
            {
                No *aux = p;
                p = p->getProx();
                
            }
        }
    }*/
    if (p->getProx() != NULL && p->getProx()->getInfo() == a){
        while (p->getInfo() != b){
            ant = p;
            p = p->getProx();
            ant->setProx(p->getProx());
            delete p;
            p = ant->getProx();
        }
        if(p->getInfo() == b){
            ant->setProx(p->getProx());
            delete p;
        }
    }
}
//-Q4
// ----------------------------------------------------------------------------

#include <iostream>
#include <cstdlib>
#include "ListaCont.h"

using namespace std;

ListaCont::ListaCont (int tam)
{
    max = tam;
    n = 0;
    vet = new int[max];
}

ListaCont::~ListaCont ()
{
    // OMITIDO
}

void ListaCont::insereFinal (int val)
{
    if (n == max)
    {
        cout << "ERRO: Vetor Cheio!" << endl;
        exit (1);
    }
    vet[n] = val;
    n = n + 1;
}

void ListaCont::imprime ()
{
    cout << "[";
    for (int i = 0; i < n; i++)
    {
        cout << vet[i];
        if (i + 1 < n)
        {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

// ----------------------------------------------------------------------------
//Q2

bool ListaCont::insereIntervalo(int a, int b)
{
    int ant = max;
    int tamanho;
    int menor, maior;
    if(b > a){
        tamanho = b - a;
        maior = b;
        menor = a;
    }else{
        tamanho = a - b;
        maior = a;
        menor = b;
    }

    if(n + tamanho > max){
        max = max + tamanho;
    }

    for(int i = 0; (menor + i) != maior; i++){
        vet[n] = menor + i;
        n = n + 1;
    }
    

    if(ant == max){
        return false;
    }
    return true;
    
}
//-Q2
// ----------------------------------------------------------------------------

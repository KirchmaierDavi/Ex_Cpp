#include <iostream>
#include <cstdlib>
#include <cmath>
#include "MatrizDistancias.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q4
MatrizDistancias::MatrizDistancias(int ordem)
{
    vet = new int[(ordem - sqrt(ordem))/2];
    n = sqrt(ordem);
}

MatrizDistancias::~MatrizDistancias()
{
   delete [] vet;
}

int MatrizDistancias::detInd(int i, int j)
{
    if(i >= 0 && i < n && j >= 0 && j < n){
        if((i*n + j) > (pow(n, 2) + n)/2){
            return -2;
        }
        return i*n + j;
    }
    return -1;
    
}

int MatrizDistancias::get(int i, int j)
{
    int k =  detInd(i, j);
    if(k != -1){
        return vet[k];
    }else{
        cout <<"indice invalido" << endl;
        exit(1);
    }
}

void MatrizDistancias::set(int i, int j, int val)
{
    int k = detInd(i,j);
    if(k != -1){
        vet[k] = val;
    }else{
        cout <<"indice invalido" << endl;
    }
}
//-Q4
// ----------------------------------------------------------------------------

void MatrizDistancias::imprime()
{
    cout << "Matriz " << n << " x " << n << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << get(i, j) << "\t";
        cout << endl;
    }
    cout << endl;
}

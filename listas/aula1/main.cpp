#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l(10);

    l.insereFinal(24);
    l.insereFinal(3);
    l.insereFinal(2);
    l.insereFinal(-1);
    l.insereFinal(99);
    l.imprime();
    cout << l.buscaMaior(100) << endl;
    cout << l.numNos() << endl;

    int vet[3] = {1,2,3};
    
    l.insereValores(3, vet);
    l.imprime();
    cout << l.numNos() << endl;
    

    return 0;
}

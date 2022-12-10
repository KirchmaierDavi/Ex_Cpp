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

    ListaCont l1(50);
    for(int i = 0; i < 50; i++){
        l1.insereFinal(1);
    }

    l1.imprime();
    
    ListaCont l2(25);
    ListaCont l3(25);

    l1.concatena(l2, l3);

    return 0;
}

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

    for(int i = 0; i < 25; i++){
        l1.insereFinal(1);
    }

    for(int i = 0; i < 25; i++){
        l1.insereFinal(2);
    }

    ListaCont l2(25);
    ListaCont l3(25);

    for(int i = 0; i < 25; i++){
        l2.insereFinal(l1.get(i));
    }
    l2.imprime();

    for(int i = 0; i < 25; i++){
        l3.insereFinal(l1.get(i + 25));
    }
    l3.imprime();
    

    return 0;
}

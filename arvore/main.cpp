#include <iostream>
#include "ArvBin.h"
using namespace std;

int main()
{
    ArvBin arv;
    arv.montaArvore();
    arv.insere(15);
    arv.insere(25);
    arv.insere(10);
    arv.preOrdem();
    cout << "O Numero de Nos e:" << arv.contaNos() << endl;
    return 0;
}

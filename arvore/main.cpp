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
    cout << "O Numero de Nos e: " << arv.contaNos() << endl;
    cout << "O Numero de Nos folhas  e: " << arv.contaNosFolhas() << endl;
    cout << "A altura da arvore e: " << arv.altura() << endl;
    cout << "O numero de impares e: " << arv.contaImpar() << endl;
    cout << "O numero de folhas impares e: " << arv.contaFolhaImpar() << endl;
    arv.imprimeNivel(2);
    
    return 0;
}

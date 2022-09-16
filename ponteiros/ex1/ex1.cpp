/*Fac ̧a um programa que realize as seguintes operac ̧oes:  ̃
I Declare um ponteiro para inteiro pt. X
I Imprima o enderec ̧o de pt. X
I Crie uma variavel inteira  ́ x. X
I Leia um valor para x. X
I Fac ̧a com que pt aponte para x. X
I Imprima o conteudo da vari  ́ avel  ́ pt. X
I Imprima o enderec ̧o de x. X
I Usando apenas o ponteiro pt multiplique x por 10 e altere
o seu valor. X
I Imprima o conteudo apontado por  ́ pt. X
I Some 10 a vari ` avel  ́ pt. X
I Imprima o seu conteudo novamente. Qual o significado  ́
desta sa ́ıda?*/


#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int x;
    int *p_pt;

    p_pt = &x;

    cout << "Digite um valor para x:";
    cin >> x;
    cout <<"Posicao de memoria de x: "<< p_pt << endl;
    cout <<"Valor de x:"<< *p_pt << endl;

    *p_pt = *p_pt * 5;
    
    cout << "Valor de X multiplicado por 5: " << *p_pt << endl;

    p_pt = p_pt + 10;

    cout<< "Respondendo a ultima pergunta, a saida significa que a posição de memoria do ponteiro subiu 10 unidades, ou 40 bytes por se tratar de um inteiro, sendo ela agora: "<< &p_pt << endl;

    return 0;
}
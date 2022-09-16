/* Implemente a func ̧ao ̃ troca que troca o conteudo de duas  ́
variaveis inteiras  ́ a e b. Fac ̧a um programa que teste a
func ̧ao implementada. Prot  ̃ otipo:  ́*/

#include <iostream>

using namespace std;

void troca (int *a, int *b){
    int aux;

    aux = *b;
    *b = *a;
    *a = aux;
}

int main(){
    int x;
    int y;
    int *p_x = &x;
    int *p_y = &y;

    cout << "Digite os valores de X e Y:"<< endl;

    cin >> x;
    cin >> y;

    cout << "Valor de X e Y antes da troca:" << x <<" "<< y << endl;
    
    troca(p_x ,p_y);

    cout << "Valor de X e Y apos a troca:" << x <<" "<< y << endl;

    
    return 0;
}
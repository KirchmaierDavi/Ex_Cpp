/*
4. Implemente uma unica func ̧  ́ ao que receba um vetor de  ̃
numeros inteiros (  ́ vet) e o seu tamanho (tam) e:
I conte o total de elementos pares;
I conte o total de elementos  ́ımpares;
I conte o total de elementos negativos;
I retorne verdadeiro se existirem numeros negativos no  ́
vetor, ou retorne falso, caso contrario.  ́
Considere o seguinte prototipo:  ́

*/

#include <iostream>

using namespace std;

bool func(int tam, int vet[], int *par, int *impar, int *negativos){
    for(int i = 0; i < tam; i++){
        if(vet[i] % 2 == 0){
            *par = *par + 1;
        }else{
            *impar = *impar + 1;
        }
        if(vet[i] < 0){
            *negativos = *negativos + 1;
        }
    }
    if(*negativos == 0){
        return false;
    }else{
        return true;
    }
}

int main(){
    int tam;
    int *vet;
    int p = 0;
    int imp = 0;
    int neg = 0;
    int *p_p = &p;
    int *p_imp = &imp;
    int *p_neg = &neg;

    cout <<"Digite o tamanho do vetor: "<< endl;
    cin >> tam;

    vet = new int[tam];

    for(int i = 0; i < tam; i++){
        cout <<"Digite o valor da posicao "<< i <<" do vetor: "<< endl;
        cin >> vet[i];
    }

    func(tam, vet, p_p, p_imp, p_neg);
    
    cout <<"Quantidade de pares: "<< p << endl;
    cout <<"Quantidade de impares: "<< imp << endl; 
    cout <<"Quantidade de negativos: "<< neg << endl; 

    delete [] vet;

    return 0;
}
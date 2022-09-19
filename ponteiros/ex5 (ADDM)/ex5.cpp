/*
Fac ̧a um programa que leia um numero inteiro  ́ n e aloque
um vetor com n inteiros de forma dinamica (use o ˆ
operador new). Em seguida, o programa deve ler os
valores do vetor e calcular a m ́edia dos elementos desse
vetor. Por fim, deve desalocar (use o operador delete) a
memoria usada para armazenar os seus elementos.  ́
*/

#include <iostream>

using namespace std;

int main(){
    int n, media;
    int *vet;
    int soma = 0;

    cout <<"Digite o tamanho do vetor:"<< endl;
    cin >> n;

    vet = new int[n];

    for(int i = 0; i < n; i++){
        cout <<"Digite o elemento "<< i <<" do vetor:"<< endl;
        cin >> vet[i];
        soma = soma + vet[i];
    }

    media = soma/n;

    cout<<"A media dos elementos do vetor é:"<< media << endl;

    delete [] vet;

    return 0;
}
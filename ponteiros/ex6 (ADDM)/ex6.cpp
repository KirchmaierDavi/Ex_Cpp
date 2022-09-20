/*
Implemente uma func ̧ao que calcule o produto escalar  ̃
entre dois vetores do tipo de dados float. No programa
principal voce deve ler o tamanho ˆ n dos vetores, os quais
devem ser alocados dinamicamente usando new. Depois,
voce deve ler os dados dos vetores e chamar a func ̧ ˆ ao para  ̃
calcular o produto escalar. Por fim, use o operador
delete para desalocar toda memoria alocada de forma  ́
dinamica. Prot ˆ otipo:  ́
float prodEscalar(int n, float x[], float y[]);
Ex. O produto escalar entre x = [1, 2, 3] e y = [4, 5, 6] e dado  ́
por:

x · y = 1 × 4 + 2 × 5 + 3 × 6 = 32.
*/
#include <iostream>

using namespace std;

float prodEscalar(int n, float x[], float y[]){
    float result = 0;
    for(int i = 0; i < n; i++){
        result = result + x[i] * y[i];
    }
    return result;
}

int main(){
    int n;
    float *vet1, *vet2;

    cout <<"Digite o tamanho dos vetores"<< endl;
    cin >> n;

    vet1 = new float[n];
    vet2 = new float[n];

    for(int i = 0; i < n; i++){
        cout <<"Digite o elemento "<< i <<" do primeiro vetor:"<< endl;
        cin >> vet1[i];
    }
    for(int i = 0; i < n; i++){
       cout <<"Digite o elemento "<< i <<" do segundo vetor:"<< endl;
       cin >> vet2[i];
    }

    cout <<"O resultado do Produto escalar é: "<< prodEscalar(n, vet1, vet2) << endl;

    delete [] vet1;
    delete [] vet2;

    return 0;
}
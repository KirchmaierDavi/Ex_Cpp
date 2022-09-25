#include <iostream>

using namespace std;

float soma(int n, float vet[]){
    
    if(n == 0){
        return 0;
    } else{
        return vet[n - 1] + soma(n - 1, vet);
    }
}

int main(){
    int n;
    float *vet;

    cout <<"Digite o tamanho do vetor"<< endl;
    cin >> n;

    vet = new float[n];

    for(int i = 0; i < n; i++){
        cout <<"Digite o valor "<< i <<" do vetor:"<< endl;
        cin >> vet[i];
    }

    cout <<"A soma dos valores do vetor é: "<< soma(n, vet) << endl;

    delete [] vet;

    return 0;
}
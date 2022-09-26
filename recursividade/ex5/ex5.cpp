#include <iostream>

using namespace std;

float menor(int n, float vet[]){
    if(n == 1){
        return vet[0];
    }
    float x = menor(n - 1, vet);
    if(x < vet[n - 1]){
        return x;
    } else{
        return vet[n - 1];
    }
}

int main(){
    int n;
    float *vet;

    cout <<"Digite o tamanho do vetor:"<< endl;
    cin >> n;

    vet = new float[n];

    for(int i = 0; i < n; i++){
        cout <<"Digite o elemento "<< i <<" do vetor"<< endl;
        cin >> vet[i];
    }

    cout<<"O menor numero do vetor é:"<< menor(n, vet) << endl;

    delete [] vet;
    
    return 0;
}
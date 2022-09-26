#include <iostream>

using namespace std;

int pares(int n, int vet[]){
    if(n == 1){
        if(vet[0] % 2 ==0){
            return 1;
        }else{
            return 0;
        }
    }
    
    int x = pares(n - 1, vet);
    
    if(vet[n - 1] % 2 == 0){
        return x + 1;
    }else{
        return x;
    }
}

int main(){
    int n;
    int *vet;

    cout <<"Digite o tamanho do vetor:"<< endl;
    cin >> n;

    vet = new int[n];

    for(int i = 0; i < n; i++){
        cout <<"Digite o elemento "<< i <<" do vetor"<< endl;
        cin >> vet[i];
    }

    cout<<"O numero de elementos pares no vetor é:"<< pares(n, vet) << endl;

    delete [] vet;
    
    return 0;
}
#include <iostream>

using namespace std;

int fatorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * fatorial(n - 1);
    }
}

int main(){
    int n;

    cout <<"Digite o numero o qual deseja saber o fatorial:"<< endl;
    cin >> n;

    cout <<"O valor do fatorial é: "<< fatorial(n) << endl;

    return 0;
}
#include <iostream>

using namespace std;

void impinter(int n1, int n2, int inc){
    if(n1 == n2){
        cout << n2;
    }else if(n1 < n2){
         cout << n1 << " ";
        impinter(n1 + inc ,n2 , inc);
    }
}

int main(){
    int a, b, i;

    cout <<"Digite, respectivamente, o menor numero, o maior, e o incremento:"<< endl;
    cin >> a;
    cin >> b;
    cin >> i;

    cout <<"O intervalo e: "<< endl;
    impinter(a, b, i);

    return 0;
}
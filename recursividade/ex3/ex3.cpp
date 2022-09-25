#include <iostream>

using namespace std;

void decresce (int n){
    if(n == 0){
        cout << 0;
    }else if(n < 0){
        cout << n << " ";
        decresce (n + 1);
    }else{
        cout << n << " ";
        decresce (n - 1);
    }
}

int main(){
    int n;

    cout <<"Digite o numero a ser decrescido:"<< endl;
    cin >> n;

    decresce(n);

    return 0;
}

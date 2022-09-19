/*
Dados dois numeros inteiros  ́ num e div, fac ̧a uma func ̧ao ̃
para calcular e retornar o quociente e o resto da divisao ̃
inteira de num por div. Considerar o seguinte prototipo:  ́
void divisao(int num, int div, int *q, int *r);
onde:
I num e dividendo;  ́
I div e o divisor;  ́
I q e o quociente;  ́
I r e o resto.  ́
*/

#include <iostream>

using namespace std;

void div(int n, int dv, int *q, int *r){
    *q = n / dv;
    *r = n % dv;
}

int main(){
    int n;
    int dv;
    int q;
    int r;
    int *p_q = &q;
    int *p_r = &r;

    cout << "Digite o numero e seu divisor:" << endl;
    cin >> n;
    cin >> dv;

    div(n ,dv ,p_q , p_r);

    cout <<"Valor do quociente: " << q << endl;
    cout <<"Valor do resto: " << r << endl;
    
    return 0;
}
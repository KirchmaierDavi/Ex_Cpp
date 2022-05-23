#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;


int main(){
    Aluno a;
    double median = 0;
    a.getNome();
    a.leNotas();
    median = a.calculaMedia();
    cout<<"Media e de: "<<median<< endl;
    return 0;
}
#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;


int main(){
    Aluno a("Davi Kirchmaier Paiva", "452968421");
    double median = 0;
    a.leNotas();
    median = a.calculaMedia();
    cout<<"Media e de: "<<median<< endl;
    return 0;
}
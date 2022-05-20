#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno(string n, string mat){
    nome = n;
    matricula = mat;
    idade = 19;
}




void Aluno::leNotas(){
    for(int i=0;i<7;i++){
        cout<< "Digite a nota "<< i+1 << ":" << endl;
        cin>>notas[i];
    }
}

Aluno::~Aluno(){
    cout<<"Destruindo Aluno"<< endl;
}

double Aluno::calculaMedia(){
    double media = 0;
    for(int i=0;i<7;i++){
        media = (media + notas[i]);
    }
    return media/7;
}
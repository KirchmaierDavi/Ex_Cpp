#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno(){
    nome = "";
    matricula = "";
    idade = 0;
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

string Aluno::getNome(){
    cout << "Digite seu nome:"<< endl;
    cin >> nome;
}

void Aluno::setNome(string n){
    cout << nome << endl;
}
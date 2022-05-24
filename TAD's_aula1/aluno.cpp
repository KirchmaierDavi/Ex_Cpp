#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno(string n, string mat, int id){
    nome = n;
    matricula = mat;
    idade = id;
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
    return nome;
}

void Aluno::setNome(string n){
    nome = n;
}

string Aluno::getMatricula(){
    return matricula;
}

void Aluno::setMatricula(string mat){
    matricula = mat;
}

int Aluno::getIdade(){
    return idade;
}

void Aluno::setIdade(int id){
    idade = id;
}
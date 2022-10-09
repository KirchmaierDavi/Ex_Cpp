#include "Aluno.h"

Aluno::Aluno(string n, string m, int i)
{
    cout << "Criando aluno" << endl;
    nome = n;
    matricula = m;
    idade = i;
}

Aluno::~Aluno()
{
    cout << "Destruindo objeto aluno" << endl;
}

// ----------------------------------------------------------------------------
// Exercicio 1
// ----------------------------------------------------------------------------

void Aluno::leNotas(){
    for(int i = 0; i < 7;i++){
        cout <<"Digite a nota da prova "<< i + 1 << endl;
        cin >> notas[i];
    }
}

double Aluno::calculaMedia(){
    float media = 0;
    for(int i = 0; i < 7; i++){
        media = media + notas[i];
    }
    return media/7;
}

// ----------------------------------------------------------------------------

void Aluno::setNome(string novo)
{
    nome = novo;
}

string Aluno::getNome()
{
    return nome;
}

// ----------------------------------------------------------------------------
// Exercicio 2
// ----------------------------------------------------------------------------

void Aluno::setIdade(int i){
    idade = i;
}

int Aluno::getIdade(){
    return idade;
}

void Aluno::setMatricula(string mat){
    matricula = mat;
}

string Aluno::getMatricula(){
    return matricula;
}


// ----------------------------------------------------------------------------
// Exercicio 3
// ----------------------------------------------------------------------------

void Aluno::leInfo(){
    cout <<"Digite o seu nome:"<< endl;
    cin >> nome;
    setNome(nome);

    cout <<"Digite sua Matricula:"<< endl;
    cin >> matricula;
    setMatricula(matricula);

    cout <<"Digite sua idade:"<< endl;
    cin >> idade;
    setIdade(idade);
}


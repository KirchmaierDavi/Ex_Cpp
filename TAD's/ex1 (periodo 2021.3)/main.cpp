#include <string>
#include <iostream>
#include "aluno.h"

using namespace std;


int main(){
    string matricula, nome;
    int idade;
    bool p[7];
    cout <<"Digite sua idade, numero de matricula , e seu nome; Respectivamente:";
    cin >> idade;
    cin >> matricula;
    cin >> nome;
    for(int i=0;i<7;i++){
        cout <<"Digite sua presença: (1 caso presente, 0 caso ausente)"<< endl;
        cin>>p[i];
    }
    Aluno a(nome, matricula, idade);
    a.setNome(nome);
    a.setMatricula(matricula);
    a.setIdade(idade);
    a.leNotas();
    a.setP(p);
    cout<<"Informações do aluno"<< endl;
    cout<<"Nome:"<< a.getNome()<< endl;
    cout<<"Matricula:"<< a.getMatricula()<< endl;
    cout<<"Idade:"<< a.getIdade()<< endl;
    cout<<"Media e de: "<<a.calculaMedia()<< endl;
    return 0;
}
#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno
{
    public:
        Aluno(string n, string m, int i);
        ~Aluno();

        // operacoes
        void setNome(string n);
        string getNome();

        // exercicio 1
        void leNotas();
        double calculaMedia();
        void leInfo();

        // exercicio 2
        void setIdade(int id);
        int getIdade();

        void setMatricula(string mat);
        string getMatricula();

        // exercicio 5
        // implemente aqui

    private:
        int idade;
        string nome, matricula;
        double notas[7];

        // exercicio 3
        // implemente aqui

        // exercicio 4
        bool presenca[7];
};

#endif // ALUNO_H

#include <iostream>
#include <string>

using namespace std;

class Aluno {
    private:
        int idade;
        string nome, matricula;
        double notas[7];

    public:
        Aluno();
        ~Aluno();

        void leNotas();
        double calculaMedia();
        string getNome();
        void setNome(string n);
};
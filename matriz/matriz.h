#include <iostream>

class MatrizLin
{
public:
    MatrizLin(int mm, int nn);
    ~MatrizLin();
    
    void set(int i, int j, float val);
    float get(int i, int j);
    void printaMatriz();

private:
    int nl, nc; // numero de linhas e colunas
    float *vet; // vetor de tamanho nl*nc
    
    int detInd(int i, int j);
};
#ifndef PESSOA
#define PESSOA

#include <iostream>
using std::cout;
using std::endl;

class Pessoa
{
private:
    int diaNa;
    int mesNa;
    int anoNa;
    int idade;
    char nome[50];

public:
    Pessoa(int diaN = -1, int mesN = -1, int anoN = -1, const char* name = "");
    ~Pessoa();

    void calcIdade(int diaAt, int mesAt, int anoAt);
    void printIdade();
    void calcIdade_printIdade(int diaAt, int mesAt, int anoAt);

    int getIdade();
};

#endif
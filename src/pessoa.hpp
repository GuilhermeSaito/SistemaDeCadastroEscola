#ifndef PESSOA
#define PESSOA

#include "universidade.hpp"

class Pessoa
{
private:
    int diaNa;
    int mesNa;
    int anoNa;
    int idade;
    char nome[50];

    // ASSOCIACAO entre o objeto Pessoa e Universidade
    Universidade* uniFiliado;
    Departamento* departFiliado;

    void inicializa(int diaN = 0, int mesN = 0, int anoN = 0, const char* name = "");

public:
    Pessoa(int diaN = -1, int mesN = -1, int anoN = -1, const char* name = "");
    Pessoa();   // Construtora sem parametro, a que eh chamada na hora que eh instanciado
    ~Pessoa();

    void calcIdade(int diaAt, int mesAt, int anoAt);
    void printIdade();

    void setUniFiliado(Universidade* uni);
    void printOndTrabalha();

    void setDepartFiliado(Departamento* depart);
    void printDepartTrabalha();

    int getIdade();
};

#endif
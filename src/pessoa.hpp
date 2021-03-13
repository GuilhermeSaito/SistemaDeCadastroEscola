#pragma once

#include "universidade.hpp"

class Pessoa
{
protected:
    int diaNa;
    int mesNa;
    int anoNa;
    int idade;
    char nome[50];

public:
    Pessoa(int diaN = -1, int mesN = -1, int anoN = -1, const char *name = "");
    ~Pessoa();

    void calcIdade(int diaAt, int mesAt, int anoAt);
    void printIdade();

    int getIdade();
    const char *getNome();
};

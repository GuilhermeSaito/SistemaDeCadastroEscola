#ifndef PROFESSOR
#define PROFESSOR

#include "pessoa.hpp"

class Professor: public Pessoa
{
private:
    Universidade* uniFiliado;
    Departamento* departFiliado;

public:
    Professor(int diaN = -1, int mesN = -1, int anoN = -1, const char* name = "");
    ~Professor();
    
    void setUniFiliado(Universidade* uni);
    void printOndTrabalha();

    void setDepartFiliado(Departamento* depart);
    void printDepartTrabalha();
};

#endif
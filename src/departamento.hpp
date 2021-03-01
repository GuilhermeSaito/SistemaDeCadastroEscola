#ifndef DEPARTAMENTO
#define DEPARTAMENTO

#include <string.h>
#include <iostream>
using std::cout;
using std::endl;

class Universidade;
class Departamento
{
private:
    char nome[70];

    Universidade* uniFiliada;

public:
    Departamento(const char* name = "");
    Departamento();
    ~Departamento();

    void setUniversidadeFiliada(Universidade* uni);
    Universidade* getUniversidadeFiliada();

    const char* getNome() const;
    void setNome(const char* name);
};

#endif
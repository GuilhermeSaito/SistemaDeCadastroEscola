#ifndef UNIVERSIDADE
#define UNIVERSIDADE

#include "departamento.hpp"

class Universidade
{
private:
    char nome[50];

    // Ele eh agregado, pois, MESMO SEM A UNIVERSIDADE, A CLASSE DEPARTAMENTO AINDA EXISTE
    Departamento* departAgregado;

public:
    Universidade(const char* name = "");
    Universidade();
    ~Universidade();

    void setDepartamento(Departamento* depart);
    Departamento* getDepartamento();

    const char* getNome() const;
    void setNome(const char* name);
};

#endif
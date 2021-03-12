#ifndef DEPARTAMENTO
#define DEPARTAMENTO

#include "Disciplina.hpp"

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

    Disciplina* pDisciPrim;
    Disciplina* pDisciAtual;

public:
    Departamento(const char* name = "");
    Departamento();
    ~Departamento();

    void setUniversidadeFiliada(Universidade* uni);
    Universidade* getUniversidadeFiliada();

    const char* getNome() const;
    void setNome(const char* name);

    void setPDisciplinaPrim(Disciplina* pDisc);
    Disciplina* getPDisciplinaPrim();
    void setPDisciplinaAtual(Disciplina* pDisc);
    Disciplina* getPDisciplinaAtual();
    void incluirDisicplina(Disciplina* dis);
    void listarDisciplinas();
    void listarDisciplinasTrasFrente();
};

#endif
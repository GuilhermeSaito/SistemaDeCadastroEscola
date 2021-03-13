#pragma once

#include "theDisciplina.hpp"

class ListaDiscipina
{
private:
    TheDisciplina *theDisciplinaPrim;
    TheDisciplina *theDisciplinaAtual;

public:
    ListaDiscipina();
    ~ListaDiscipina();

    void incluirDisciplina(Disciplina *dis);
    void listarDisciplina();
    void freeDisciplinas();
};
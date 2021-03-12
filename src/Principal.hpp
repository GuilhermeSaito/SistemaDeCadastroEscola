#ifndef PRINCIPAL
#define PRINCIPAL

#include "professor.hpp"
#include "aluno.hpp"

class Principal
{
private:
    // Composicao, chama a construtora sem parametros.
    // eh COMPOSICAO, POIS SEM O PRINCIPAL, PESSOA E UNIVERSIDADE NAO EXISTE
    Professor Arudina;
    Aluno Alpheratz;

    Universidade uniFicticia;

    Departamento departFicticia;

    Disciplina primeiraDisciplina;
    Disciplina segundaDisciplina;

public:
    Principal();
    ~Principal();

    void execute();
};

#endif
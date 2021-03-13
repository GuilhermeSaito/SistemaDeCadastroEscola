#pragma once

#include "listaAluno.hpp"
#include "listaDisciplina.hpp"
#include "listaDepartamento.hpp"
#include "listaUniversidade.hpp"

using std::cin;

class Principal
{
private:
    /*
    // Composicao, chama a construtora sem parametros.
    // eh COMPOSICAO, POIS SEM O PRINCIPAL, PESSOA E UNIVERSIDADE NAO EXISTE
    Professor Arudina;
    Aluno Alpheratz;

    Universidade uniFicticia;

    Departamento departFicticia;

    Disciplina primeiraDisciplina;
    Disciplina segundaDisciplina;*/

    ListaAluno listaAluno;
    ListaDiscipina listaDisciplina;
    ListaDepartamento listaDepartamento;
    ListaUniversidade listaUniversidade;

public:
    Principal();
    ~Principal();

    void execute();

    void menu();
    void cadastrarUniversidade();
    void cadastrarDepartamento();
    void cadastrarDisciplina();
};

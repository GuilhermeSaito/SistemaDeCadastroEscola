#pragma once

#include "listaAluno.hpp"
#include "lib.hpp"

class Departamento;

class Disciplina
{
private:
    int id;
    char nome[50];
    char areaConhecimento[70];

    Departamento *departAssociado;

    ListaAluno listaAlunos;

public:
    Disciplina(int iD = -1, const char *name = "", const char *areaConhe = "");
    ~Disciplina();

    void setId(int iD);
    int getId();
    void setNome(const char *name);
    char *getName();

    void setDepartamentoAss(Departamento *departAss);
    Departamento *getDepartamentoAss();
    void showWitchDepartIsAssociate();

    // Disciplina Aluno
    void incluirAluno(Aluno *aluno);
    void listarAluno();
};

#pragma once

#include "lib.hpp"

class TheAluno;
class Aluno;

class ListaAluno
{
private:
    TheAluno *theAlunoPrim;
    TheAluno *theAlunoAtual;

public:
    ListaAluno();
    ~ListaAluno();

    void incluirAluno(Aluno *aluno);
    void listarAluno();
    void freeAlunos();
};
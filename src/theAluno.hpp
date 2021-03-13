#pragma once

#include "aluno.hpp"

class TheAluno
{
public:
    TheAluno();
    ~TheAluno();

    // Na vdd deveria ser private, mas ja ja vai mudar msm
    Aluno *alunoReferido;
    TheAluno *theAlunoProx;
    TheAluno *theAlunoAnt;
};
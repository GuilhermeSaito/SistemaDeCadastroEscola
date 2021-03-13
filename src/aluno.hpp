#pragma once

#include "pessoa.hpp"

class Aluno : public Pessoa
{
private:
    Universidade *uniFiliado;

public:
    Aluno(int diaN = -1, int mesN = -1, int anoN = -1, const char *name = "");
    ~Aluno();

    void setUniFiliado(Universidade *uni);
    void printOndEstuda();
};

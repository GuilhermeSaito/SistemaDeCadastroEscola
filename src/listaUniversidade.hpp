#pragma once

#include "theUniversidade.hpp"

class ListaUniversidade
{
private:
    TheUniversidade *theUniversidadePrim;
    TheUniversidade *theUniversidadeAtual;

public:
    ListaUniversidade();
    ~ListaUniversidade();

    void incluirUniversidade(Universidade *uni);
    void listarUniversidade();
    void freeUniversidade();
};
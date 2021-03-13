#pragma once

#include "universidade.hpp"

class TheUniversidade
{
public:
    TheUniversidade();
    ~TheUniversidade();

    Universidade *uniReferida;
    TheUniversidade *theUniversidadeProx;
    TheUniversidade *theUniversidadeAnt;
};
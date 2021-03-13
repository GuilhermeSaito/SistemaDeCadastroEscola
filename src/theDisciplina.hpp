#pragma once

#include "disciplina.hpp"

class TheDisciplina
{
public:
    TheDisciplina();
    ~TheDisciplina();

    // Deveria colocar esses elementos no private, mas, estou com um pouco de preguica pra digitar os metodos hahahaha
    Disciplina *disciplinaReferida;
    TheDisciplina *theDisciplinaProx;
    TheDisciplina *theDisciplinaAnterior;
};
#pragma once

#include "departamento.hpp"

class TheDepartamento
{
public:
    TheDepartamento();
    ~TheDepartamento();

    // Mals, estou com preguica de fazer os metodos sets e gets
    Departamento *departamentoReferido;
    TheDepartamento *theDepartamentoProx;
    TheDepartamento *theDepartamentoAnt;
};
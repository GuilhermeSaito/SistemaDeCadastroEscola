#pragma once

#include "theDepartamento.hpp"

class ListaDepartamento
{
private:
    TheDepartamento *theDepartamentoPrim;
    TheDepartamento *theDepartamentoAtual;

public:
    ListaDepartamento();
    ~ListaDepartamento();

    void incluirDepartamento(Departamento *depart);
    void listarDepartamentos();
    void freeDepartamentos();
};
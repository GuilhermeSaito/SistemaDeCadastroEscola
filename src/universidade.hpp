#pragma once

#include "listaDepartamento.hpp"

class Universidade
{
private:
    char nome[50];

    // Ele eh agregado, pois, MESMO SEM A UNIVERSIDADE, A CLASSE DEPARTAMENTO AINDA EXISTE
    //Departamento *departAgregado;
    ListaDepartamento listaDepartamento;

public:
    Universidade(const char *name = "");
    Universidade();
    ~Universidade();

    /*void setDepartamento(Departamento *depart);
    Departamento *getDepartamento();*/
    void incluirDepartamento(Departamento *depart);
    void listarDepartamentos();

    const char *getNome() const;
    void setNome(const char *name);
};

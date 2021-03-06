#pragma once

#include "listaDisciplina.hpp"

class Universidade;

class Departamento
{
private:
    char nome[70];

    Universidade *uniFiliada;

    ListaDiscipina listDisciplina;

public:
    Departamento(const char *name = "");
    Departamento();
    ~Departamento();

    void setUniversidadeFiliada(Universidade *uni);
    Universidade *getUniversidadeFiliada();

    const char *getNome() const;
    void setNome(const char *name);

    void incluirDisicplina(Disciplina *dis);
    void listarDisciplinas();
};

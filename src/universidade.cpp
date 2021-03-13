#include "universidade.hpp"

Universidade::Universidade(const char *name)
{
    strcpy(nome, name);
}
Universidade::Universidade()
{
    strcpy(nome, "");
}
Universidade::~Universidade()
{
}

void Universidade::incluirDepartamento(Departamento *depart)
{
    listaDepartamento.incluirDepartamento(depart);
}
void Universidade::listarDepartamentos()
{
    cout << "Departamentos associados a universidade: " << nome << endl;
    listaDepartamento.listarDepartamentos();
}

const char *Universidade::getNome() const { return nome; }
void Universidade::setNome(const char *name) { strcpy(nome, name); }
#include "universidade.hpp"

Universidade::Universidade(const char* name) 
{
    departAgregado = NULL;
    strcpy(nome, name);
}
Universidade::Universidade() 
{
    departAgregado = NULL;
    strcpy(nome, "");
}
Universidade::~Universidade()
{
    departAgregado = NULL;
}

void Universidade::setDepartamento(Departamento* depart) { departAgregado = depart; }
Departamento* Universidade::getDepartamento() 
{
    if (departAgregado == NULL) cout << "DepartAgregado da Universidade NULL!!" << endl;
    return departAgregado; 
}

const char* Universidade::getNome() const { return nome; }
void Universidade::setNome(const char* name) { strcpy(nome, name); }
#include "departamento.hpp"
#include "universidade.hpp"

Departamento::Departamento(const char* name)
{
    uniFiliada = NULL;
    strcpy(nome, name);
}
Departamento::Departamento()
{
    uniFiliada = NULL;
    strcpy(nome, "");
}
Departamento::~Departamento()
{
    uniFiliada = NULL;
}

void Departamento::setUniversidadeFiliada(Universidade* uni) { uniFiliada = uni; }
Universidade* Departamento::getUniversidadeFiliada() 
{
    if (uniFiliada == NULL) cout << "UniFiliada do Departamento estah NULL!!" << endl; 
    return uniFiliada; 
}

const char* Departamento::getNome() const { return nome; }
void Departamento::setNome(const char* name) { strcpy(nome, name); }
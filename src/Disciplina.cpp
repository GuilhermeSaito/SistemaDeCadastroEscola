#include "Disciplina.hpp"
#include "departamento.hpp"

#include <string.h>

Disciplina::Disciplina(int iD, const char* name, const char* areaConhe) :
    id(iD),
    pDisciAnterior(NULL),
    pDisciProx(NULL),
    departAssociado(NULL)
{
    strcpy(nome, name);
    strcpy(areaConhecimento, areaConhe);
}
Disciplina::~Disciplina()
{
    pDisciAnterior = NULL;
    pDisciProx = NULL;
    departAssociado = NULL;
}

void Disciplina::setId(int iD) { id = iD; }
int Disciplina::getId() { return id; }
void Disciplina::setNome( const char* name) { strcpy(nome, name); }
char* Disciplina::getName() { return nome; }

void Disciplina::setPDisciplinaAnterior(Disciplina* pDisc) { pDisciAnterior = pDisc; }
Disciplina* Disciplina::getPDisciplinaAnterior() { return pDisciAnterior; }
void Disciplina::setPDisciplinaProx(Disciplina* pDisc) { pDisciProx = pDisc; }
Disciplina* Disciplina::getPDisciplinaProx() { return pDisciProx; }
void Disciplina::setDepartamentoAss(Departamento* departAss)
{ 
    departAssociado = departAss; 
    if (departAssociado == NULL)
        cout << "Nao eh possivel incluir essa disicplina: " << nome << " no departamento, ponteiro nulo!" << endl;
    else
        departAss->incluirDisicplina(this);
}
Departamento* Disciplina::getDepartamentoAss() { return departAssociado; }
void Disciplina::showWitchDepartIsAssociate()
{
    if (getDepartamentoAss() != NULL)
        cout << "Disciplina: " << nome << "\tAssociado com o Departamento: " << getDepartamentoAss()->getNome() << endl;
    else
        cout << "Disciplina: " << nome << "\tAssociado com NENHUM departamento: " << endl;
}
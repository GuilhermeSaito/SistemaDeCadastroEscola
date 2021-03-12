#include "Disciplina.hpp"
#include "departamento.hpp"
#include "theAluno.hpp"

#include <string.h>

Disciplina::Disciplina(int iD, const char* name, const char* areaConhe) :
    id(iD),
    pDisciAnterior(NULL),
    pDisciProx(NULL),
    departAssociado(NULL),
    theAlunoPrim(NULL),
    theAlunoAtual(NULL)
{
    strcpy(nome, name);
    strcpy(areaConhecimento, areaConhe);
}
Disciplina::~Disciplina()
{
    pDisciAnterior = NULL;
    pDisciProx = NULL;
    departAssociado = NULL;
    theAlunoPrim = NULL;
    theAlunoAtual = NULL;
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

void Disciplina::setTheAlunoPrim(TheAluno* elem) { theAlunoPrim = elem; }
TheAluno* Disciplina::getTheAlunoPrim() { return theAlunoPrim; }
void Disciplina::setTheAlunoAtual(TheAluno* elem) { theAlunoAtual = elem; }
TheAluno* Disciplina::getTheAlunoAtual() { return theAlunoAtual; }
bool Disciplina::incluirAluno(Aluno* al)
{
    if (al != NULL)
    {
        TheAluno* theAlunoAux;
        theAlunoAux->setAluno(al);
        if (theAlunoPrim == NULL)
        {
            theAlunoPrim = theAlunoAux;
            theAlunoAtual = theAlunoAux;
        }
        else
        {
            theAlunoAtual->setTheAlunoProx(theAlunoAux);
            theAlunoAux->setTheAlunoAnt(theAlunoAtual);
            theAlunoAtual = theAlunoAux;
        }
    }
    else
        cout << "Ponteiro Nulo do aluno, na classe Disciplina, no metodo incluirAluno" << endl;
}
void Disciplina::listAlunos()
{
    TheAluno* theAlunoAux = theAlunoPrim;

    cout << "Nomes dos alunos incluidos na Disciplina: " << nome << endl;
    while (theAlunoAux != NULL)
    {
        cout << "\t" << theAlunoAux->getAluno()->getNome() << endl;
        theAlunoAux = theAlunoAux->getTheAlunoProx();
    }
}
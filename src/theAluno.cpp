#include "theAluno.hpp"
#include "Disciplina.hpp"

TheAluno::TheAluno() :
	alunoReferido(NULL),
	disciplinaAssociado(NULL),
	theAlunoProx(NULL),
	theAlunoAnt(NULL)
{
}
TheAluno::~TheAluno()
{
	alunoReferido = NULL;
	disciplinaAssociado = NULL;
	theAlunoProx = NULL;
	theAlunoAnt = NULL;
}

void TheAluno::setAluno(Aluno* a) { alunoReferido = a; }
Aluno* TheAluno::getAluno() { return alunoReferido; }
void TheAluno::setDisciplina(Disciplina* d) { disciplinaAssociado = d; }
Disciplina* TheAluno::getDisciplina() { return disciplinaAssociado; }

void TheAluno::setTheAlunoProx(TheAluno* elem) { theAlunoProx = elem; }
TheAluno* TheAluno::getTheAlunoProx() { return theAlunoProx; }
void TheAluno::setTheAlunoAnt(TheAluno* elem) { theAlunoAnt = elem; }
TheAluno* TheAluno::getTheAlunoAnt() { return theAlunoAnt; }
#ifndef THE_ALUNO
#define THE_ALUNO

#include "aluno.hpp"

class Disciplina;
class TheAluno
{
private:
	Aluno* alunoReferido;
	Disciplina* disciplinaAssociado;
	TheAluno* theAlunoProx;
	TheAluno* theAlunoAnt;

public:
	TheAluno();
	~TheAluno();

	void setAluno(Aluno* a);
	Aluno* getAluno();
	void setDisciplina(Disciplina* d);
	Disciplina* getDisciplina();

	void setTheAlunoProx(TheAluno* elem);
	TheAluno* getTheAlunoProx();
	void setTheAlunoAnt(TheAluno* elem);
	TheAluno* getTheAlunoAnt();

};

#endif
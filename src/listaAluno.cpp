#include "listaAluno.hpp"
#include "theAluno.hpp"

ListaAluno::ListaAluno()
{
    theAlunoPrim = NULL;
    theAlunoAtual = NULL;
}
ListaAluno::~ListaAluno()
{
    theAlunoPrim = NULL;
    theAlunoAtual = NULL;
}

void ListaAluno::incluirAluno(Aluno *aluno)
{
    if (aluno != NULL)
    {
        TheAluno *theAlunoAux = new TheAluno;
        theAlunoAux->alunoReferido = aluno;
        if (theAlunoPrim == NULL)
        {
            theAlunoPrim = theAlunoAux;
            theAlunoAtual = theAlunoAux;
        }
        else
        {
            theAlunoAtual->theAlunoProx = theAlunoAux;
            theAlunoAux->theAlunoAnt = theAlunoAtual;
            theAlunoAtual = theAlunoAux;
        }
    }
    else
        cout << "Erro no metodo incluirAluno, classe listaAluno..." << endl;
}
void ListaAluno::listarAluno()
{
    TheAluno *theAlunoAux = theAlunoPrim;
    while (theAlunoAux != NULL)
    {
        cout << "\t" << theAlunoAux->alunoReferido->getNome() << endl;
        theAlunoAux = theAlunoAux->theAlunoProx;
    }
}
void ListaAluno::freeAlunos()
{
    TheAluno *theAlunoAuxFrente = theAlunoPrim;
    TheAluno *theAlunoAuxTras = theAlunoPrim;
    while (theAlunoAuxFrente != NULL)
    {
        theAlunoAuxFrente = theAlunoAuxFrente->theAlunoProx;
        delete theAlunoAuxTras;
        theAlunoAuxTras = theAlunoAuxFrente;
    }
}
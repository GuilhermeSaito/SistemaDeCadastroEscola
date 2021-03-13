#include "listaDisciplina.hpp"

ListaDiscipina::ListaDiscipina()
{
    theDisciplinaPrim = NULL;
    theDisciplinaAtual = NULL;
}
ListaDiscipina::~ListaDiscipina()
{
    freeDisciplinas();
    theDisciplinaPrim = NULL;
    theDisciplinaAtual = NULL;
}

void ListaDiscipina::incluirDisciplina(Disciplina *dis)
{
    if (dis != NULL)
    {
        TheDisciplina *theDisciplinaAux = new TheDisciplina;
        theDisciplinaAux->disciplinaReferida = dis;
        if (theDisciplinaPrim == NULL)
        {
            theDisciplinaPrim = theDisciplinaAux;
            theDisciplinaAtual = theDisciplinaAux;
        }
        else
        {
            theDisciplinaAtual->theDisciplinaProx = theDisciplinaAux;
            theDisciplinaAux->theDisciplinaAnterior = theDisciplinaAtual;
            theDisciplinaAtual = theDisciplinaAux;
        }
    }
    else
        cout << "Ponteiro Nulo no metodo incluirDisciplina, classe Lista Disciplina." << endl;
}
void ListaDiscipina::listarDisciplina()
{
    TheDisciplina *theDisciplinaAux = theDisciplinaPrim;
    while (theDisciplinaAux != NULL)
    {
        cout << "\t" << theDisciplinaAux->disciplinaReferida->getName() << endl;
        theDisciplinaAux = theDisciplinaAux->theDisciplinaProx;
    }
}
void ListaDiscipina::freeDisciplinas()
{
    TheDisciplina *theDisciplinaAux = theDisciplinaPrim;
    TheDisciplina *theDisciplinaAux2 = theDisciplinaPrim;
    while (theDisciplinaAux != NULL)
    {
        theDisciplinaAux = theDisciplinaAux->theDisciplinaProx;
        delete theDisciplinaAux2;
        theDisciplinaAux2 = theDisciplinaAux;
    }
}
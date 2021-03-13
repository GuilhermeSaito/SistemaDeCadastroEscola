#include "listaUniversidade.hpp"

ListaUniversidade::ListaUniversidade()
{
    theUniversidadePrim = NULL;
    theUniversidadeAtual = NULL;
}
ListaUniversidade::~ListaUniversidade()
{
    freeUniversidade();
    theUniversidadePrim = NULL;
    theUniversidadeAtual = NULL;
}

void ListaUniversidade::incluirUniversidade(Universidade *uni)
{
    if (uni != NULL)
    {
        TheUniversidade *theUniversidadeAux = new TheUniversidade;
        theUniversidadeAux->uniReferida = uni;
        if (theUniversidadePrim == NULL)
        {
            theUniversidadePrim = theUniversidadeAux;
            theUniversidadeAtual = theUniversidadeAux;
        }
        else
        {
            theUniversidadeAtual->theUniversidadeProx = theUniversidadeAux;
            theUniversidadeAux->theUniversidadeAnt = theUniversidadeAtual;
            theUniversidadeAtual = theUniversidadeAux;
        }
    }
    else
        cout << "Ponteiro Nulo no metodo incluirUniversidade, classe listaUniversidade" << endl;
}
void ListaUniversidade::listarUniversidade()
{
    TheUniversidade *theListaUniversidadeAux = theUniversidadePrim;
    while (theListaUniversidadeAux != NULL)
    {
        cout << "\t" << theListaUniversidadeAux->uniReferida->getNome() << endl;
        theListaUniversidadeAux = theListaUniversidadeAux->theUniversidadeProx;
    }
}
void ListaUniversidade::freeUniversidade()
{
    TheUniversidade *theListaUniversidadeAux = theUniversidadePrim;
    TheUniversidade *theListaUniversidadeAux2 = theUniversidadePrim;
    while (theListaUniversidadeAux != NULL)
    {
        theListaUniversidadeAux = theListaUniversidadeAux->theUniversidadeProx;
        delete theListaUniversidadeAux2;
        theListaUniversidadeAux2 = theListaUniversidadeAux;
    }
}
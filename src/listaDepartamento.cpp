#include "listaDepartamento.hpp"

ListaDepartamento::ListaDepartamento()
{
    theDepartamentoPrim = NULL;
    theDepartamentoAtual = NULL;
}
ListaDepartamento::~ListaDepartamento()
{
    freeDepartamentos();
    theDepartamentoPrim = NULL;
    theDepartamentoAtual = NULL;
}

void ListaDepartamento::incluirDepartamento(Departamento *depart)
{
    if (depart != NULL)
    {
        TheDepartamento *theDepartamentoAux = new TheDepartamento;
        theDepartamentoAux->departamentoReferido = depart;
        if (theDepartamentoPrim == NULL)
        {
            theDepartamentoPrim = theDepartamentoAux;
            theDepartamentoAtual = theDepartamentoAux;
        }
        else
        {
            theDepartamentoAtual->theDepartamentoProx = theDepartamentoAux;
            theDepartamentoAux->theDepartamentoAnt = theDepartamentoAtual;
            theDepartamentoAtual = theDepartamentoAux;
        }
    }
    else
        cout << "Ponteiro Nulo no metodo incluirDepartamento na classe listaDepartamento" << endl;
}
void ListaDepartamento::listarDepartamentos()
{
    TheDepartamento *theDepartamentoAux = theDepartamentoPrim;
    while (theDepartamentoAux != NULL)
    {
        cout << "\t" << theDepartamentoAux->departamentoReferido->getNome() << endl;
        theDepartamentoAux = theDepartamentoAux->theDepartamentoProx;
    }
}
void ListaDepartamento::freeDepartamentos()
{
    TheDepartamento *theDepartamentoAux = theDepartamentoPrim;
    TheDepartamento *theDepartamentoAux2 = theDepartamentoPrim;
    while (theDepartamentoAux != NULL)
    {
        theDepartamentoAux = theDepartamentoAux->theDepartamentoProx;
        delete theDepartamentoAux2;
        theDepartamentoAux2 = theDepartamentoAux;
    }
}
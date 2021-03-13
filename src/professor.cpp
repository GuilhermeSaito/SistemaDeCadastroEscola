#include "professor.hpp"

Professor::Professor(int diaN, int mesN, int anoN, const char *name) : Pessoa(diaN, mesN, anoN, name)
{
    uniFiliado = NULL;
    departFiliado = NULL;
}
Professor::~Professor()
{
    uniFiliado = NULL;
    departFiliado = NULL;
}

void Professor::setUniFiliado(Universidade *uni) { uniFiliado = uni; }
void Professor::printOndTrabalha()
{
    if (uniFiliado != NULL)
        cout << nome << " trabalha na: " << uniFiliado->getNome() << endl;
    else
        cout << "Nao foi setado nenhuma universidade para " << nome << endl;
}

void Professor::setDepartFiliado(Departamento *depart) { departFiliado = depart; }
void Professor::printDepartTrabalha()
{
    // Da para puxar o nome do departamento pela Universidade, e vice versa
    if (departFiliado != NULL)
        cout << nome << " Filiado no: " << departFiliado->getNome() << endl;
    else
        cout << "Nao foi setado nenhum departamento para " << nome << endl;
}
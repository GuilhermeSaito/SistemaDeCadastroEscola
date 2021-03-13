#include "aluno.hpp"

Aluno::Aluno(int diaN, int mesN, int anoN, const char *name) : Pessoa(diaN, mesN, anoN, name)
{
    uniFiliado = NULL;
}
Aluno::~Aluno()
{
    uniFiliado = NULL;
}

void Aluno::setUniFiliado(Universidade *uni) { uniFiliado = uni; }
void Aluno::printOndEstuda()
{
    if (uniFiliado != NULL)
        cout << nome << " Estuda na: " << uniFiliado->getNome() << endl;
    else
        cout << "Nao foi setado nenhuma universidade para " << nome << endl;
}
#include "departamento.hpp"

Departamento::Departamento(const char *name) : uniFiliada(NULL)
{
    strcpy(nome, name);
}
Departamento::Departamento()
{
    uniFiliada = NULL;
    strcpy(nome, "");
}
Departamento::~Departamento()
{
    uniFiliada = NULL;
}

void Departamento::setUniversidadeFiliada(Universidade *uni) { uniFiliada = uni; }
Universidade *Departamento::getUniversidadeFiliada()
{
    if (uniFiliada == NULL)
        cout << "UniFiliada do Departamento estah NULL!!" << endl;
    return uniFiliada;
}

const char *Departamento::getNome() const { return nome; }
void Departamento::setNome(const char *name) { strcpy(nome, name); }

void Departamento::incluirDisicplina(Disciplina *dis)
{
    listDisciplina.incluirDisciplina(dis);
}
void Departamento::listarDisciplinas()
{
    cout << "Nome das Disciplinas Incluidas no departamento: " << nome << endl;
    listDisciplina.listarDisciplina();
}
/*void Departamento::listarDisciplinasTrasFrente()
{
    Disciplina *pAux = pDisciAtual;
    cout << "Nome das Disciplinas Incluidas no departamento: " << nome << endl;
    while (pAux != NULL)
    {
        cout << "\t" << pAux->getName() << endl;
        pAux = pAux->getPDisciplinaAnterior();
    }
}*/
#include "departamento.hpp"
#include "universidade.hpp"

Departamento::Departamento(const char* name) : 
    uniFiliada(NULL),
    pDisciPrim(NULL),
    pDisciAtual(NULL)
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
    pDisciPrim = NULL;
    pDisciAtual = NULL;
}

void Departamento::setUniversidadeFiliada(Universidade* uni) { uniFiliada = uni; }
Universidade* Departamento::getUniversidadeFiliada() 
{
    if (uniFiliada == NULL) cout << "UniFiliada do Departamento estah NULL!!" << endl; 
    return uniFiliada; 
}

const char* Departamento::getNome() const { return nome; }
void Departamento::setNome(const char* name) { strcpy(nome, name); }

void Departamento::setPDisciplinaPrim(Disciplina* pDisc) { pDisciPrim = pDisc; }
Disciplina* Departamento::getPDisciplinaPrim() { return pDisciPrim; }
void Departamento::setPDisciplinaAtual(Disciplina* pDisc) { pDisciAtual = pDisc; }
Disciplina* Departamento::getPDisciplinaAtual() { return pDisciAtual; }
void Departamento::incluirDisicplina(Disciplina* dis)
{
    if (dis != NULL)
    {
        if (pDisciPrim == NULL)
        {
            pDisciPrim = dis;
            pDisciAtual = dis;
        }
        else
        {
            pDisciAtual->setPDisciplinaProx(dis);
            dis->setPDisciplinaAnterior(pDisciAtual);
            pDisciAtual = dis;
        }
    }
    else
    {
        std::cerr << "Nao foi possivel colocar na fila, ponteiro nulo na classe departamento, metodo incluirDisciplina" << endl;
    }
}
void Departamento::listarDisciplinas()
{
    Disciplina* pAux = pDisciPrim;
    cout << "Nome das Disciplinas Incluidas no departamento: " << nome << endl; 
    while (pAux != NULL)
    {
        cout << "\t" << pAux->getName() << endl;
        pAux = pAux->getPDisciplinaProx();
    }
}
void Departamento::listarDisciplinasTrasFrente()
{
    Disciplina* pAux = pDisciAtual;
    cout << "Nome das Disciplinas Incluidas no departamento: " << nome << endl; 
    while (pAux != NULL)
    {
        cout << "\t" << pAux->getName() << endl;
        pAux = pAux->getPDisciplinaAnterior();
    }
}
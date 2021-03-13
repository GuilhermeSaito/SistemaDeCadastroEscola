#include "disciplina.hpp"
#include "departamento.hpp"

#include "theAluno.hpp"

Disciplina::Disciplina(int iD, const char *name, const char *areaConhe) : id(iD),
                                                                          departAssociado(NULL)
{
    strcpy(nome, name);
    strcpy(areaConhecimento, areaConhe);
}
Disciplina::~Disciplina()
{
    departAssociado = NULL;
}

void Disciplina::setId(int iD) { id = iD; }
int Disciplina::getId() { return id; }
void Disciplina::setNome(const char *name) { strcpy(nome, name); }
char *Disciplina::getName() { return nome; }

void Disciplina::setDepartamentoAss(Departamento *departAss)
{
    departAssociado = departAss;
    if (departAssociado == NULL)
        cout << "Nao eh possivel incluir essa disicplina: " << nome << " no departamento, ponteiro nulo!" << endl;
    else
        departAss->incluirDisicplina(this);
}
Departamento *Disciplina::getDepartamentoAss() { return departAssociado; }
void Disciplina::showWitchDepartIsAssociate()
{
    if (getDepartamentoAss() != NULL)
        cout << "Disciplina: " << nome << "\tAssociado com o Departamento: " << getDepartamentoAss()->getNome() << endl;
    else
        cout << "Disciplina: " << nome << "\tAssociado com NENHUM departamento: " << endl;
}

void Disciplina::incluirAluno(Aluno *aluno)
{
    listaAlunos.incluirAluno(aluno);
}
void Disciplina::listarAluno()
{
    cout << "Alunos na disciplina: " << nome << endl;
    listaAlunos.listarAluno();
}
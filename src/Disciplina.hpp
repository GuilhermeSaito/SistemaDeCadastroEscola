#ifndef DISCIPLINA
#define DISCIPLINA

class TheAluno;
class Aluno;
class Departamento;
class Disciplina
{
private:
    int id;
    char nome[50];
    char areaConhecimento[70];
    Disciplina* pDisciProx;
    Disciplina* pDisciAnterior;

    Departamento* departAssociado;

    TheAluno* theAlunoPrim;
    TheAluno* theAlunoAtual;

public:
    Disciplina(int iD = -1, const char* name = "", const char* areaConhe = "");
    ~Disciplina();

    void setId(int iD);
    int getId();
    void setNome(const char* name);
    char* getName();

    void setPDisciplinaAnterior(Disciplina* pDisc);
    Disciplina* getPDisciplinaAnterior();
    void setPDisciplinaProx(Disciplina* pDisc);
    Disciplina* getPDisciplinaProx();
    void setDepartamentoAss(Departamento* departAss);
    Departamento* getDepartamentoAss();
    void showWitchDepartIsAssociate();

    void setTheAlunoPrim(TheAluno* elem);
    TheAluno* getTheAlunoPrim();
    void setTheAlunoAtual(TheAluno* elem);
    TheAluno* getTheAlunoAtual();
    bool incluirAluno(Aluno* al);
    void listAlunos();

};

#endif
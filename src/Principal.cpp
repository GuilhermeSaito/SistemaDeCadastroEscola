#include "Principal.hpp"

Principal::Principal() // Chamada dos construtores com parametro.
                       /*Arudina(32, 14, 2044, "Arudina"),
                         Alpheratz(32, 14, 2044, "Alpheratz"),

                         uniFicticia("4rd School of Engineer"),

                         departFicticia("Department of technology"),

                         primeiraDisciplina(1, "Primeira Disciplina", "Alguma Area"),
                         segundaDisciplina(2, "Segunda Disciplina", "Alguma outra Area")*/
{
    execute();
}
Principal::~Principal()
{
    cout << "See ya Another World" << endl;
}

void Principal::execute()
{

    /*Arudina.calcIdade(1, 3, 2021);
    Alpheratz.calcIdade(1, 3, 2021);

    Arudina.printIdade();
    Alpheratz.printIdade();

    uniFicticia.incluirDepartamento(&departFicticia);

    departFicticia.setUniversidadeFiliada(&uniFicticia);
    // Set Disciplina -> Departamento
    primeiraDisciplina.setDepartamentoAss(&departFicticia);
    segundaDisciplina.setDepartamentoAss(&departFicticia);

    // Set Disciplina -> Aluno
    primeiraDisciplina.incluirAluno(&Alpheratz);

    // Set Aluno -> Universidade
    Arudina.setUniFiliado(&uniFicticia);
    Alpheratz.setUniFiliado(&uniFicticia);
    // Set Professor -> Departamento
    Arudina.setDepartFiliado(&departFicticia);

    Arudina.printOndTrabalha();
    Arudina.printDepartTrabalha();
    Alpheratz.printOndEstuda();

    uniFicticia.listarDepartamentos();
    departFicticia.listarDisciplinas();
    primeiraDisciplina.listarAluno();
    segundaDisciplina.listarAluno();

    primeiraDisciplina.showWitchDepartIsAssociate();
    segundaDisciplina.showWitchDepartIsAssociate();*/

    menu();
}

void Principal::menu()
{
    int option = -2;

    while (option != -1)
    {
        cout << "1 - Cadastrar Universidade" << endl
             << "2 - Cadastrar Departamento" << endl
             << "3 - Cadastrar Disciplina" << endl
             << "-1 EXIT" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cadastrarUniversidade();
            break;

        case 2:
            cadastrarDepartamento();
            break;

        case 3:
            cadastrarDisciplina();
            break;

        case -1:
            cout << "Thanks for using Mai Program! >.<" << endl;
            break;

        default:
            cout << "Invalid option, try again little bitch" << endl;
            break;
        }
    }
}

//-------------------------------CADASTRAR UNIVERSIDADE------------------------------
void Principal::cadastrarUniversidade()
{
    // Colocar SEM ESPACO
    char nome[50];
    cout << "Informe o nome da Universidade: ";
    cin >> nome;

    Universidade *uni = new Universidade(nome);
    listaUniversidade.incluirUniversidade(uni);
}

//-------------------------------CADASTRAR DEPARTAMENTO------------------------------
void Principal::cadastrarDepartamento()
{
}

//-------------------------------CADASTRAR DISCIPLINA------------------------------
void Principal::cadastrarDisciplina()
{
}
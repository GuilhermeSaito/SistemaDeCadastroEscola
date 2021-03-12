#include "Principal.hpp"

Principal::Principal():
    // Chamada dos construtores com parametro.
    Arudina(32, 14, 2044, "Arudina"),
    Alpheratz(32, 14, 2044, "Alpheratz"),

    uniFicticia("4rd School of Engineer"),

    departFicticia("Department of technology"),

    primeiraDisciplina(1, "Primeira Disciplina", "Alguma Area"),
    segundaDisciplina(2, "Segunda Disciplina", "Alguma outra Area")
{
    execute();
} 
Principal::~Principal()
{
    cout << "See ya Another World" << endl;
}

void Principal::execute()
{

    Arudina.calcIdade   (1, 3, 2021);
    Alpheratz.calcIdade   (1, 3, 2021);

    Arudina.printIdade();
    Alpheratz.printIdade();

    uniFicticia.setDepartamento(&departFicticia);

    departFicticia.setUniversidadeFiliada(&uniFicticia);
    //departFicticia.incluirDisicplina(&primeiraDisciplina); com o operador this no setDepart, nao precisa mais incluir assim
    //departFicticia.incluirDisicplina(&segundaDisciplina);
    primeiraDisciplina.setDepartamentoAss(&departFicticia);
    segundaDisciplina.setDepartamentoAss(&departFicticia);

    Arudina.setUniFiliado(&uniFicticia);
    Alpheratz.setUniFiliado(&uniFicticia);
    Arudina.setDepartFiliado(&departFicticia);

    Arudina.printOndTrabalha();
    Arudina.printDepartTrabalha();
    Alpheratz.printOndEstuda();

    departFicticia.listarDisciplinas();
    //departFicticia.listarDisciplinasTrasFrente();
    primeiraDisciplina.showWitchDepartIsAssociate();
    segundaDisciplina.showWitchDepartIsAssociate();
}
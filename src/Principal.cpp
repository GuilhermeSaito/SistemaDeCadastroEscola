#include "Principal.hpp"

Principal::Principal():
    // Chamada dos construtores com parametro.
    Arudina(32, 14, 2044, "Arudina"),

    uniFicticia("4rd School of Engineer"),

    departFicticia("Department of technology")
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

    Arudina.printIdade();

    uniFicticia.setDepartamento(&departFicticia);
    departFicticia.setUniversidadeFiliada(&uniFicticia);

    Arudina.setUniFiliado(&uniFicticia);
    Arudina.setDepartFiliado(&departFicticia);

    Arudina.printOndTrabalha();
    Arudina.printDepartTrabalha();
}
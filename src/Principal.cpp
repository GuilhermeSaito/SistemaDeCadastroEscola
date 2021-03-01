#include "Principal.hpp"

Principal::Principal()
{
    Pessoa Arudina(32, 14, 2044, "Arudina");
    Pessoa Einstein (14,3,1879, "Albert Einstein");
    Pessoa Newton  (4,1,1643, "Isaac Newton");

    Arudina.calcIdade   (1, 3, 2021);
    Einstein.calcIdade  (1, 3, 2021);
    Newton.calcIdade    (1, 3, 2021);

    Arudina.printIdade();
    Einstein.printIdade();
    Newton.printIdade();

    cout << "\nTeste: Arudina: " << Arudina.getIdade() << " yo\n"; 
} 
Principal::~Principal()
{
    cout << "See ya Another World" << endl;
}
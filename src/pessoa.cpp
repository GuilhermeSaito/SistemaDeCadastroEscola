#include "pessoa.hpp"

Pessoa::Pessoa(int diaN, int mesN, int anoN, const char* name):
    diaNa(diaN),
    mesNa(mesN),
    anoNa(anoN),
    idade(-1)
{
    strcpy(nome, name);
}
Pessoa::Pessoa()
{
    inicializa();
}
Pessoa::~Pessoa()
{
}
void Pessoa::inicializa(int diaN, int mesN, int anoN, const char* name)
{
    diaNa = diaN;
    mesNa = mesN;
    anoNa = anoN;
    strcpy(nome, name);
    idade = -1;
}

// Principio do Desacoplamento, O COUT PARA INFORMAR A IDADE NAO FICA JUNTO COM ESSE METODO DE CALCULO DA IDADE
void Pessoa::calcIdade(int diaAt, int mesAt, int anoAt)
{
    idade = anoAt - anoNa;
    if (mesNa < mesAt)
        idade--;
    else if ((mesNa == mesAt) && (diaNa < diaAt))
        idade--;
}
void Pessoa::printIdade()
{
    cout << "Idade de " << nome << " : " << idade << " anos." << endl;
}

int Pessoa::getIdade() { return idade; }
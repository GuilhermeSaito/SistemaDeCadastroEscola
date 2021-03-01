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
}

// Principio do Desacoplamento, O COUT PARA INFORMAR A IDADE NAO FICA JUNTO COM ESSE METODO DE CALCULO DA IDADE
void Pessoa::calcIdade(int diaAt, int mesAt, int anoAt)
{
    idade = anoAt - anoNa;
    if (mesNa < mesAt)
        idade--;
    else if ((mesNa == mesAt) && (diaNa < diaAt))
        idade--;
    
    // Se tivesse esse, ESTARIA FERINDO O PRINCIPIO DO DESACOPLAMENTO 
    // cout << "Idade de " << nome << " : " << idade << " anos." << endl;
}
void Pessoa::printIdade()
{
    cout << "Idade de " << nome << " : " << idade << " anos." << endl;
}

void Pessoa::setUniFiliado(Universidade* uni) { uniFiliado = uni; }
void Pessoa::printOndTrabalha() 
{
    if (uniFiliado != NULL)
        cout << nome << " trabalha na: " << uniFiliado->getNome() << endl;
    else
        cout << "Nao foi setado nenhuma universidade para " << nome << endl;
}

void Pessoa::setDepartFiliado(Departamento* depart) { departFiliado = depart; }
void Pessoa::printDepartTrabalha() 
{
    // Da para puxar o nome do departamento pela Universidade, e vice versa
    if (departFiliado != NULL)
        cout << nome << " Filiado no: " << departFiliado->getNome() << endl;
    else
        cout << "Nao foi setado nenhum departamento para " << nome << endl;
}

int Pessoa::getIdade() { return idade; }
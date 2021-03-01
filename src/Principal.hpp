#ifndef PRINCIPAL
#define PRINCIPAL

/*
    Uma ideia para o Principio da Coesao e Desacoplamento, seria a do chuveiro antigo.

    
    Nao faz sentido, em um dia frio, ter que diminuir a vasao da agua para aumentar a temperatura.
    
    Se seguisse o Principio do Desacoplamento:
        O registro para a vasao de agua, seria INDEPENDENTE do registro para o aumento da temperatura.

    E seguindo o principio da Coesao:
        Nao faria sentido separar os 2 registros, mas o registro da temperatura estar NA COZINHA, do outro lado
        do banheiro.

    
    E, a ideia do purismo de Orientacao a Objeto, eh que o programa deve comecar em um objeto.
    Mas, como em C/C++ tem que comecar pelo main, simplesmente instanciamos uma classe, nesse caso, o Principal,
        Para "começar" por esse objeto. 
*/

#include "pessoa.hpp"

class Principal
{
private:
    // Composicao, chama a construtora sem parametros.
    // eh COMPOSICAO, POIS SEM O PRINCIPAL, PESSOA E UNIVERSIDADE NAO EXISTE
    Pessoa Arudina;

    Universidade uniFicticia;

    Departamento departFicticia;

public:
    Principal();
    ~Principal();

    void execute();
};

#endif
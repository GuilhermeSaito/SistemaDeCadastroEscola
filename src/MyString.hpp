#pragma once

// Incluindo isso soh pra pegar alguns metodos e.e
#include <string.h>

class MyString
{
private:
    char *maiString;
    int tam;

    void setString(const char *s);

public:
    MyString(const char *algo = "");
    ~MyString();

    const char *getString();

    void operator=(const char *s);
    /*
    Ao utilizar o atributo pStr alocado dinamicamente, deve-setomar cuidado para que nenhuma função 
    receba astringem passagem por valor. Isto porque a variável estáticacriada irá copiar o endereço 
    daquela passada comoparâmetro e terá sua memória alocada dinâmicamentedesalocada pela sua destrutora 
    ao sair do seu escopo.
    */
    void operator=(MyString &s);
    bool operator==(MyString &s);
    bool operator!=(MyString &s);
    char *operator+(MyString &s);
    char *operator+(char *str);
    char operator[](int index);
};
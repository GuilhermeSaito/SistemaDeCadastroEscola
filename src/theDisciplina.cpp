#include "theDisciplina.hpp"

TheDisciplina::TheDisciplina()
{
    disciplinaReferida = NULL;
    theDisciplinaProx = NULL;
    theDisciplinaAnterior = NULL;
}
TheDisciplina::~TheDisciplina()
{
    disciplinaReferida = NULL;
    theDisciplinaProx = NULL;
    theDisciplinaAnterior = NULL;
}
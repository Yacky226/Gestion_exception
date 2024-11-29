#include "Traitement.h"
#include"Exceptions.h"
#include"Logic_error.h"
#include "Runtime_error.h"
#include"Underflow_error.h"
#include"Overflow_error.h"
#include"Out_of_range.h"
#include"Length_error.h"
#include"Invalid_argument.h"

Traitement::Traitement(int a, int b, int int1, int int2):a(a),b(b),intervalpos(int1),intervalneg(int2)
{
}

int Traitement::add() const
{
    if (a < 0 || b < 0)
        throw Invalid_argument("Valeur negative");
    return a+b;
}

int Traitement::mul() const
{
    if (a < -10 || b>100)
        throw Out_of_range("Valeur Hors du l'interval de traitement");
    return a*b;
}

bool Traitement::bonneinterval() const
{
    if (intervalpos < 0 && intervalneg> 0)
        throw Length_error("Mauvais taille d'intervalle");
    return true;
}

int Traitement::divide() const
{
    if (b == 0)
        throw Logic_error("Division par Zero");
    if (intervalpos == 0)
        throw Underflow_error("Valeur nulle du premier operateur");
    if (a > 100 && b > 100)
        throw Overflow_error("Valeur depasse la limite autorise");
    return a/b;
}

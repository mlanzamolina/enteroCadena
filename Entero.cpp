#include "Entero.h"
std::istream& operator>>(std::istream& in ,Entero &ent)
{
    in>>" ";
    in>>ent;
    
}
Cadena Cadena::operator+(const Entero& ent)
{
    cadena*=ent;
}
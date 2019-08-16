#include "Entero.h"

Entero::Entero():numero(0){  }

int Entero::getNumero(){
    return this->numero;
}



std::istream& operator>>(std::istream& in, Entero& e){
    in>>e.numero;

    return in;
}

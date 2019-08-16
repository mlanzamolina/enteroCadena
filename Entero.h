#ifndef ENTERO_H
#define ENTERO_H
#include <iostream>

class Entero{
    
friend std::istream& operator>>(std::istream&, Entero&);


 private: 
    
int numero;
public:
    Entero();
    int getNumero();
    
    
};


#endif
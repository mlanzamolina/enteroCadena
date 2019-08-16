#ifndef CADENA_H
#define CADENA_H
#include <iostream>
#include "Entero.h"
using namespace std;

class Cadena{

friend Cadena operator+(const Cadena&, const Cadena&);
friend Cadena operator+(const Cadena&, Entero&);
friend std::ostream& operator<<(std::ostream&, const Cadena&);

private:
    char *cadena;

public:
    Cadena(const char*);
    void setCadena(char*);
    Cadena();    
    ~Cadena();
};


#endif
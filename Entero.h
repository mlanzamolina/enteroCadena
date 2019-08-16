#include <iostream>
#include "Cadena.h"
class Entero
{
    friend std::istream & operator>>(std::istream&,Entero &);
    private:
      int valor;


    public:
       Entero(void);
        Cadena operator +(const Entero& other);
        Entero():valor(0){}
        //~Entero



};
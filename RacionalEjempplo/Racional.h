#include <iostream>
class Racional
{
 
    public:
  Racional():numerador(1), denominador(1) {}
  Racional(int _x, int _y):numerador(_x),denominador(_y){}
  Racional operator +(const Racional& r);
  Racional operator -(const Racional& r);
  Racional operator *(const Racional& r);
  Racional operator /(const Racional& r);
  void reducir();
  void imprimir();
  void FloatImprimir();
  

    private:
    int numerador;
    int denominador;
    
    
  int getMenorOperando();


};



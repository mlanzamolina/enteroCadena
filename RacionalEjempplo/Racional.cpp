#include "Racional.h"


//Sobrecarga operator +
Racional Racional::operator+(const Racional& r1)
{  
    
    if (r1.denominador!= denominador)

    {
        numerador *=r1.denominador;
        numerador+=(r1.numerador*denominador);
        denominador*=r1.denominador;
    }else{
        numerador+=r1.numerador;
    }
    reducir();
    
    return *this;
}
//Sobrecarga operator -
Racional Racional:: operator -(const Racional &r1){

    if (r1.denominador!=denominador)
    {
        numerador*=r1.denominador;
        numerador -=(r1.numerador*denominador);
        denominador*=r1.denominador;
    }
    else
    {
       numerador -= r1.numerador;
    }
    reducir();
    
    return *this;
}
//Sobrecarga operador *
Racional Racional::operator*(const Racional& r1)
{
    
    numerador=numerador*r1.numerador;
    denominador=denominador*r1.denominador;
    reducir();
    
    return *this;
}
//Sobrecarga operador /
Racional Racional::operator/(const Racional& r1)
{
    
    numerador =numerador*r1.denominador;
    denominador=denominador *r1.numerador;
    reducir();
    
    return *this;
}
//Funcion imprimir la fraccion insertar reducir
void Racional::imprimir()
{
    if (denominador==0)
    {
        std::cout<<"\nNo se puede dividir entre 0\n";
       return;

    }
    
    std::cout<<"\nFraccion: "<<numerador<<"/"<<denominador<<"\n";

}
void Racional::FloatImprimir()
{
reducir();

std::cout<<"\nFloatImprimir: "<<(float)numerador/(float)denominador<<"\n";

}
//Sacar el menor
int Racional::getMenorOperando() 
{
	return (numerador < denominador ? numerador : denominador);

}
//reduce de acuerdo al menor 
void Racional::reducir() 
{
    

	for (int i = 2; i <= getMenorOperando(); i++)
	{
		if (numerador%i==0&&denominador%i==0)
		{
			numerador= numerador/ i;
			denominador= denominador/ i;
			i = 1;
		}
	}
}
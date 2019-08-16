#include "Cadena.h"
#include "Entero.h"

int main(){
    Cadena c1("Hola Mundo!");
    Entero e1;
    cout<<"\nIngrese un numero sin decimales: ";
    cin >> e1;
    Cadena c2("Desde Programacion");
    Cadena c3=c1+c2+e1;
    cout<<c3;
}
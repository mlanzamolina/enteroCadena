#include "Cadena.h"
#include "Cadena.h"

int main(){
    Cadena c1("Hola Mundo");
    Entero e1;

    cout<<"Ingrese un numero sin decimales: ";
    cin>>e1;
    

    Cadena c2("Desde Programacion: ");
    std::cout<<"\n";
    Cadena c3=c1+c2+e1;
    cout<<c3;

}
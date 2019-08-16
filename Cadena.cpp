#include "Cadena.h"
#include <cstring>
using namespace std;

ostream& operator<<(ostream& out, Cadena&str)
{ 
    
    
       out<<str;
    
    return ;
    
}
Cadena Cadena::operator+(const Cadena& other)
{
  Cadena str;
  char * resultado; 
  resultado=cadena+other;

}
Cadena::Cadena(char*c1)
{
    cadena=new char[strlen(c1)];
    strcpy(cadena,c1);
}
Cadena::Cadena(void){
    Cadena cadena=new char[1];
    strcpy(Cadena,"");
}
Cadena::~Cadena()
{
    delete cadena;
}

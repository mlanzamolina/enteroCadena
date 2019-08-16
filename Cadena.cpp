#include "Cadena.h"
#include "Entero.h"
#include <cstring>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

Cadena::Cadena(){
    cadena=new char[1];
    strcpy(cadena," ");
}

Cadena::Cadena(const char* str){
    cadena=new char[strlen(str)];
    strcpy(cadena,str);
}

Cadena::~Cadena(){
    delete cadena;
}

void Cadena::setCadena(char* primero){
    this->cadena;
}

Cadena operator+(const Cadena &str1, const Cadena &str2)
{
    Cadena temp;

    temp.cadena = new char[strlen(str1.cadena) + strlen(str2.cadena) + 1];
    strcpy(temp.cadena, str1.cadena);
    strcat(temp.cadena, str2.cadena);

    return temp;
}

Cadena operator+(const Cadena &str,Entero &num)
{
    Cadena temp;
    std::string tuc = std::to_string(num.getNumero());
    const char * cchar = tuc.c_str();
    strcpy(temp.cadena,str.cadena);
    strcat(temp.cadena,cchar);
    
    return temp;
    
}

std::ostream& operator<<(std::ostream& out, const Cadena&c){
out<<"("<<c.cadena<<")";

return out;
}


#include <iostream>
class Cadena
{
    friend std::ostream& operator<<(std::ostream&, const Cadena&);
    private:
    char * cadena;
    int size;
    

    public:
    Cadena(char*,int size);
    Cadena(void);
    ~Cadena();
    //sobrecargar operador + y <<  
    Cadena Cadena::operator+(const Cadena& other);
   




    


};

#include <iostream>
#include "Racional.h"
using namespace std;
int main()
{
    Racional r1(2,8);
    Racional r2(4,8);
    Racional r3;
    Racional r4(1,0);
    for (int i = 0; i < 5; i++)
    {
        if (i==0)
        {
            r3=r1+r2;
        }else if (i==1)
        {
            r3=r1-r2; 
        }else if (i==2)
        {
            r3=r1*r2; 
        }else if(i==3)
        {
           r3=r1/r2;
        }else
        {
            r3=r2+r2-r1;
        }
        r3.imprimir();
    }
    r4.imprimir();
    r1.FloatImprimir();

    
    
    
    
}
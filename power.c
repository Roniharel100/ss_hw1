    #include "myMath.h"
    #define E 2.718281828

double Exponent(int x)
{
double temp=E;
if(x==0)
return 1;
for(int i=1; i<x; i++)
    {
    temp= temp*E;
    }
return temp;
}

double Power (double x, int y)
{
double temp=x;
if(y==0)
return 1;
for(int i=1; i<y; i++)
{
temp= temp*x;
}
return temp;
}
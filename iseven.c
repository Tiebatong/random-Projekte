#include <stdio.h>



int iseven(int y)
{

    
    int x = 1;
    if ((y | x) != y)
    {
        return 1;
    }
    else
    {
        return 0;
    }   
}

int modulo(int x, int y) 
{
    //x % y
    int z = x / y;
    int n = z * y;
    int m = x - n;
    return m;
}



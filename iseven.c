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
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;
    long int b;
    double c;
    float d;
    short int e;
    long double g;

    printf("Laenge von int: %d\n", sizeof(a));
    printf("Laenge von long int: %d\n", sizeof(b));
    printf("Laenge von double: %d\n", sizeof(c));
    printf("Laenge von float: %d\n", sizeof(d));
    printf("Laenge von short int: %d\n", sizeof(e));
    printf("Laenge von long double: %d\n", sizeof(g));
    system("pause");
    return 0;
}
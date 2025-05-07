#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int gewonnen = 0;
    int zufallszahl_1;
    int zufallszahl_2;
    int i;
    int j;
    char x = '_';
    char matrix[3][3] = 
    { 
        {x, x, x}, 
        {x, x, x}, 
        {x, x, x} 
    };




    while (!gewonnen)
    {

        int weiter = 1;

        printf("Sie werden durch x representiert\nBitte machen sie ihren zug:\n");
        scanf("%d %d", &i, &j);
        matrix[i][j] = 'x';
        while (weiter)
        {
            srand((unsigned int)time(NULL));
            zufallszahl_1 = rand() % 3;
            zufallszahl_2 = rand() % 3;
            if (matrix[zufallszahl_1][zufallszahl_2] == '_')
            {
                matrix[zufallszahl_1][zufallszahl_2] = 'o';
                weiter = 0;
            }

    
            
        }
        printf("%c %c %c\n", matrix[0][0], matrix[0][1], matrix[0][2]);
        printf("%c %c %c\n", matrix[1][0], matrix[1][1], matrix[1][2]);
        printf("%c %c %c\n", matrix[2][0], matrix[2][1], matrix[2][2]);


    }
   
 
    system("pause");
    return 0;
}
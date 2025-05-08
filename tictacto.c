#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int wincondition(char matrix[3][3], int spieler);

int main(void)
{

    int gewonnen = 0;
    int zufallszahl_1;
    int zufallszahl_2;
    int i;
    int j;
    int runden = 0;
    char x = '_';
    char matrix[3][3] = 
    { 
        {x, x, x}, 
        {x, x, x}, 
        {x, x, x} 
    };
    printf("So geben sie ihren move an:\n");
    printf("   0 1 2\n   - - -\n 0|\n 1|\n 2|\n");

    while (!gewonnen)
    {

        int weiter1 = 1;
        int weiter2 = 1;
        printf("Sie werden durch x representiert\nBitte machen sie ihren zug:\n");

        while (weiter2)
        {
            
            scanf("%d %d", &i, &j);
            if (matrix[i][j] == '_')
            {
                matrix[i][j] = 'x';
                weiter2 = 0;
            }
            else 
            {
                printf("Ungültiger move, bitte versuchen sie es erneut:\n");
            }
              
        }

        runden++;
        printf("\n%c %c %c\n", matrix[0][0], matrix[0][1], matrix[0][2]);
        printf("%c %c %c\n", matrix[1][0], matrix[1][1], matrix[1][2]);
        printf("%c %c %c\n\n", matrix[2][0], matrix[2][1], matrix[2][2]);
        if (wincondition(matrix, 1) == 1) 
        {
            printf("Du hast gewonnen!\n");
            gewonnen = 1;
            break;
        }
        while (weiter1)
        {
            srand((unsigned int)time(NULL));
            zufallszahl_1 = rand() % 3;
            zufallszahl_2 = rand() % 3;
            if (matrix[zufallszahl_1][zufallszahl_2] == '_')
            {
                matrix[zufallszahl_1][zufallszahl_2] = 'o';
                weiter1= 0;
            }

    
            
        }
        runden++;
        printf("\n%c %c %c\n", matrix[0][0], matrix[0][1], matrix[0][2]);
        printf("%c %c %c\n", matrix[1][0], matrix[1][1], matrix[1][2]);
        printf("%c %c %c\n\n", matrix[2][0], matrix[2][1], matrix[2][2]);
        if (wincondition(matrix, 2) == 1) 
        {
            printf("Der Gegner hat gewonnen!\n");
            gewonnen = 1;
        }
        if (runden == 9 && !gewonnen)
        {
            printf("Unentschieden\n");
            gewonnen = 1;
            break;
        }


    }
   

    
    system("pause");
    return 0;
}

int wincondition(char matrix[3][3], int spieler)
{
    
    char z = 'x';
    if (spieler == 2)
    {
        z = 'o';
    }
    // prüft horizontale Reihen
    if (matrix[0][0] == z && matrix[0][1] == z && matrix[0][2] == z) { return 1;}
    else if (matrix[1][0] == z && matrix[1][1] == z && matrix[1][2] == z) { return 1;}
    else if (matrix[2][0] == z && matrix[2][1] == z && matrix[2][2] == z) { return 1;}
    // prüft vertikale Reihern
    else if (matrix[0][0] == z && matrix[1][0] == z && matrix[2][0] == z) { return 1;}
    else if (matrix[0][1] == z && matrix[1][1] == z && matrix[2][1] == z) { return 1;}
    else if (matrix[0][2] == z && matrix[1][2] == z && matrix[2][2] == z) { return 1;}
    // prüft diagonale Reihen
    else if (matrix[0][0] == z && matrix[1][1] == z && matrix[2][2] == z) { return 1;}
    else if (matrix[0][2] == z && matrix[1][1] == z && matrix[2][0] == z) { return 1;}
    

}
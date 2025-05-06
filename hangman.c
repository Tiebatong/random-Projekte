#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{

    int versuche = 5;
    char loesungs_wort[] = "auto";
    int laenge = strlen(loesungs_wort);
    char zwischenergebniss[laenge];
    for (int i = 0; i < laenge; i++)
        {
            zwischenergebniss[i] = '_';
        }
    while (versuche > 0){
        
        int richtiger_versuch = 0;
        int wincounter = 0;
        char nutzer_eingabe;
        printf("\nGeben sie hier einen Buchstaben ein:");
        scanf(" %c", &nutzer_eingabe);
        for (int i = 0; i < laenge; i++)
        {
           if (nutzer_eingabe == loesungs_wort[i])
           {
            zwischenergebniss[i] = loesungs_wort[i];
            richtiger_versuch = 1;
           }
           
        }
        printf("%.4s\n", zwischenergebniss);
        if (!richtiger_versuch)
           {
            versuche--;
           }

        if (!versuche)
        {
            printf("Verloren, du hast keine Versuche mehr.\n");
        }
        for (int i = 0; i < laenge; i++)
        {
           if (zwischenergebniss[i] == loesungs_wort[i])
           {
                wincounter++;
           }
        }
        if (wincounter == 4)
        {
            printf("Gewonnen, du hast das richtige Wort erraten.\n");
            break;
        }

    }

    
    
    
    
    system("pause");
    return 0;
}
#include <string.h> 
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

    char Loesungswort[] = "blume";
    char Nutzereingabe[6];
    char falsche_stelle[21];
    char falscher_buchstabe[21];
    int indexfs = 0;
    int indexfb = 0;
    
    for (int runde = 0; runde < 5; runde++)
    {
        
        printf("geben sie ihr Wort ein: \n");
        scanf("%5s", Nutzereingabe);
        printf("\n");
        int punkte = 0;
        
        
        

        

        for (int i = 0; i < 5; i++)
        {
            
            if (Loesungswort[i] == Nutzereingabe[i]) // Buchstabe ist an richtiger Stelle
            {
                printf("\033[1;32m%c", Nutzereingabe[i]);
                punkte++;

            } 
            else if (strchr(Loesungswort, Nutzereingabe[i]) != NULL) // Buchstabe an falscher Stelle
            {
                printf("\033[1;33m%c", Nutzereingabe[i]); 
                
                if (strchr(falsche_stelle, Nutzereingabe[i]) == NULL) // prüft ob der Buchstabe schon im array ist
                {
                    falsche_stelle[indexfs] = Nutzereingabe[i];
                    indexfs++;
                    falsche_stelle[indexfs] = '\0';
                }
                
                
            }
            else // Buchstabe kommt nicht vor
            {
                printf("\033[1;31m%c", Nutzereingabe[i]); 
                
                if (strchr(falscher_buchstabe, Nutzereingabe[i]) == NULL) // prüft ob der Buchstabe schon im array ist
                {
                    falscher_buchstabe[indexfb] = Nutzereingabe[i];
                    indexfb++;
                    falscher_buchstabe[indexfb] = '\0';
                }
                
                
            }
            
        }
        printf("\033[0m\n"); // Setzt Farbe zurück
        printf("An falscher Stelle: %s\n", falsche_stelle);
        printf("KOmmt nicht vor: %s\n", falscher_buchstabe);

        if (punkte == 5)
            {

                printf("\nGewonnen!\n");
                break;
            }
       
    }
    

    system("pause");
    return 0;
}

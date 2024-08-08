#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int nbLignes;
    int i, j;
    printf("Veuillez saisir la nombre de lignes du texte : ");
    scanf("%d", &nbLignes);

    getchar();  // Consomme le '\n' restant

    char TMot[nbLignes][1000];

    for (i = 0; i < nbLignes; i++){
        printf("Donner la phrase numero %d : \n", i+1);
        //fgets(TMot[i], sizeof(TMot[i]), stdin);
        gets(TMot[i]);
        TMot[i][strcspn(TMot[i], "\n")] = '\0';  // Enlever le '\n' à la fin de chaque ligne

    }
    printf("Resultat de inverse est : \n");
    for (i = 0; i < nbLignes; i++){
        for(j = strlen(TMot[i])-1 ; j >= 0 ; j--){
            putchar(TMot[i][j]);
        }
        putchar('\n');
    }

    return 0;
}

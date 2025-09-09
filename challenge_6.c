#include <stdio.h>
#include <string.h>
int main(){
     char klima[100];

    printf("Saisir une chaine de caractere  :\n");
    fgets(klima, sizeof(klima), stdin);
    klima[strcspn(klima, "\n")] = '\0';
    int len = strlen(klima);
    char herf;
    printf("saisir votre caractere a recherche :\n");
    scanf(" %c",&herf);
    int conteur=0;
    for (int i = 0;klima[i]!='\0'; i++)
    {
        if (klima[i]==herf)
        {
           conteur++;
        }
        

       
    }
    printf("il y a %d de caracter %c",conteur,herf);
    












    return 0;
}
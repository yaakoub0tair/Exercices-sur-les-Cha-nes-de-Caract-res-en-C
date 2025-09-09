#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
     char klima[100];

    printf("Saisir une chaine de caractere  :\n");
    fgets(klima, sizeof(klima), stdin);
    klima[strcspn(klima, "\n")] = '\0';
    for (int i = 0; klima[i] !='\0'; i++)

    {
        klima[i]=tolower(klima[i]);
        
    }
    printf("En miniscule : %s\n", klima);
    


}
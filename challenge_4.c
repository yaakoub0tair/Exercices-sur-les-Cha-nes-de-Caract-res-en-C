#include <stdio.h>
#include <string.h> 
int main(){
    char klima[100];
    char klma[100];

    printf("Saisir le 1 er  chaine de caractere  :\n");
    fgets(klima, sizeof(klima), stdin);

    printf("Saisir la 2eme chaine de caractere  :\n");
    fgets(klma, sizeof(klma), stdin);

    
    klima[strcspn(klima, "\n")] = '\0';
    klma[strcspn(klma, "\n")] = '\0';
    
    if (strcmp(klima, klma) == 0) {
        printf("Les chaines sont egal .\n");
    } else {
        printf("Les chaines sont differents.\n");
    }
    
    
    }




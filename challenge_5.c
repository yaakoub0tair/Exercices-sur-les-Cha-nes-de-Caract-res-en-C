#include <stdio.h>
#include <string.h> 
int main(){
    char klima[100];
    char klma[100];

    printf("Saisir une chaine de caractere  :\n");
    fgets(klima, sizeof(klima), stdin);
    klima[strcspn(klima, "\n")] = '\0';
    int len = strlen(klima);
    for(int i = 0; i < len; i++) {
        klma[i] = klima[len - 1 - i];
    }
    klma[len] = '\0';  

    printf("La chaine inversee est : %s\n", klma);



    
    
    
    }




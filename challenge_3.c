#include <stdio.h>
#include <string.h> 
int main(){
    char klima[100];
    char klma[100];

    printf("Saisir une chaine de caractere a CONCATENATION :\n");
    fgets(klima, sizeof(klima), stdin);

    printf("Saisir la 2eme chaine de caractere a CONCATENATION :\n");
    fgets(klma, sizeof(klma), stdin);

    
    klima[strcspn(klima, "\n")] = '\0';
    klma[strcspn(klma, "\n")] = '\0';

   
    strcat(klima, klma);

    printf("C'est ta chaine finale CONCATENEE : %s\n", klima);

    return 0;
}

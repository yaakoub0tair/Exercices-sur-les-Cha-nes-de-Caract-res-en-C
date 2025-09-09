#include <stdio.h>
#include <string.h>
int main(){
    char jomla[100];
    char klima[100];
    printf("donner votre chaîne de caractères principale :\n ");
    fgets(jomla,sizeof(jomla),stdin);
    jomla[strcspn(jomla,"\n")]='\0';

    printf("donner votre sous chaine :\n");
    fgets(klima,sizeof(klima),stdin);
    klima[strcspn(klima,"\n")]='\0';


    if (strstr(jomla, klima) != NULL) {
        printf("Sous chaine trouvee .\n");
    } else {
        printf("Sous chaine non trouvee .\n");
    }











    return 0;
}
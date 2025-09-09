#include <stdio.h>
#include <string.h>

int main(){
     char klima[100],klmablaespace[100];
     int j=0;

    printf("Saisir une chaine de caractere  :\n");
    fgets(klima, sizeof(klima), stdin);
    klima[strcspn(klima, "\n")] = '\0';
    for (int i = 0; i < strlen(klima); i++)
    {
        if (klima[i]!=' '){
        klmablaespace[j]=klima[i];
         j++;
       }
      
    }
    printf("votre chaîne de caractères sans espace :%s ",klmablaespace);
    
    

    
    
    
    }
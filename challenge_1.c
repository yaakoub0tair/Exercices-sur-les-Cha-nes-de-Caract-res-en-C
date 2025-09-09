#include <stdio.h>
int main(){
    char klima[100];
    printf("siaisr une chaine de caractere a afficher :\n");
    fgets(klima,sizeof(klima),stdin);
    printf("C'est ton chaine de caractere : %s\n",klima);





    return 0;
}
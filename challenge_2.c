#include <stdio.h>
#include <string.h>
int mystrlen(char klimat[]){
    int i=0;
    while (klimat[i]!='\0')
    {
        ++i;
    }

return i;
}
int main(){
     char klimat[100];

    printf("siaisr une chaine de caractere a afficher :\n");
    fgets(klimat,sizeof(klimat),stdin);
    
    int i=mystrlen(klimat);
    printf("length sans la fonction :%d\n",i);
    printf("length avec la fonction :%d",strlen(klimat));









    return 0;
}
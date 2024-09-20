#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str;
    int cont1 = 0,cont2 =0;
    FILE *arq;
        if((arq=fopen("teste.txt", "r"))== NULL){
            printf("Erro\n");
            exit(1);
        }
    do{
       str = getc(arq);
        if(str == 'a'||str == 'e'||str == 'i'||str == 'o'||str == 'u')
            cont1  ++;
        else 
            cont2 ++;  
    }while(str != EOF);
    printf("%d %d", cont1, cont2);
}
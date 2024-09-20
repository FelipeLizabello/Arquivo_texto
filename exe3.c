#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char str;
    int flag= 1;

    FILE *arq;
        if((arq=fopen("teste.txt", "r"))== NULL){
            printf("Erro\n");
            exit(1);
        }
    while((str = getc(arq)) != EOF){
        if(flag == 1){
            putchar(toupper(str));
            flag =0;
        }
        else
            putchar(str);
        if(str == ' ' || str =='\n'){
            flag = 1;
        }
    }
    fclose(arq);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char arquivo[30];
    char carac;
    FILE *arq;
        
        printf("Digite o nome do arquivo\n");
        fgets(arquivo, 30, stdin);
        arquivo[strcspn(arquivo, "\n")] = '\0';

    if((arq=fopen(arquivo, "r")) == NULL){
        printf("Erro\n");
        exit(1);
    }
    do{
        carac = getc(arq);
        printf("%c", carac);  
    }while (carac != EOF);
    fclose(arq);
}
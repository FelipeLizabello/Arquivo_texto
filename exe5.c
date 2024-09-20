#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void num(char nome_arq[]){
    char str[100], palavra_temp[20];
    int cont = 0;
    FILE *arq;
    
    if((arq=fopen(nome_arq, "r"))==NULL){
        printf("ERRO\n");
        exit(1);
    }
    fflush(stdin);
    printf("Digite uma palavra para busca\n");
    fgets(palavra_temp, 20, stdin);
    palavra_temp[strcspn(palavra_temp, "\n")] = '\0';

    while(fscanf(arq, "%s", str)!= EOF){
        if(strcmp(str, palavra_temp)==0)
            cont++;
    }
    fclose(arq);        
    printf("%d", cont);
    
}

int main(){
    FILE *arq;
    char nome_arq[40];
    char palavra[99];
    scanf("%s", nome_arq);
    if((arq=fopen(nome_arq, "w"))==NULL){
        printf("ERRO\n");
        exit(1);
    }
    printf("Digite uma palavra\n");
    getchar();
    fgets(palavra, 99, stdin);
    palavra[strcspn(palavra, "\n")] = '\0';
    
    fprintf(arq, "%s", palavra);
    fclose(arq);
    
    num(nome_arq);
}
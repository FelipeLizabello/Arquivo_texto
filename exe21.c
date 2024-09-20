#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, media;
    char nome[20];
    FILE *arq;
        if((arq=fopen("alunos_notas2.txt", "r"))==NULL){
            printf("EROO\n");
            exit(1);
        }
    while(fscanf(arq, "%[^;]; %f; %f;", nome, &nota1, &nota2) != EOF){
        media = (nota1 +nota2) / 2;
        printf("%s %.2f %.2f %.2f", nome, nota1, nota2, media);
            if(media>=5){
                printf(" Aprovado\n");
            }else
                printf(" Reprovado\n");
    }
}
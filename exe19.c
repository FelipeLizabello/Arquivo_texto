#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2,media;
    char nome [50];
    FILE *arq;
        if((arq=fopen("alunos_notas.txt", "r"))==NULL){
            printf("ERRO A\n");
            exit(1);
        }
     while (fscanf(arq, "%[^;]; %f; %f;", nome, &nota1, &nota2) != EOF) {
        media = (nota1 + nota2) / 2;
        printf("%s %.1f %.1f %.2f ", nome, nota1, nota2, media);
        if(media>=5)
        printf("Aprovado\n");
        else
        printf("Reprovado\n");
    }
    fclose(arq);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 30

typedef struct{
    char nome[30];
    char sexo;
    char cor_olhos;
    float altura;
    float peso;
}MODELO;

void Abre_arquivo(MODELO modelo){
    FILE *arq;
    char nome_arquivo[MAX];
    if (modelo.sexo == 'F') {
        strcpy(nome_arquivo, "Modelos_F.bin");
    } else if (modelo.sexo == 'M') {
        strcpy(nome_arquivo, "Modelos_M.bin");
    } else {
        printf("Erroo sexo inválido para %s\n", modelo.nome);
        return; 
    }

    if ((arq = fopen(nome_arquivo, "ab")) == NULL) {
        printf("ERRO ao abrir %s\n", nome_arquivo);
        exit(1);
    }
    fwrite(&modelo, sizeof(MODELO), 1, arq);
    fclose(arq);
}

int main(){
    char nome_arq1[30];
    MODELO modelo;
    FILE *arq1;
        
        printf("Digite o nome do arquivo\n");
        scanf("%s", nome_arq1);
        printf("Abrindo...\n");
            if((arq1=fopen(nome_arq1, "r"))==NULL){
                printf("Erro ao abrir o arquivo\n");
                exit(1);
            }
        while(fscanf(arq1, "%[^;];%c;%c;%f;%f;", modelo.nome,&modelo.sexo,&modelo.cor_olhos,&modelo.altura,&modelo.peso)==5){
            Abre_arquivo(modelo);  
        }
fclose(arq1);
printf(":)\n");
}
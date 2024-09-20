#include <stdio.h>
#include <stdlib.h>
#define MAX 30

typedef struct{
    char nome[30];
    char sexo;
    char cor_olhos;
    float altura;
    float peso;
}MODELO;

int main(){
    FILE *arq;  
    MODELO modelo;
    if((arq=fopen("Modelos_F.bin","rb"))==NULL){
        printf("ERRO\n");
        exit(1);
    }
        while(fread(&modelo,sizeof(MODELO), 1, arq)==1){
        printf("Nome: %s\n", modelo.nome);
        printf("Sexo: %c\n", modelo.sexo);
        printf("Cor dos olhos: %c\n", modelo.cor_olhos);
        printf("Altura: %.2f m\n", modelo.altura);
        printf("Peso: %.2f kg\n", modelo.peso);
        printf("-------------------------\n");
    }
    fclose(arq);

}
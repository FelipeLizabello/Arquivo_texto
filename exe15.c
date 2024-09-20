#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
    FILE *arq1, *arq2;
    char v1[20], v2[20];
    char str1[100], str2[100];
    char *ptr;

    printf("Arq 1\n");
    scanf("%s", v1);
        if((arq1=fopen(v1, "r"))==NULL){
            printf("Erro\n");
            exit(1);
        }
    printf("ARQ 2\n");
    scanf("%s", v2);
        if((arq2=fopen(v2, "w"))==NULL){
            printf("Erro\n");
            exit(1); 
        }
    while(fgets(str1, sizeof(str1), arq1) != NULL){
        while ((ptr = strstr(str1, "padaria"))!=NULL){
            strncpy(str2, str1, ptr - str1);
            strcat(str2, "acougue");
            strcat(str2, ptr + strlen("padaria"));
            strcpy(str1, str2);
        }
        fprintf(arq2, "%s\n", str1);
    }
    fclose(arq1);
    fclose(arq2);
}

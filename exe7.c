#include <stdio.h>
#include <stdlib.h>
#define MAX 30
#define MAX_temp 100

int main(){
    FILE *arq1, *arq2,*arq3;
    char str1[MAX], str2[MAX], str3[MAX];
    char temp[MAX_temp];

    printf("Nome dos arquivos\n");
    scanf("%s %s %s", str1, str2, str3);
        if((arq1=fopen(str1, "r"))==NULL){
            printf("ERROO\n");
            exit(1);
        }    
        if((arq2=fopen(str2, "r"))==NULL){
            printf("ERRO2\n");
            exit(1);
        }
        if((arq3=fopen(str3, "w"))==NULL){
            printf("ERRO3\n");
            exit(1);
        }
        
        while(fgets(temp, MAX_temp, arq1) != NULL){
            fputs(temp, arq3);
        }
        while(fgets(temp, MAX_temp, arq2) != NULL){
            fputs(temp, arq3);
        }

    fclose(arq1);
    fclose(arq2);
    fclose(arq3);
    
}
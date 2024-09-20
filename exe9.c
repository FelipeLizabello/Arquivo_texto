#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 30
#define MAX_temp 100

int main(){
    int m,n;
    int v[100][100];
    int i,j;
    char str[MAX];
    FILE *arq;
        
        printf("Digite o nome do arquivo para abrir\n");
        scanf("%s", str);
        if((arq=fopen(str, "r"))==NULL){
            printf("ERROO\n");
            exit(1);
        }
        if(fscanf(arq, "%d %d", &m,&n) != 2){
            printf("Erro ao ler as dimensoes da matriz :(\n");
            fclose(arq);
        }

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            fscanf(arq, "%d", &v[i][j]);
        }
    }
    fclose(arq);
    
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
           printf("%d", v[i][j]);
        }
        printf("\n");
    }
}
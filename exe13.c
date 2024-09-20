#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *arq1, *arq2;
    char v[31];
    int i;
    char arq_entrada[20], arq_saida[20];
    
        printf("Arquivo entrada\n");
        scanf("%s", arq_entrada);
        if((arq1=fopen(arq_entrada, "r"))==NULL){
            printf("ERRO\n");
            exit(1);   
        }
        
        printf("Arquivo saida\n");
        scanf("%s", arq_saida);
        if((arq2=fopen(arq_saida, "w"))==NULL){
            printf("ERRO2\n");
            exit(1); 
        }

    while(fgets(v, 31, arq1) != NULL){
        for(i = strlen(v) - 1; i>=0; i--){
            fprintf(arq2, "%c", v[i]);
        }
        fprintf(arq2, "\n");
    }
    fclose(arq1);
    fclose(arq2);

}
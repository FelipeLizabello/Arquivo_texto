#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0, j,k;
    int vetC[70];
    int num,aux;
    FILE *arq1, *arq2, *arq3;

        if((arq1=fopen("vetA.txt", "r"))==NULL){
            printf("ERRO A\n");
            exit(1);
        }
        while (fscanf(arq1, "%d", &num) != EOF) {
        vetC[i] = num;
        i ++;
        }
    fclose(arq1);
    
        if((arq2=fopen("vetB.txt", "r"))==NULL){
                printf("ERRO B\n");
                exit(1);
            }
        while (fscanf(arq2, "%d", &num) != EOF) {
            vetC[i] = num;
            i++;
        }
        fclose(arq2);
    
    for(j=0; j<i-1; j++){
        for(k=j+1; k<i; k++){
            if(vetC[j] > vetC[k]){
                aux = vetC[j];
                vetC[j] = vetC[k];
                vetC[k] = aux;
            }
        }
    }
    if((arq3=fopen("vetC.txt", "w"))==NULL){
            printf("ERRO\n");
            exit(1);
    }

    for(j=0; j<i; j++){
        fprintf(arq3, "%d\n", vetC[j]);
    } 
    fclose(arq3);

}
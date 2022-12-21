
// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>


int main (){

int n,coluna;
int linha = 1;

scanf("%d", &n);

    while(linha<n+2){

        for(coluna=1; coluna<linha; coluna=coluna+1){
            if(coluna<10){
                printf("0%d",coluna);
                printf(" ");
            } 
            else {
                printf("%d",coluna);
                printf(" ");
            }
        }

        for(coluna=1; coluna<linha; coluna=coluna+1){
            if(coluna<10){
                printf("0%d",coluna);
                printf(" ");
            } 
            else {
                printf("%d",coluna);
                printf(" ");
            }
        }
        
        linha = linha+1;
        printf("\n");
    }

return 0;

}

// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>


int main (){

int  num, maior;
int quant, i = 1;

scanf("%d", &quant);

    while(i<=quant) {
        scanf("%d", &num);

        if(i == 1){
            maior = num;    
        }    
        else if(num >= maior){
                maior = num;
        }
        
        i++;
    }
    printf("%d \n", maior);
    return 0;
}

// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

int main (void){

int num,quant;
int i = 1;
int soma = 0;
scanf("%d", &quant);

while(i<=quant){

    scanf("%d", &num);
    i = i+1;
    soma = (soma+num);
    
}
printf("%d", soma);
return 0;
}
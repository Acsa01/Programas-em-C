// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    char num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11;
    int soma,soma2;
    int resto, resultado, resto2,resultado2;
    int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,x11;


    scanf("%c%c%c%c%c%c%c%c%c%c%c", &num1, &num2, &num3, &num4, &num5, &num6, &num7, &num8, &num9, &num10, &num11);

    x1 = (num1 - '0');
    x2 = (num2 - '0');
    x3 = (num3 - '0');
    x4 = (num4 - '0');
    x5 = (num5 - '0');
    x6 = (num6 - '0');
    x7 = (num7 - '0');
    x8 = (num8 - '0');
    x9 = (num9 - '0');
    x10 = (num10 - '0');
    x11 = (num11 - '0'); 
    
    soma = ((x1*10) + (x2*9) + (x3*8) + (x4*7) + (x5*6) + (x6*5) + (x7*4) + (x8*3) + (x9*2));

    resto = (soma % 11);
    resultado = ( 11 - resto);

     if(resto == 1 || resto == 0){
        resultado = 0;
    }

    soma2 = ((x1*11) + (x2*10) + (x3*9) + (x4*8) + (x5*7) + (x6*6) + (x7*5) + (x8*4) + (x9*3) + (resultado*2));

    resto2 = (soma2 % 11);
    resultado2 = ( 11 - resto2);

    if(resto2 == 1 || resto2 == 0){
        resultado2 = 0;
    }

    if (resultado == x10 && resultado2 == x11){

        printf("valido \n");

    } else{
        printf("invalido \n");
    }

    return 0;

    }


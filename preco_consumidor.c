// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    float v, pl, pi,valor;

    scanf("%f\n", &v);
    scanf("%f\n", &pl);
    scanf("%f", &pi);

    valor = (v * ((pl + pi)/100) + v);

    printf("%.2f\n", valor);

    return 0;
    }

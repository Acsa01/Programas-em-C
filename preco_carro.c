// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    double  valorcusto, lucro, imposto, pfinal;

    scanf("%lf", &pfinal);
    scanf("%lf", &lucro);
    scanf("%lf", &imposto);

    valorcusto = (pfinal/(((imposto + lucro)/100) + 1));

    printf("%lf\n", valorcusto);

    return 0;
    }
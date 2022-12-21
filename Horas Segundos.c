// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    long long horas, minutos, segundos;

     scanf("%lld", &horas);

     minutos = horas*60;
     segundos = horas*3600;

     printf("%lld\n",minutos);
     printf("%lld\n",segundos);

     return 0;
     }
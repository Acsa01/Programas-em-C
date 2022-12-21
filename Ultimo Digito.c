// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

 int d[9], resultado = 0, mult = 2;
 char a;

 for(int i = 0; i < 9; i++) {
 scanf("%c", &a);

 d[i] = (int)a - 48;

 }

 for (int i = 8; i>= 0; i--){
 
 resultado += d[i] * mult;
 mult++;
 }

 const int digito = 11 - (resultado %11);
 
printf("%d\n", digito);
    return 0;
    }
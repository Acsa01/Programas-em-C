// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    int p,v,t;

    scanf("%d", &p);
    scanf("%d", &v);

    t = v - p;
    printf("%d\n", t/500);
    printf("%d\n", t % 500 / 100);
    printf("%d\n", t % 500 % 100/50);
    printf("%d\n", t % 500 % 100 % 50 / 10);
    printf("%d\n", t % 500 % 100 % 50 % 10 / 5);
    printf("%d\n", t % 500 % 100 % 50 % 10 % 5 / 1);

    return 0;
    }

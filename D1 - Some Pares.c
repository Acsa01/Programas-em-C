
// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>


int main(){
    int n,soma;
    soma=0;
    do{
        scanf("%d",&n);
        if(n%2==0){
            soma=soma+n;
        }
    }while(n!=0);
    printf("%d",soma);
    return 0;
}


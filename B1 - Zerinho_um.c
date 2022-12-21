// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    int a,b,c;

    scanf("%d %d %d", &a, &b, &c);

    if(a==1 && b==0 && c==0){
        printf("A \n");    
    }
    else if(a==0 && b==1 && c==0){
        printf("B");    
    }
    else if(a==0 && b==0 && c==1){
        printf("C");    
    }
     else if(a==1 && b==1 && c==0){
        printf("C");    
    }
     else if(a==0 && b==1 && c==1){
        printf("A");    
    }
     else if(a==1 && b==0 && c==1){
        printf("B");    
    }
    else if(a==1 && b==1 && c==1){
        printf("empate");    
    }
    else if(a==0 && b==0 && c==0){
        printf( "empate");    
    }

    return 0;
   } 
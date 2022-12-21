// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    int A,B,C,D,op,E,F;
    int soma,soma2,soma3;
    char ganha1,ganha2;
    // 0 par 1 impa

    scanf("%d%d%d", &op,&A,&B);
    soma = (A+B);

    if((op==0 && soma%2==0) || (op==1 && soma%2!=0)){
        ganha1 = 'A';    
    }
    else{
        ganha1 = 'B';
    }

    scanf("%d%d%d", &op,&C,&D);
    soma2 = (C + D);

    if((op==0 && soma2%2==0) || (op==1 && soma2%2!=0)){
        ganha2 = 'C';   
    }
    else{
        ganha2 = 'D';
    }

    scanf("%d%d%d", &op,&E,&F);
    soma3 = (E+F);

    if((op==0 && soma3%2==0) || (op==1 && soma3%2!=0)){
      printf("%c\n", ganha1);
    } 
     else{
        printf("%c\n", ganha2);
     } 
   
    return 0;
}
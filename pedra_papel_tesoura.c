
// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>


    int main (){

    int A, B;
    int pedra = 0;
    int papel = 1;
    int tesoura = 2;
    int lagarto = 3;
    int spock = 4;

    scanf("%d %d", &A,&B);

        if(A==0 && B==3){
            printf("A");
        }
        else if(B==0 && A==3){
            printf("B");
        }
        if(A==0 && B==2){
            printf("A");
        }
        else if(B==0 && A==2){
            printf("B");
        }
        if(A==2 && B==3){
            printf("A");
        }
        else if(B==2 && A==3){
            printf("B");
        }
        if(A==2 && B==1){
            printf("A");
        }
        else if(B==2 && A==1){
            printf("B");
        }
        if(A==1 && B==4){
            printf("A");
        }
        else if(B==1 && A==4){
            printf("B");
        }
        if(A==1 && B==0){
            printf("A");
        }
        else if(B==1 && A==0){
            printf("B");
        }
        if((A==3 && B==4) || (A==3 && B==1)){
            printf("A");
        }
        else if((B==3 && A==4) || (B==3 && A==1)){
            printf("B");
        }
        if((A==4 && B==2) || (A==4 && B==0)){
            printf("A");
        }
        else if((B==4 && A==2) || (B==4 && A==0)){
            printf("B");
        }
        if(A==B){
            printf("empate");
        }

    return 0;
}




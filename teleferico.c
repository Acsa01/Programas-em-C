// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    int C, A, CapA;
    int result;

    scanf("%d", &C);
    scanf("%d", &A);

    CapA = C-1;

    if(A%CapA!=0) {
        result = (A/CapA) + 1;
        printf("%d \n",result);
    }
    else if(A%CapA==0) {
        result = (A/CapA);
        printf("%d \n", result);
    }

    return 0;
}
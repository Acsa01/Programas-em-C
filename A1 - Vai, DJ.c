
// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>


int main (){

    int i, linhas;
    
    scanf("%d", &linhas);

    for(i=1; i<=linhas; i++){

        if(i%2==0){
             printf("THUMS THUMS THUMS THUMS THUMS THUMS \n");    
        }else{
            printf("THUMS THUMS THUMS \n");
        }
    }

    return 0;
}
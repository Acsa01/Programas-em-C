
// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>


int main (){

int B,T;
int C = 160;
int sub1,sub2,soma1,soma2;

scanf("%d %d", &B, &T);

sub1 = 160 - B;
sub2 = 160 - T;
soma1 = sub1 + sub2;
soma2 = T + B;

if(soma1==C && soma2==C){
    printf("0");
} 
else if(soma1>soma2){
    printf("2");
}
else if(soma1<soma2){
    printf("1");
}

return 0;
}
// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    double mediap,p1,p2,x1,x2;

        scanf("%lf",&mediap);
        scanf("%lf",&x2);
        scanf("%lf",&p1);
        scanf("%lf",&p2);
       

    x1 = ((((mediap*(p1+p2)) - (x2*p2)))/p1);
        
    printf("%lf\n", x1);
  
        return 0; 
    }
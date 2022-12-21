// Acsa Mirian 
// Matricula: 190083361

#include<stdio.h>
#include<stdlib.h>

    int main (){

    float n1,n2,n3;
    float t4;
    float l1, l2, l3, l4, l5;
    float media, ml;

    
        scanf("%f",&n1);
        scanf("%f",&n2);
        scanf("%f",&n3);

      
        scanf("%f",&t4);
    
  
        scanf("%f",&l1);
        scanf("%f",&l2);
        scanf("%f",&l3);
        scanf("%f",&l4);
        scanf("%f",&l5);

        
    ml=(l1 + l2 + l3 + l4 + l5)/10;
            
 media=(((n1 + (2*n2) + (3*n3) + (2*t4))/8)) + ml;
    
    printf("%.2f\n",media);
  
        return 0; 
    

    }

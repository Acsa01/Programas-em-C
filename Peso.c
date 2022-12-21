#include <stdio.h>

int validaPeso(double pesoKg)
{

    if (pesoKg > 0)
    {
        return 1;
    }
    else if (pesoKg < 0)
    {
        return 0;
    }
}
void fazGrama(double pesoKg)
{
    double result;
    result = pesoKg * 1000;
    printf("%.4f\n", result);
}
void fazTonelada(double pesoKg)
{
    double result1;
    result1 = pesoKg / 1000;
    printf("%.4f\n", result1);
}

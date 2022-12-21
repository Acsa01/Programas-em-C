#include <stdio.h>

double calculaVelocidadeMedia(int tA, int tB, double distancia)
{
    double subtracao;
    double conver;
    double vm;
    int vmKm;

    subtracao = tB - tA;
    conver = distancia * 1000;

    vm = conver / subtracao;
    vmKm = vm * 3.6;
    return vmKm;
}

int levouMulta(int tA, int tB, double distancia, double velocidadeMaxima)
{
    double resultado = calculaVelocidadeMedia(tA, tB, distancia);

    if (resultado > velocidadeMaxima)
    {
        return 1;
    }
    else if (resultado <= velocidadeMaxima)
    {
        return 0;
    }
}

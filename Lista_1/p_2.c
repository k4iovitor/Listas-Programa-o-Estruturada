#include <stdio.h>

int main(){

    int distancia;
    float combustivel, consumo;

    printf("Distancia percorrida: ");
    scanf("%d", &distancia);

    printf("Combustivel Gasto: ");
    scanf("%f", &combustivel);

    consumo = (float) distancia / combustivel;

    printf("%.3f km/l", consumo);

    return 0;
}
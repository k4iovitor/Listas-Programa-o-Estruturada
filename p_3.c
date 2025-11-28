#include <stdio.h>

int main(){

    float distancia, tempo;
    printf("Distancia entre os carros: ");
    scanf("%f", &distancia);

    tempo = distancia / 150.0;

    printf("Tempo necessario: %.1f horas", tempo);
    
    return 0;
}
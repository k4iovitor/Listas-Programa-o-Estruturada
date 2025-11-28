#include <stdio.h>

int main(){

    float raio, volume;

    printf("Raio: ");
    scanf("%f", &raio);

    volume = (4/3.0) * 3.14159 * (raio*raio*raio);

    printf("VOLUME %.3f", volume);

    return 0;
}
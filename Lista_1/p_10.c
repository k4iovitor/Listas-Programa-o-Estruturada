#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, delta, raiz_1, raiz_2;

    printf("A: ");
    scanf("%f", &a);

    printf("B: ");
    scanf("%f", &b);

    printf("C: ");
    scanf("%f", &c);

    if (a == 0){
        printf("IMPOSSIVEL CALCULAR");

    } else {
        delta = (b * b) - (4 * a * c);

        if (delta < 0){
            printf("IMPOSSIVEL CALCULAR");

        } else if (delta == 0){
            raiz_1 = ((b * (-1)) + (sqrt(delta))) / 2 * a;
            printf("RAIZ: %.1f", raiz_1);

        } else {
            raiz_1 = ((b * (-1)) + (sqrt(delta))) / 2 * a;

            raiz_2 = ((b * (-1)) - (sqrt(delta))) / 2 * a;

            printf("RAIZES: %.1f, %.1f", raiz_1, raiz_2);
        }
    }
    
    return 0;
}
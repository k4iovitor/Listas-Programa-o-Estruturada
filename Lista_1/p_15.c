#include <stdio.h>

int main(){

    float n, x, y;

    printf("QUANTIDADE DE PARES: ");
    scanf("%f", &n);

    for(int i = 0; i < n; i++){
        
        printf("X: ");
        scanf("%f", &x);

        printf("Y: ");
        scanf("%f", &y);

        if(y == 0.0){
            printf("DIVISAO IMPOSSIVEL\n");
        } else {
            printf("%.2f\n", (x / y));
        }
        
    }

    return 0;
}
#include <stdio.h>

int main(){

    float salario;

    printf("SALARIO: ");
    scanf("%f", &salario);

    if (salario < 1500.0){
        salario += (salario * (20/100.0));
    } else if (1500.0 <= salario < 5000.0){
        salario += (salario * (15/100.0));
    } else {
        salario += (salario * (10/100.0));
    }

    printf("SALARIO FINAL: %.2f", salario);

    return 0;
}
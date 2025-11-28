#include <stdio.h>

int main(){

    int num_1, num_2, soma;

    printf("VALOR 1: ");
    scanf("%d", &num_1);

    printf("VALOR 2: ");
    scanf("%d", &num_2);

    soma = 0;

    for(int i = (num_1 + 1); i < num_2; i++){
        if (i % 2 != 0){
            soma += i;
        } 
    }
    
    printf("\nSOMA DOS VALORES = %d", soma);

    return 0;
}
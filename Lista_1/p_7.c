#include <stdio.h>

int main(){

    int num_1, num_2, num_3;
    
    printf("Numero 1: ");
    scanf("%d", &num_1);

    printf("Numero 2: ");
    scanf("%d", &num_2);

    printf("Numero 3: ");
    scanf("%d", &num_3);

    if (num_1 >= num_2 && num_1 >= num_3 && num_2 >= num_3){
        printf("ORDEM CRESCENTE: %d, %d, %d.", num_3, num_2, num_1);

    } else if (num_1 >= num_2 && num_1 >= num_3 && num_3 >= num_2){
        printf("ORDEM CRESCENTE: %d, %d, %d.", num_2, num_3, num_1);

    } else if (num_2 >= num_1 && num_2 >= num_3 && num_1 >= num_3){
        printf("ORDEM CRESCENTE: %d, %d, %d.", num_3, num_1, num_2);

    } else if (num_2 >= num_1 && num_2 >= num_3 && num_3 >= num_1){
        printf("ORDEM CRESCENTE: %d, %d, %d.", num_1, num_3, num_2);

    } else if (num_3 >= num_1 && num_3 >= num_2 && num_1 >= num_2){
        printf("ORDEM CRESCENTE: %d, %d, %d.", num_2, num_1, num_3);

    }

    printf("\nORDEM ORIGINAL: %d - %d - %d", num_1, num_2, num_3);

    return 0;
}
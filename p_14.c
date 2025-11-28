#include <stdio.h>

int main(){

    int m, n, soma;

    printf("M: ");
    scanf("%d", &m);

    printf("N: ");
    scanf("%d", &n);

    soma = 0;

    for(int i = m; m > 0 && n > 0; i++){

        for(int j = m; j <= n; j++){
            if(j % 2 == 0){
                printf("%d ", j);
                soma += j;
            }
        }
    
        printf("\nSOMA: %d\n", soma);

        printf("M: ");
        scanf("%d", &m);

        printf("N: ");
        scanf("%d", &n);

        soma = 0;
    }

    return 0;
}
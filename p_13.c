#include <stdio.h>

int main(){

    int num, maior, posicao;

    for(int i = 1; i < 11; i++){
        printf("VALOR: ");
        scanf("%d", &num);

        if(i > 1){
            if(num > maior){
                maior = num;
                posicao = i;
            }

        } else {
            maior = num;
            posicao = i;
        }
    }

    printf("MAIOR VALOR: %d\n", maior);
    printf("POSICAO: %d", posicao);

    return 0;
}
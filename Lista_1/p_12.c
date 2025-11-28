#include <stdio.h>

int main(){

    int num;

    printf("VALOR PARA A TABUADA: ");
    scanf("%d", &num);

    for(int i = 1; i < 21; i++){
        printf("20 x %d = %d\n", i, (num * i));
    }

    return 0;
}
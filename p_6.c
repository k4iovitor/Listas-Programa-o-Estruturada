#include <stdio.h>

int main(){

    float x, y;

    printf("X = ");
    scanf("%f", &x);
    
    printf("Y = ");
    scanf("%f", &y);
    
    if(x == 0 && y == 0){
        printf("LOCALIZADO NA ORIGEM");
    } else if(x == 0 && y != 0){
        printf("LOCALIZADO NO EIXO X");
    } else if(x != 0 && y == 0){
        printf("LOCALIZADO NO EIXO Y");
    } else if(x > 0 && y > 0){
        printf("LOCALIZADO NO PRIMEIRO QUADRANTE");
    } else if(x < 0 && y > 0){
        printf("LOCALIZADO NO SEGUNDO QUADRANTE");
    } else if(x < 0 && y < 0){
        printf("LOCALIZADO NO TERCEIRO QUADRANTE");
    } else if(x > 0 && y < 0){
        printf("LOCALIZADO NO QUARTO QUADRANTE");
    }

    return 0;
}
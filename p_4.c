#include <stdio.h>

int main(){

    int segundos, minutos, horas;

    printf("Segundos: ");
    scanf("%d", &segundos);
    
    minutos = segundos / 60;
    horas = minutos / 60;
    segundos = segundos % 60;

    printf("%d:%d:%d", horas, (minutos % 60), segundos);

    return 0;
}
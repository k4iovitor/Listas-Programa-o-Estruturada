#include <stdio.h>

int main(){

    int hora_inicio, hora_termino, minuto_inicio, minuto_termino, hora_jogo, minuto_jogo;

    printf("HORA DE INICIO: ");
    scanf("%d", &hora_inicio);

    printf("MINUTO DE INICIO: ");
    scanf("%d", &minuto_inicio); 

    printf("HORA DE TERMINO: ");
    scanf("%d", &hora_termino);

    printf("MINUTO DE TERMINO: ");
    scanf("%d", &minuto_termino);

    if (hora_termino < hora_inicio){
        
        hora_jogo = (24 - hora_inicio) + hora_termino;

        minuto_jogo = (60 - minuto_inicio) + minuto_termino;

        if (minuto_jogo >= 60){
            hora_jogo += 1;
            minuto_jogo -= 60;
        }

    } else if (hora_inicio < hora_termino){
        
        hora_jogo = hora_termino - hora_inicio;

        if (minuto_termino < minuto_inicio){
            hora_jogo -= 1;
            minuto_jogo = (60 - minuto_inicio);
        } else {
            minuto_jogo = minuto_termino - minuto_inicio;
        }
        
    } else {

        hora_jogo = hora_inicio - hora_termino;

        minuto_jogo = minuto_termino - minuto_inicio;
    }

    printf("TEMPO DE JOGO: %dh:%dm", hora_jogo, minuto_jogo);

    return 0;
}
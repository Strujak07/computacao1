#include <stdio.h>

int main()
{
    int distancia, minutos, segundos;
    int tempo_total, ritmo_segundos;
    int ritmo_minutos, resto_segundos;

    printf("Qual e a distancia? ");
    scanf("%d", &distancia);

    printf("Em quantos minutos voce percorreu? ");
    scanf("%d", &minutos);

    printf("Em quantos segundos voce percorreu? ");
    scanf("%d", &segundos);

    tempo_total = (minutos * 60) + segundos;
    ritmo_segundos = tempo_total / distancia;

    ritmo_minutos = ritmo_segundos / 60;
    resto_segundos = ritmo_segundos % 60;

    printf("Ritmo: %d:%d\n", ritmo_minutos, resto_segundos);

    return 0;
}

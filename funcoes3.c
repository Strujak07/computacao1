#include <stdio.h>

void converteHora(int total_seg, int *hora, int *min, int *seg);

int main ()
{
    int total_seg;
    int hora;
    int min;
    int seg;

    printf("Digite o total de segundos: ");
    scanf("%d", &total_seg);

    converteHora( total_seg, &hora, &min, &seg);
    printf ("tempo convertido: %02d:%02d:%02d", hora, min, seg);

    return 0;
}
void converteHora(int total_seg, int *hora, int *min, int *seg) {

*hora = total_seg / 3600;

total_seg = total_seg % 3600;

*min = total_seg / 60;

*seg = total_seg % 60;

}

#include <stdio.h>
#include <math.h>

int calcula_raizes(float a, float b, float c, float *x1, float *x2);
int main ()
{
    float a, b, c, delta, x1, x2;

    printf ("Digite o valor de a: ");
    scanf ("%f", &a);

    printf ("Digite o valor de b: ");
    scanf ("%f", &b);

    printf ("Digite o valor de c: ");
    scanf ("%f", &c);
    int raizes = calcula_raizes (a, b, c, &x1, &x2);
    if (raizes == 2)
        printf ("apresenta duas raizes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    else if (raizes == 1)
        printf ("apresenta uma raiz real: %.2f\n", x1);
    else
        printf ("nao existe raizes reais \n");


}
int calcula_raizes(float a, float b, float c, float *x1, float *x2)
{
    float delta = (b * b) - (4 * a * c);


    if (delta > 0)
    {
        *x1 = (-b + sqrt (delta)) / (2 * a);
        *x2 = (-b - sqrt (delta)) / (2 * a);

        return 2;

    }
    else if (delta == 0)
    {
        *x1 = (-b) / (2 * a);

        return 1;
    }
    else
    {
        return 0;
    }

    return 0;
}

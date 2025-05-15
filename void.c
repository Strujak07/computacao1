#include <stdio.h>

int verificaUltimosDigitos (int a, int b)
{
    int divisor = 1;
    int temp = b;
    int flag = 0;

    while ( temp > 0)
    {
        temp = temp / 10;
        divisor = divisor * 10;
    }
    if (a % divisor == b)
    {
        flag = 1;
    }
    return flag;
}
int main ()
{
    int a = 567890;
    int b = 890;
    int resultado = verificaUltimosDigitos (a,b);

    if (resultado == 1)
    {
        printf ("Sim, %d corresponde aos ultimos digitos de %d./n", b,a);
    } else {
        printf ("Nao, %d nao corresponde aos ultimos digitos de %d./n", b,a);
    }
    return 0;
}

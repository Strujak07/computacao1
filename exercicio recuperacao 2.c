#include <stdio.h>
#include <math.h>
int main ()
{
    float altura;
    printf ("Digite a altura em metros: ");
    scanf("%f", &altura);

    float largura;
    printf ("Digite a largura em metros: ");
    scanf("%f", &largura);

    float Area;
    Area = altura * largura;

    int litro = 2;
    int Quantidade_de_litros;

    Quantidade_de_litros = ceil (Area / litro);

    printf("Area: %.2f", Area);
    printf ("Quantidade_de_litros: %d", Quantidade_de_litros);
    return 0;
}

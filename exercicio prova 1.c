#include <stdio.h>

int main()
{
    float base, altura;
    float perimetro, rodape;
    float area;
    float largura_porta = 0.8;

    printf("Base: ");
    scanf("%f", &base);

    printf("Altura: ");
    scanf("%f", &altura);

    perimetro = 2 * (base + altura);
    rodape = perimetro - largura_porta;
    area = base * altura;

    printf("Perimetro total: %.2f metros\n", perimetro);
    printf("Quantidade necessaria de rodape (descontando a porta): %.2f metros\n", rodape);
    printf("Area do quarto: %.2f metros quadrados\n", area);

    return 0;
}

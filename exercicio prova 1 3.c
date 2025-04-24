#include <stdio.h>

int main()
{
    int forca, nivel;
    float multiplicador, dano;

    printf("Digite a forca do personagem (1 a 100): ");
    scanf("%d", &forca);

    printf("Digite o nivel da arma (1 a 50): ");
    scanf("%d", &nivel);

    printf("Digite o multiplicador de critico (1.0 a 2.0): ");
    scanf("%f", &multiplicador);

    dano = forca * nivel * multiplicador;

    if (dano > 5000)
    {
        printf("DANO CRITICO MASSIVO!\n");
    }
    else if (dano >= 1000)
    {
        printf("DANO CRITICO!\n");
    }
    else
    {
        printf("Dano normal\n");
    }

    printf("Valor do dano: %.2f\n", dano);

    return 0;
}

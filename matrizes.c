#include <stdio.h>
#include <string.h>

#define MAX_NOME 100
#define NUM_NOMES 3

int main() {
    char nomes[NUM_NOMES][MAX_NOME];
    char nome_usuario[MAX_NOME];
    int i;

    printf("Digite tres nomes:\n");
    for (i = 0; i < NUM_NOMES; i++) {
        printf("Nome %d: ", i + 1);
        fgets(nomes[i], MAX_NOME, stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';
    }

    while (1) {
        printf("Digite um nome: ");
        fgets(nome_usuario, MAX_NOME, stdin);
        nome_usuario[strcspn(nome_usuario, "\n")] = '\0';

        int encontrado = 0;
        for (i = 0; i < NUM_NOMES; i++) {
            if (strcmp(nomes[i], nome_usuario) == 0) {
                printf("Este nome está entre os três nomes.\n");
                encontrado = 1;
                break;
            }
        }

        if (encontrado) {
            break;
        } else {
            printf("Este nome nao está entre os tres nomes.\n");
        }
    }

    printf("Fim do programa.\n");
    return 0;
}

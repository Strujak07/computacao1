#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINHA 3
#define MAX_COLUNA 3
#define MAX_TAM 50

int eh_vogal(char c) {
    char c_lower = tolower(c);
    return (c_lower == 'a' || c_lower == 'e' || c_lower == 'i' || c_lower == 'o' || c_lower == 'u');
}

int eh_consoante(char c) {
    return isalpha(c) && !eh_vogal(c);
}

void inverter_string(char str[]) {
    int inicio = 0, fim = strlen(str) - 1;
    while (inicio < fim) {
        char temp = str[inicio];
        str[inicio] = str[fim];
        str[fim] = temp;
        inicio++;
        fim--;
    }
}

int main() {
    char matriz[MAX_LINHA][MAX_COLUNA][MAX_TAM];
    char matriz_modificada[MAX_LINHA][MAX_COLUNA][MAX_TAM];

    for (int i = 0; i < MAX_LINHA; i++) {
        for (int j = 0; j < MAX_COLUNA; j++) {
            printf("Digite a string da posicao [%d][%d]: ", i, j);
            scanf("%49s", matriz[i][j]);
        }
    }

    for (int i = 0; i < MAX_LINHA; i++) {
        for (int j = 0; j < MAX_COLUNA; j++) {
            strcpy(matriz_modificada[i][j], matriz[i][j]);
            if (eh_vogal(matriz[i][j][0]) && eh_consoante(matriz[i][j][strlen(matriz[i][j]) - 1])) {
                inverter_string(matriz_modificada[i][j]);
            }
        }
    }

    printf("\nMatriz Original:\n");
    for (int i = 0; i < MAX_LINHA; i++) {
        for (int j = 0; j < MAX_COLUNA; j++) {
            printf("%s ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Modificada:\n");
    for (int i = 0; i < MAX_LINHA; i++) {
        for (int j = 0; j < MAX_COLUNA; j++) {
            printf("%s ", matriz_modificada[i][j]);
        }
        printf("\n");
    }

    return 0;
}

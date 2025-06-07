#include <stdio.h>

#define N 10

int main() {
    int v[N], valor, i, j, repetido;
    for (i = 0; i < N; ) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        repetido = 0;
        for (j = 0; j < i; j++) {
            if (v[j] == valor) {
                repetido = 1;
                break;
            }
        }
        if (!repetido) {
            v[i] = valor;
            i++;
        } else {
            printf("Valor repetido.\n");
        }
    }
    for (i = 0; i < N; i++) printf("%d ", v[i]);
    return 0;
}

#include <stdio.h>

void imprimeDireto(int v[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", v[i]);
    printf("\n");
}

void imprimeInverso(int v[], int n) {
    for (int i = n - 1; i >= 0; i--)
        printf("%d ", v[i]);
    printf("\n");
}

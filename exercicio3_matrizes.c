#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main() {
    int mat[N][N];
    int maior = -1, linMaior = 0;
    srand(time(NULL));
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++) {
            mat[i][j] = rand() % 100;
            if (mat[i][j] > maior) {
                maior = mat[i][j];
                linMaior = i;
            }
        }
    }
    int minimax = mat[linMaior][0];
    int colMinimax = 0;
    for (int j=1; j<N; j++) {
        if (mat[linMaior][j] < minimax) {
            minimax = mat[linMaior][j];
            colMinimax = j;
        }
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("Maior elemento: %d\n", maior);
    printf("Elemento minimax: %d\n", minimax);
    printf("Posicao minimax: linha %d, coluna %d\n", linMaior, colMinimax);
    return 0;
}

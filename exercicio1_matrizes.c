#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5

int main() {
    int mat[N][N], trans[N][N];
    srand(time(NULL));
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            mat[i][j] = rand() % 100;
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    printf("\n");
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            trans[j][i] = mat[i][j];
    for (int i=0; i<N; i++) {
        for (int j=0; j<N; j++)
            printf("%d ", trans[i][j]);
        printf("\n");
    }
    return 0;
}

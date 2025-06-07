#include <stdio.h>

#define N 10

int main() {
    int mat[N][N] = {0};
    for (int i=0; i<N; i++) {
        mat[i][0] = 1;
        for (int j=1; j<=i; j++)
            mat[i][j] = mat[i-1][j-1] + mat[i-1][j];
    }
    for (int i=0; i<N; i++) {
        for (int j=0; j<=i; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

#include <stdio.h>

#define M 10
#define NCOL 10

void multiplicaMatrizes(int a[M][NCOL], int nla, int nca, int b[M][NCOL], int nlb, int ncb, int c[M][NCOL]) {
    for (int i=0; i<nla; i++) {
        for (int j=0; j<ncb; j++) {
            c[i][j] = 0;
            for (int k=0; k<nca; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

void imprimeMatriz(int m[M][NCOL], int nl, int nc) {
    for (int i=0; i<nl; i++) {
        for (int j=0; j<nc; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

int main() {
    int A[M][NCOL], B[M][NCOL], C[M][NCOL];
    int n;
    for (int i=0; i<M; i++)
        for (int j=0; j<NCOL; j++) {
            A[i][j] = i + j + 1;
            B[i][j] = i == j ? 1 : 0;
        }
    printf("Multiplicacao de A e B:\n");
    multiplicaMatrizes(A, M, NCOL, B, M, NCOL, C);
    imprimeMatriz(C, M, NCOL);

    printf("Multiplicacao de A por A (A^2):\n");
    multiplicaMatrizes(A, M, NCOL, A, M, NCOL, C);
    imprimeMatriz(C, M, NCOL);

    printf("Digite o expoente n para A^n:\n");
    scanf("%d", &n);
    int temp[M][NCOL];
    for (int i=0; i<M; i++)
        for (int j=0; j<NCOL; j++)
            temp[i][j] = A[i][j];
    for (int e=2; e<=n; e++) {
        multiplicaMatrizes(temp, M, NCOL, A, M, NCOL, C);
        for (int i=0; i<M; i++)
            for (int j=0; j<NCOL; j++)
                temp[i][j] = C[i][j];
    }
    imprimeMatriz(C, M, NCOL);
    return 0;
}

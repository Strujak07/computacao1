#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 5
#define NCOL 10

void criaMatriz(int m[N][NCOL]) {
    srand(time(NULL));
    for (int i=0; i<N; i++)
        for (int j=0; j<NCOL; j++)
            m[i][j] = rand() % 4;
}

void imprimeMatriz(int m[N][NCOL]) {
    for (int i=0; i<N; i++) {
        for (int j=0; j<NCOL; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void compara(int gabarito[NCOL], int respostas[N][NCOL], int pontua[N]) {
    for (int i=0; i<N; i++) {
        pontua[i] = 0;
        for (int j=0; j<NCOL; j++)
            if (respostas

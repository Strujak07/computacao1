#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10



void criaMatrizes(int mat1[N][N],int mat2[N][N])
{
    srand(time(NULL));
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
        {
            mat1[i][j] = rand() % 100;
            mat2[i][j] = rand() % 100;
        }
}

void imprimeMatriz(int m[N][N])
{
    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
            printf("%d ", m[i][j]);
        printf("\n");
    }
}

void somaMatrizes(int mat1[N][N],int mat2[N][N],int resultado[N][N])
{
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            resultado[i][j] = mat1[i][j] + mat2[i][j];
}

void subtraiMatrizes(int mat1[N][N],int mat2[N][N], int resultado[N][N])
{
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            resultado[i][j] = mat1[i][j] - mat2[i][j];
}

void multiplicaConstante(int mat1[N][N],int resultado[N][N], int c)
{
    for (int i=0; i<N; i++)
        for (int j=0; j<N; j++)
            resultado[i][j] = mat1[i][j] * c;
}

int main()
{

    int matCriada = 0;
    int mat1[N][N], mat2[N][N], resultado[N][N];

    int op, c;
    do
    {
        printf("Menu:\n0 - Criar matrizes\n1 - Imprimir matrizes\n2 - Somar matrizes\n3 - Subtrair matrizes\n4 - Multiplicar primeira matriz por constante\n5 - Sair\n");
        scanf("%d", &op);
        if (op == 0)
        {
            criaMatrizes(mat1, mat2);
            matCriada = 1;
        }

        else if ((op>=1 && op<=4) && !matCriada) printf("Matrizes nao criadas.\n");
        else if (op == 1)
        {
            printf("Matriz 1:\n");
            imprimeMatriz(mat1);
            printf("Matriz 2:\n");
            imprimeMatriz(mat2);
        }
        else if (op == 2)
        {
            somaMatrizes(mat1, mat2, resultado);
            printf("Resultado da soma:\n");
            imprimeMatriz(resultado);
        }
        else if (op == 3)
        {
            subtraiMatrizes(mat1, mat2, resultado);
            printf("Resultado da subtracao:\n");
            imprimeMatriz(resultado);
        }
        else if (op == 4)
        {
            printf("Constante: ");
            scanf("%d", &c);
            multiplicaConstante(mat1, resultado, c);
            printf("Resultado da multiplicacao:\n");
            imprimeMatriz(resultado);
        }
    }
    while(op != 5);
    return 0;
}

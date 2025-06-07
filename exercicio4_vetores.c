#include <stdlib.h>
#include <time.h>

void preencheVetor(int v[], int n, int lim) {
    srand(time(NULL));
    for (int i = 0; i < n; i++)
        v[i] = rand() % (lim + 1);
}

#include <stdio.h>

int main() {
   int n, i;

   printf("Digite um numero inteiro: ");
   scanf("%d", &n);

   i = 1; // Inicializa i com 1

   // Loop de 1 a 200 com a estrutura while
   while (i <= 200) {
      // Verifica se o número é par e se o resto da divisão por n é 3
      if (i % 2 == 0 && i % n == 3) {
         printf("%d\n", i);
      }
      i++; // Incrementa i
   }

   return 0;
}

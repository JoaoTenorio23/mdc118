#include <math.h>
#include <stdio.h>

int main() {
  /* entrada */
  float nota_a1 = 0.0f;
  float nota_a2 = 0.0f;
  printf("Entre com o valor entre 0 e 10 para a nota A1: ");
  scanf("%f", &nota_a1);
  printf("Entre com o valor entre 0 e 10 para a nota A2 ");
  scanf("%f", &nota_a2);
  /* processamento */
  float media_final = (0.4f * nota_a1) + (0.6f * nota_a2);
  /* saida */
  printf("A media final é %.f\n", media_final);
  return 0;
}
#include <stdio.h>

int main() {

#define ICMS 0.17
#define COFINS 0.076 
#define PIS_PASEP 0.0165 
  float preco_inicial = 0.0;
  printf("Entre aqui com o preço inicial do produto: ");
  scanf("%f", &preco_inicial);
  
  float preco_final = ((1 + ICMS + COFINS + PIS_PASEP) * preco_inicial);
  
  printf("O valor do preço final com os impostos incluidos é R$ %.2f\n", preco_final);
  
  return 0;
}
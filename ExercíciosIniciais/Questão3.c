//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas

#include <stdio.h>

int main () {

  int n1, n2, aux;

  printf("Informe o valor do primeiro número:\n");
  scanf("%d", &n1);

  printf("Informe o valor do segundo número:\n");
  scanf("%d", &n2);

  aux = n1;
  n1 = n2;
  n2 = aux;

  printf("n1= %d e n2 = %d", n1,n2);
  
  return 0;
}

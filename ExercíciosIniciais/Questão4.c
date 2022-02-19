//Faça um programa que leia dois valores informados pelo usuário e inverta os valores nas variáveis lidas sem utilizar variável auxiliar

#include <stdio.h>

int main () {

  int n1, n2;

  printf("Informe o valor do primeiro número:\n");
  scanf("%d", &n1);

  printf("Informe o valor do segundo número:\n");
  scanf("%d", &n2);

  n1 = n1+n2;
  n2 = n1-n2;
  n1 = n1-n2;
  
  printf("n1= %d e n2 = %d", n1,n2);
  
}


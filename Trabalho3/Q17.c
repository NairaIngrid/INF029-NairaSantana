// O fatorial quádruplo de um número N é dado por (2n)!/n! Faça uma função recursiva que receba um número inteiro positivo N e retorne o fatorial quádruplo desse número.

#include <stdio.h>

int FatN(int n){

  if(n == 1)
    return 1;
  return n * FatN(n - 1);
}

int FatQuadruplo(int n){

  return FatN(n * 2)/FatN(n);
}


int main(){

  int num;

  printf("Informe um valor para calcular o fatorial quádruplo:\n");
  scanf("%d", &num);

  printf("O fatorial quádruplo 2(%d)! / %d! é %d", num, num, FatQuadruplo(num));

  return 0;
}


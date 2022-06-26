//Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem decrescente.

#include <stdio.h>

void ParDecrescente(int n){

  if(n >= 0){
    if(n % 2 == 0)
      printf("\n%d\n ", n);
      ParDecrescente(n - 1);
  }
}

int main(){

  int num;

  printf("Informe um número para imprimir seus antecessores pares de forma decrescente:\n");
  scanf("%d", &num);

  ParDecrescente(num);

  return 0;
}


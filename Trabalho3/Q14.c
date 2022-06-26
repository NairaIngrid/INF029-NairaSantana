//Faça uma função recursiva que receba um número inteiro positivo par N e imprima todos os números pares de 0 até N em ordem crescente.

#include <stdio.h>


void ParCrescente(int n){

  if(n >= 0){
    ParCrescente(n - 1);
      if(n % 2 == 0)
      printf("\n%d\n", n);
  }
}

int main(){

  int num;

  printf("Informe um número para imprimir seus antecessores pares de forma crescente:\n");
  scanf("%d", &num);

  ParCrescente(num);

  return 0;
}


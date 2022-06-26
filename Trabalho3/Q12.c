//Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente.

#include <stdio.h>

void Ncrescente(int n){

  if(n >= 0){
    Ncrescente(n - 1);
    printf("\n%d\n ", n);
  }
}

int main(){

  int num;

  printf("Informe um número para imprimir seus antecessores de forma crescente:\n");
  scanf("%d", &num);

  Ncrescente(num);

  return 0;
}


//Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem decrescente.

#include <stdio.h>

void Ndecrescente(int n){

  if(n >= 0){
    printf("\n%d\n", n);
    Ndecrescente(n - 1);
  }
}

int main(){

  int num;

  printf("Informe um número para imprimir seus antecessores de forma decrescente:\n");
  scanf("%d", &num);

  Ndecrescente(num);

  return 0;
}


//Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N. 

#include <stdio.h>

int fatorial (int n){
  if(n == 1)
    return 1;
  else
    return n*fatorial(n-1);
}

int main(){

  int num, resultado;

  printf("Informe o número que se quer calcular o fatorial: \n");
  scanf("%d", &num);

  resultado = fatorial(num);
  printf("O fatorial é %d", resultado);
  
  return 0;
}
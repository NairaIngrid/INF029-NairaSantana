/* Crie um programa que tenha uma função soma e a função main. A função main deve ler dois valores, enviar para a função soma. A função soma deve realizar a soma e retornar o valor. A Função main deve imprimir o resultado da soma. */

#include <stdio.h>

int soma( int a, int b){

  int calculo;
  calculo = a + b;
  
  return calculo;
  
}

int main (){

  int x, y, resultado;

  printf("Informe o primeiro valor: ");
    scanf ("%d", &x);
  printf("Informe o segundo valor: ");
    scanf ("%d", &y);

  resultado = soma (x,y);
  printf("A soma dos números é : %d", resultado);
}
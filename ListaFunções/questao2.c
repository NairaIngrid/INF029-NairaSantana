/* Crie um programa que tenha uma função subtrai e a função main. A função main deve ler três valores, enviar para a função subtrai. A função subtrai deve realizar a subtração dos três valores (primeiro menos o segundo menos o terceiro) e retornar o valor. A Função main deve imprimir o resultado da subtração. */

#include <stdio.h>

int subtrai( int a, int b, int c){

  int calculo;
  calculo = a - b -c;
  
  return calculo;
  
}

int main (){

  int x, y,z, resultado;

  printf("Informe o primeiro valor: ");
    scanf ("%d", &x);
  printf("Informe o segundo valor: ");
    scanf ("%d", &y);
   printf("Informe o terceiro valor: ");
    scanf ("%d", &z);
  
  resultado = subtrai (x,y,z);
  printf("A subtração dos números é : %d", resultado);
}
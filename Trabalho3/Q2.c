//Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89... 

#include <stdio.h>

int Fibonacci(int n){
  if (n == 1) 
    return 0;
  if (n == 2 || n == 3)
    return 1;

  return Fibonacci(n - 2) + Fibonacci(n - 1); 
}

int main(){

  int num, resultado;

  printf("Informe o N-ésimo número que quer saber da sequencia fibonacci: ");
  scanf("%d", &num);

  resultado = Fibonacci(num);
  printf("O termo solicitado é %d : ", resultado);
  
  return 0;
}
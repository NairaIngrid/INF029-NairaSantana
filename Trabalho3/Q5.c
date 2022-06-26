//  Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.


#include <stdio.h>

int somatorio(int n){
	if(n > 0)
	  return n + somatorio(n - 1);
  else
    return 0;
}

int main(){

  int num, resultado;

  printf("Informe o número para cáculo do somatório 1 até n: ");
  scanf("%d", &num);
  
  printf("O somatório é %d : ", resultado = somatorio(num));
  
  return 0;
}
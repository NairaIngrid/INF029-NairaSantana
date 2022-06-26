//Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N.

#include<stdio.h>

int soma(int n){
  
  if (n == 1)
      return 1;
  else
    return n + soma(n-1);
}

int main(){

  int num,resultado;
  
  printf("Informe um numero inteiro para realizar a soma de 1 até este número:\n ");
  scanf("%d",&num);

  printf("A soma de 1 até %d é %d\n",num,resultado = soma(num));

}


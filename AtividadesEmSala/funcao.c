#include <stdio.h>

int soma( int a, int b);
int subtrai( int a, int b);
int multiplica( int a, int b);

int main (){

  int x, y, resultado1, resultado2, resultado3;

  printf("Informe o primeiro valor: ");
    scanf ("%d", &x);
  printf("Informe o segundo valor: ");
    scanf ("%d", &y);
  
 // resultado1 = soma (x,y);
 // resultado2 = subtrai (x,y);
 // resultado3 = multiplica (resultado1, resultado2);
  resultado3 =  multiplica(soma(x,y),subtrai (x,y));
  printf("A multiplicação da soma com a subtração dos números é : %d", resultado3);
return 0;
}

int soma( int a, int b){

  int soma;
  soma = a + b;
  
  return soma;
}

int subtrai( int a, int b){

  int subtracao;
  subtracao = a - b ;
  
  return subtracao;
}

int multiplica( int a, int b){

  int multiplicacao;
  multiplicacao = a * b ;
  
  return multiplicacao;
}
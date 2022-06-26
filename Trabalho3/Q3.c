//  Faça uma função recursiva que permita inverter um número inteiro N. Ex: 123 - 321 


#include<stdio.h>

int inversao(int n){
  if(n == 0)
    return n;
  else{
    printf("%d", n % 10);
    n = n / 10;
    return inversao(n);
  }
  return 0;
}

int main(){

  int num;
    
  printf("Digite um numero para saber seu inverso:");
  scanf("%d",&num);
  inversao(num);
   
  return 0;
}

/*#include <stdio.h>
#include <math.h>

int inverterNumero(int numero);
int calcula_qtd_digitos(int numero);

int main (){
  int numero = 0, numero_invertido;
  while(numero >= 0){
    printf ("Digite o número:");
    scanf ("%d", &numero);
  
    int loops = 0;
    
    numero_invertido = inverterNumero(numero);
    printf ("O número invertido é: %d", numero_invertido);
  }
  
}

int qtd_digitos = 0;

int inverterNumero (int numero){
  if (qtd_digitos == 0) //primeira execução da funcao, conta quantos digitos tem.
    qtd_digitos = calcula_qtd_digitos(numero);  
  
  int resto;
  if (numero/10 == 0){
    qtd_digitos = 0;
    return numero % 10;
  }else{
    resto = numero % 10;
    numero = numero / 10;
    return resto * pow(10, --qtd_digitos) + inverterNumero (numero);
  }
} 

int calcula_qtd_digitos(int numero){
  int contador = 1;
  while (numero/10 > 0){
    numero = numero / 10;
    contador++;
  }
  return contador;
}*/
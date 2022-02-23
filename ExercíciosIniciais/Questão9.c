//Faça um programa que leia 10 números do usuário e informe quais deles são primos. Além disso, mostre a soma de todos os números primos existentes.

#include <stdio.h>

int main (){
  int numero[10], primos[10];
  int i,j, soma;

  
  for (i=0; i<10; i++){
    primos[i] = 1;
  }
    
  for (i=0; i<10; i++){
    printf("Informe o número %d: ",i);
    scanf("%d", &numero[i]);
  }

  for (i=0; i<10; i++){
    for(j=2; j<numero[i]; j++)
      if(numero[i] % j ==0){
        primos[i]=0;
        break;
      }
  }
      
soma =0;
  printf("Os números primos são: ");
  for (i=0; i<10; i++){
    if(primos[i]==1){
      soma=soma+numero[i];
      printf("%d, ", numero[i]);
    }
  }
  printf("\nA soma é : %d", soma);
}
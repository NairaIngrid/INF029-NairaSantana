//Faça um programa que leia a idade de uma pessoa e informe de ela é de maior ou de menor. O programa deve repetir essa ação até que uma idade negativa seja informada

#include <stdio.h>

int main () {

  int idade;


  do {
    
    printf("Informe a sua idade:\n");
    scanf("%d", &idade);
    
    if (idade>=0){

      if(idade>=18){
      printf("Você é maior de idade!\n");
      }else{
      printf("Você ainda não atingiu a maior idade!\n");
    }
      }else{
        printf("Idade nula ou negativa. Programa finalizado.");
      }
    }
    
   while (idade>=0);
  
  return 0;
  
  }

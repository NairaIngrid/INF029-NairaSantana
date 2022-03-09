/*Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/

#include <stdio.h>

void ler3Palavras (char vetor[3]){
  
   int i;
   
   
  for (i = 0; i < 3; i++){
      
    printf("Informe a palavra [%d]\n ", i+1); 
    scanf("%c",&vetor[i]);
    }
    
}

int main()

{
  char vetor[3];
    
  ler3Palavras(vetor);
    printf("%c\n", vetor[0]);
    printf("%c\n", vetor[1]);
    printf("%c\n", vetor[2]);
    
}
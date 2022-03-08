/*Crie um programa que tenha uma função ler3Numeros. Essa função deve ler três números do usuário e retornar os três números. A função main deve imprimir esses três números. Utilize vetor para fazer o retorno. NÃO RETORNA VETOR EM C -PASSAR POR PARAMETRO/REFERENCIA */ 

#include <stdio.h>

void ler3Numeros (int vetor[3]){
  
   int i;
  
  for (i = 0; i < 3; i++){
    printf("Informe o número [%d]\n ", i+1); 
    scanf("%d", &vetor[i]);
    }
    
}

int main()
{
  int vetor[3];
    
  ler3Numeros(vetor);
    printf("%d\n", vetor[0]);
    printf("%d\n", vetor[1]);
    printf("%d\n", vetor[2]);
    
}

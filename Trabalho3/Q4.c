//Faça uma função recursiva que permita somar os elementos de um vetor de inteiros. 

#include<stdio.h>
#define TAM 5

int somaVet(int vetor[], int tamVetor) {
  if (tamVetor == 0)
    return 0;
  return (somaVet(vetor, tamVetor - 1) + vetor[tamVetor - 1]);
}

int main(){

  int vet [TAM];
  int resultado, i;
    
  for (i = 0;i < TAM;i++){
    printf("Informe o valor na posição %d do vetor:\n",i+1);
    scanf("%d", &vet[i]);
  }
  printf ("A soma dos elementos é: %d\n",  somaVet(vet, TAM));
    
  return 0;
}

 
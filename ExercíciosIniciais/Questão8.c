//Faça um programa que calcula o fatorial de um número - multiplicação pelos antecessores do número até chegar a 1.

#include <stdio.h>

int main()
{
  int fat, n;
  
  printf("Insira um valor:\n");
  scanf("%d", &n);
  
  if(n == 1){
    printf("O fatorial é: 1.");
  }else{
    for(fat = 1; n > 1; n--)
    fat = fat * n;
    printf("O fatorial é: %d", fat);
  }
 return 0;
}

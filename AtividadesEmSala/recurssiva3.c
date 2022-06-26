#include <stdio.h>

void imprimecrescente(int num){
 int i=0;
  if(i!=num){
    i++;
    imprimecrescente(i);
    printf(" %d\n", i);
    }
    
    }
  
 int main(){

  int n; 
  printf("Quantos números?\n");
  scanf("%d",&n);
  imprimecrescente(n);
  
 }
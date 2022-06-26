#include <stdio.h>

void imprimedecrescente(int num){

  if(num>=0){
    printf(" %d\n", num);
    num --;
    imprimedecrescente(num);
    }
    
    }
  
 int main(){

  int n; 
  printf("Quantos números?\n");
  scanf("%d",&n);
  imprimedecrescente(n);
  
 }
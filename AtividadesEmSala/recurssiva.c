/*#include <stdio.h>

void querBolo(char fome);

void querBolo (char fome){
  char s, n;
  
  if(fome == 's' ){
    printf("quero!");
    querBolo(fome);
   
  }
}

int main(){

  char fome;
  int fatias = 10;
  
  printf("Tem fome? S para sim ou N para não?");
  scanf("%c",&fome);

  do{
    querBolo(fome);
    fatias++;
  } while (fatias<10);
  

  return 0;
  
}*/

#include <stdio.h>

void comer(int fatias){
  if(fatias>0){
    printf("quero!\n");
    printf("\ntem bolo %d\n", fatias);
    fatias --;
    comer(fatias);
    
    }
  else printf("acabou!!");
}
 int main(){

  int fatias; 
  printf("Quer comer né?, Quantas fatias tem o bolo?\n");
  scanf("%d",&fatias);
  comer(fatias);
 }
/* Faça um programa que tenha uma função que recebe um número inteiro e retorna o fatorial deste número. Esta função deve ainda verificar se é possível calcular o fatorial, se não for, ela deve de alguma forma retornar para a main que deu algum erro. A função main deve solicitar o valor do usuário e imprimir o fatorial dele, ou se não é possível calcular o fatorial.
*/

#include <stdio.h>

int fatorial(int x)
{

 if ((x==1)||(x==0)||(x<0))
    return 1;
 else
  return fatorial(x-1)*x;
}

int main() {
    int n, resultado;
    
  printf("digite o valor que deseja obter o fatorial\n");
    scanf("%d", &n);
  resultado = fatorial(n);
  
if (resultado == 1){
  printf(" Não é possível calcular fatorial de número negativo, 0 ou 1.");
  
}else{
  printf("o fatorial de %d e %d\n", n, fatorial(n));
}
  
    return 0;
}
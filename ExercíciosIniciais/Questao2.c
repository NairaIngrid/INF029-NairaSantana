//Faça um programa que leia a idade de duas pessoas e imprima a soma das idades

#include <stdio.h>

int main () {
  int idade1, idade2, somaIdades = 0;

  printf("Informe a idade da primeira pessoa:\n");
    scanf("%d",&idade1);
  printf("Informe a idade da segunda pessoa:\n");
    scanf("%d",&idade2);

  somaIdades = idade1+idade2;

  printf ("A soma das idades é: %d", somaIdades);
}/
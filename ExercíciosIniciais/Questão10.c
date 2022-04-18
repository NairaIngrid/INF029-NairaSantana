//Faça um programa que leia os dados de nome, idade, sexo e cpf de 5 pessoas. Ao final imprima tudo. Utilize vetor e struct.

#include <stdio.h>
#include <string.h>
#define TAM 2

typedef struct dados_pessoas{

char nome[31];
int idade;
char sexo;
char cpf[16];

}Pessoa;

int main(){
  
Pessoa pessoas[TAM];
int i;

  for (i=0;i<TAM;i++){
  printf("Digite seu nome:");
  fgets (pessoas[i].nome,31, stdin);
  size_t ln = strlen (pessoas[i].nome)-1;
  if(pessoas[i].nome[ln]=='\n')
  pessoas[i].nome[ln]= '\0';

  printf("Digite seu sexo:");
  scanf("%c",&pessoas[i].sexo);

  printf("Digite sua idade:");
  scanf("%d",&pessoas[i].idade);

  getchar();

  printf("Digite seu CPF:");
  fgets (pessoas[i].cpf,15, stdin);
  ln = strlen (pessoas[i].cpf)-1;
  if(pessoas[i].cpf[ln]=='\n')
  pessoas[i].cpf[ln]= '\0';
}
printf("\n****Pessoas Cadastradas****\n");

for(i=0;i<TAM;i++){
  printf("-----\n");
  printf("Nome: %s\n", pessoas[i].nome);
  printf("Sexo: %c\n", pessoas[i].sexo);
  printf("Idade: %d\n", pessoas[i].idade);
  printf("CPF: %s\n", pessoas[i].cpf);
  }
  return 0;
}

/*Crie um programa que tenha uma função cadastrarCliente. Essa função deve ler os dados do cliente (nome, dataNascimento, cpf, sexo) e retornar os dados do cliente. A função main deve imprimir os dados do cliente.
*/

#include <stdio.h>
#include <string.h>
#define TAM 2

typedef struct {
	
	int dia;
	int mes;
	int ano;

}nascimento;

typedef struct{
    
	char nome [20];
	char cpf [20];
	char sexo;
	nascimento dataNascimento;

}cad_cliente;

cad_cliente cadastrarCliente ();

int main() {	
	
	cad_cliente cadastro;
	cadastro = cadastrarCliente ();
	
	printf ("**************************************");
  printf ("**************************************");
	printf ("\n\nNome do cliente...............: %s ",cadastro.nome);
	printf ("\n\nCPF do cliente...............: %s ", cadastro.cpf);
	printf ("\n\nSexo do cliente........: %c ", cadastro.sexo);
	printf ("\n\nDia de nascimento...............: %d ",cadastro.dataNascimento.dia);
	printf ("\n\nMes de nascimento...............: %d ",cadastro.dataNascimento.mes);
	printf ("\n\nAno de nascimento...............: %d ",cadastro.dataNascimento.ano);

}

cad_cliente cadastrarCliente (){

	cad_cliente inserirDados;

		printf ("\nNome do cliente:...............:");
		fflush(stdin);
		fgets (inserirDados.nome, 100, stdin);
		printf ("\nCPF do cliente:...............:");
		scanf ("%s", inserirDados.cpf);
		printf ("\nSexo do cliente: M para masc.,F para fem. , O para ouros.:");
		scanf (" %c", &inserirDados.sexo);
		printf ("\nDia de nascimento:...............:");
		scanf ("%d", &inserirDados.dataNascimento.dia);
		printf ("\nMes de nascimento:...............:");
		scanf ("%d", &inserirDados.dataNascimento.mes);
		printf ("\nAno de nascimento:...............:");
		scanf ("%d", &inserirDados.dataNascimento.ano);
		printf ("**************************************");
	
	return inserirDados;
}

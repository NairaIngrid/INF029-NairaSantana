//Crie um programa em C, que contenha uma função recursiva que receba dois inteiros positivos k e n e calcule k^n. Utilize apenas multiplicações. O programa principal deve solicitar ao usuário os valores de k e n e imprimir o resultado da chamada da função.


#include<stdio.h>

int calcExp(int k, int n){

	if(n > 0)
		return k * calcExp(k, n - 1);
	else
		return 1;
}


int main(){

	int n1, n2, resultado;
	
	printf("Informe um número n1 e seu expoente n2:\n");
	scanf("%d", &n1);
	scanf("%d", &n2);

	printf("%d elevado a %d é  %d", n1, n2, resultado =calcExp(n1, n2));

	return 0;
}



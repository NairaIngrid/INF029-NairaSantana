/*Crie um programa que tenha uma função ler4Numeros. Essa função deve ler quatro números do usuário e retornar os quatro números. A função main deve imprimir esses quatro números. Utilize struct para fazer o retorno.*/ 

#include <stdio.h>

typedef struct
{
    int n1, n2, n3, n4;
    
} num;


num ler4Numeros(){
  
	num numeros;
	printf("Digite o primeiro valor\n");
	scanf("%d", &numeros.n1);

	printf("Digite o segundo valor\n");
	scanf("%d", &numeros.n2);

	printf("Digite o terceiro valor\n");
	scanf("%d", &numeros.n3);

	printf("Digite o quarto valor\n");
	scanf("%d", &numeros.n4);

	return numeros;
}

void imprime(num myNumbers){
  
	printf("Número 1: %d\n", myNumbers.n1);
	printf("Número 2: %d\n", myNumbers.n2);
	printf("Número 3: %d\n", myNumbers.n3);
	printf("Número 4: %d\n", myNumbers.n4);
}

int main(){
  
	num numDigitado, numeros;

	numDigitado = ler4Numeros();

	imprime(numDigitado);
}

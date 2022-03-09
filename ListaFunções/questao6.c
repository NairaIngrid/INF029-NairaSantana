/*Crie um programa que tenha uma função ler3Letras. Essa função deve ler três letras do usuário e retornar as três letras. A função main deve imprimir essas três letras.*/

#include <stdio.h>
#include <stdlib.h>

void ler3Letras (char vetor[]);

int main()
{	
    int i;
	char vetor[3];
	ler3Letras(vetor);
	
	printf("As letras digitadas foram:\n");	
	for(i=0;i<=2;i++){
    	printf(" %c", vetor[i]);  
	}
	
return 0;
}

void ler3Letras (char vetor[]){

	int i;

	printf("Informe 3 letras\n");
	
	for (i = 0; i <= 2; i++){
        scanf ("%s", &vetor[i]);
	}

}

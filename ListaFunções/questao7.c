/*Crie um programa que tenha uma função ler3Palavras. Essa função deve ler três palavras do usuário e retornar as três palavras. A função main deve imprimir essas três palavras.
*/

#include <stdio.h>
#include <stdlib.h>

void ler3Palavras (char vetor[3][20]);

int main()
{	
  int i;
	char vetor[3][20];
	ler3Palavras(vetor);
	
	printf(" As palavras digitadas foram:\n");
	for(i=0;i<=2;i++){
    	printf(" %s", vetor[i]);  
	}
	
return 0;
}

void ler3Palavras (char vetor[3][20]){

	int i;
	i = 0;
		
	for (i = 0; i <= 2; i++){
		printf("Informe a palavra\n");
        scanf ("%s",vetor[i]);
     }

}
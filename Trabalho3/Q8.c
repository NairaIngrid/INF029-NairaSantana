/*O máximo divisor comum dos inteiros x e y é o maior inteiro que é divisível por x e y. Escreva uma função recursiva mdc em C, que retorna o máximo divisor comum de x e y. O mdc de x e y é definido como segue: se y é igual a 0, então mdc(x,y) é x; caso contrário, mdc(x,y) é mdc (y, x%y), onde % é o operador resto.*/

#include <stdio.h>

int mdc(int x, int y){

	if(y == 0)
		return x;

	return mdc(y, x % y);

}

int main(){

	int x, y;

	printf("Informe dois números para encontrar o MDC:\n");
	scanf("%d %d", &x, &y);

	printf("O MDC é %d", mdc(x, y));

	return 0;

}




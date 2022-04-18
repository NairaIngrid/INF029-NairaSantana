//Faça um programa que verifique se um número é primo -divisível por 1 e por ele mesmo.

#include <stdio.h>

int main(){

    int n, i, qtdeDivisores;
        
    printf ("Digite um número:\n");
    scanf("%d",&n);
    
    for(i = 1, qtdeDivisores = 0; i <= n; i++)
        if((n%i) == 0)
                qtdeDivisores++;
           
        if(qtdeDivisores == 2)
            printf("%d é um número primo. ", n);
        else
            printf("%d não é um número primo. ", n);
    
    return 0;
    
}

#include <stdio.h>

/*typedef struct {
    
char marca[50];
char modelo[50];
int ano;
    
} carro;*/

void dadosCarro(char marca[], char modelo[], int *ano);
void imprimeCarro(char marca[], char modelo[], int ano);

int main(){
  
char marca[50];
char modelo[50];
int ano;
  
dadosCarro(marca, modelo, &ano);
imprimeCarro(marca, modelo, ano);

return 0;
  
}

void dadosCarro (char marca[], char modelo[], int *ano){
 
printf("Informe a marca do carro:\n");
fgets(marca, 50, stdin);

printf("Informe o modelo do carro:\n");
fgets(modelo, 50, stdin);

printf("Informe o ano do carro:\n");
scanf("%d", ano);

}
void imprimeCarro (char marca[], char modelo[], int ano){
   
printf ("\n\nMarca do carro..: %s ",marca);
printf ("\n\nModelo do carro..: %s ",modelo);
//setbuf(stdin,0);
//fflush(stdin);
printf ("\n\nAno do carro..: %d ", ano);
	
}
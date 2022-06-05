#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#include "EstruturaVetores.h"


typedef struct dados{
  int *vetPrincipal;
  int qtdElemento;
  int tamAux; 
} Estrutura;

Estrutura vetor[TAM];

void inicializar(){
  int i;
  for(i = 0; i < TAM ; i++){
    vetor[i].vetPrincipal = NULL;
  }
}

int criarEstruturaAuxiliar(int posicao, int tamanho){
  
  int i; 
  if(vetor[posicao].vetPrincipal != NULL)
    return JA_TEM_ESTRUTURA_AUXILIAR;
  else if (posicao > 10 || posicao < 1)
    return POSICAO_INVALIDA;
  else if(tamanho < 1)
    return TAMANHO_INVALIDO;
  else {
    vetor[posicao].vetPrincipal = (int*) malloc(tamanho * sizeof(int));
    vetor[posicao].tamAux = tamanho;
    vetor[posicao].qtdElemento = 0;
    
    return SUCESSO;
    }
}

int inserirNumeroEmEstrutura(int posicao, int valor){
    
  int i, j, retorno, ret;

  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{ // verificar se já existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL){
      if(vetor[posicao].qtdElemento < vetor[posicao].tamAux){
        vetor[posicao].vetPrincipal[vetor[posicao].qtdElemento] = valor;
        vetor[posicao].qtdElemento ++;    
        retorno = SUCESSO;
      }
      else{
        retorno = SEM_ESPACO;
      }
    } 
    else{
      retorno = SEM_ESTRUTURA_AUXILIAR;
    }
  }

  return retorno;
}


int excluirNumeroDoFinaldaEstrutura(int posicao){
  
  int retorno, ret;

  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{ // verificar se já existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL) {
      if(vetor[posicao].qtdElemento > 0){
        vetor[posicao].qtdElemento --;    
        retorno = SUCESSO;
      }
      else{
        retorno = ESTRUTURA_AUXILIAR_VAZIA;
      }
    } 
    else{
      retorno = SEM_ESTRUTURA_AUXILIAR;
    }
  }
  return retorno;
}

/*
Objetivo: excluir o numero 'valor' da estrutura auxiliar da posição 'posicao'.
Caso seja excluido, os números posteriores devem ser movidos para as posições anteriores
ex: suponha os valores [3, 8, 7, 9,  ,  ] onde deve ser excluido o valor 8. A estrutura deve ficar da seguinte forma [3, 7, 9,  ,  ,  ]
Obs. Esta é uma exclusão lógica
Rertono (int)
    SUCESSO - excluido com sucesso 'valor' da estrutura na posição 'posicao'
    ESTRUTURA_AUXILIAR_VAZIA - estrutura vazia
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    NUMERO_INEXISTENTE - Número não existe
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

int excluirNumeroEspecificoDeEstrutura(int posicao, int valor){
  
  int i, retorno, encontrado, ret;
  
  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{ // verificar se já existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL){
      if(vetor[posicao].qtdElemento > 0){
        for(i= 0, encontrado= 0; i < vetor[posicao].qtdElemento && encontrado == 0; i++){
          if(valor == vetor[posicao].vetPrincipal[i])
            encontrado = 1;   
        }
        if (encontrado == 1){
          for(i= i-1; i< vetor[posicao].qtdElemento; i++){
            vetor[posicao].vetPrincipal[i] = vetor[posicao].vetPrincipal[i+1];
          }
          vetor[posicao].qtdElemento--;
          retorno = SUCESSO;
        }
        else 
        retorno = NUMERO_INEXISTENTE;
      }
      else{
      retorno = ESTRUTURA_AUXILIAR_VAZIA;
      }
    } 
    else{
    retorno = SEM_ESTRUTURA_AUXILIAR;
    }
  }
  return retorno;
}

// se posição é um valor válido {entre 1 e 10}

int ehPosicaoValida(int posicao){
  
    int retorno = 0;
    if(posicao < 1 || posicao > 10){
      retorno = POSICAO_INVALIDA;
    }
    else
      retorno = SUCESSO;
    return retorno;
}
/*
Objetivo: retorna os números da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Retorno (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

int getDadosEstruturaAuxiliar(int posicao, int vetorAux[]){
  
  int i, retorno, ret;
  
  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{ // verificar se já existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL){
      if(vetor[posicao].qtdElemento > 0){
        for(i= 0; i< vetor[posicao].qtdElemento; i++){
         vetorAux[i] = vetor[posicao].vetPrincipal[i];
        }
        retorno = SUCESSO;
      }
    }       
    else{
      retorno = SEM_ESTRUTURA_AUXILIAR;
    }
  }
  
  return retorno;
}


/*
Objetivo: retorna os números ordenados da estrutura auxiliar da posição 'posicao (1..10)'.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao (1..10)'
    SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
*/

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[]){
  
  int i, j, retorno, auxiliar, ret;
    
  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{ // verificar se existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL){
      if(vetor[posicao].qtdElemento > 0){
        for(i= 0; i< vetor[posicao].qtdElemento; i++)
          vetorAux[i] = vetor[posicao].vetPrincipal[i];
        // ordenando
        for(i= 0; i < vetor[posicao].qtdElemento; i++){
          for(j= i + 1; j < vetor[posicao].qtdElemento; j++){
            if(vetorAux[i] > vetorAux[j]){
              auxiliar = vetorAux[i];
              vetorAux[i] = vetorAux[j];
              vetorAux[j] = auxiliar;
            }
          }
        }
        retorno = SUCESSO;
      }
    }         
    else{
      retorno = SEM_ESTRUTURA_AUXILIAR;
    }
  }
  return retorno;
}


/*
Objetivo: retorna os números de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/
int getDadosDeTodasEstruturasAuxiliares(int vetorAux[]){

  int i, contador= 0;
  int j, retorno;
  
  for(i= 0; i< TAM; i++){
    if(vetor[i].vetPrincipal != NULL){
      if(vetor[i].qtdElemento > 0){
       // jogando valores no vetor aux
        for(j= 0; j< vetor[i].qtdElemento; j++){
          vetorAux[contador] = vetor[i].vetPrincipal[j];
          contador++;
        }
      }
    }
  }
  if(contador> 0)
    retorno = SUCESSO;
  else
    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
  return retorno;
}
  
/*
Objetivo: retorna os números ordenados de todas as estruturas auxiliares.
os números devem ser armazenados em vetorAux
Rertono (int)
    SUCESSO - recuperado com sucesso os valores da estrutura na posição 'posicao'
    TODAS_ESTRUTURAS_AUXILIARES_VAZIAS - todas as estruturas auxiliares estão vazias
*/ 

int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[]){

  int i, auxiliar, contador = 0;
  int j, retorno = 0;
  
  for(i = 0; i< TAM; i++){
    if(vetor[i].vetPrincipal != NULL){
      if(vetor[i].qtdElemento > 0){
       // jogando valores no vetor aux
        for(j= 0; j< vetor[i].qtdElemento; j++){
          vetorAux[contador] = vetor[i].vetPrincipal[j];
          contador++;
        }
      }
    }
  }

  if(contador>0){
    for(i= 0; i< contador; i++){
      for(j= i + 1; j< contador; j++){
        if(vetorAux[i] > vetorAux[j]){
          auxiliar = vetorAux[i];
          vetorAux[i] = vetorAux[j];
          vetorAux[j] = auxiliar;
        }
      }
    }
  }
  
  if(contador > 0)
    retorno = SUCESSO;
  else
    retorno = TODAS_ESTRUTURAS_AUXILIARES_VAZIAS;
  
  return retorno;
}

/*
Objetivo: modificar o tamanho da estrutura auxiliar da posição 'posicao' para o novo tamanho 'novoTamanho' + tamanho atual
Suponha o tamanho inicial = x, e novo tamanho = n. O tamanho resultante deve ser x + n. Sendo que x + n deve ser sempre >= 1
Rertono (int)
    SUCESSO - foi modificado corretamente o tamanho da estrutura auxiliar
   ok SEM_ESTRUTURA_AUXILIAR - Não tem estrutura auxiliar
    ok POSICAO_INVALIDA - Posição inválida para estrutura auxiliar
    ok NOVO_TAMANHO_INVALIDO - novo tamanho não pode ser negativo
    SEM_ESPACO_DE_MEMORIA - erro na alocação do novo valor
*/

int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho){
  
  int ret, retorno = 0;
  novoTamanho = novoTamanho + vetor[posicao].tamAux;

  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{ // validando o tamanho
    if(novoTamanho< 1){
      retorno = NOVO_TAMANHO_INVALIDO;
      return retorno;
    }// verificar se existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL){
      vetor[posicao].vetPrincipal = realloc(vetor[posicao].vetPrincipal, (novoTamanho * sizeof(int)));
      if(!vetor[posicao].vetPrincipal)
            retorno = SEM_ESPACO_DE_MEMORIA;
      else{
        vetor[posicao].tamAux = novoTamanho;
        if(vetor[posicao].tamAux < vetor[posicao].qtdElemento)
          vetor[posicao].qtdElemento = vetor[posicao].tamAux;
        retorno = SUCESSO;
      }
    }       
    else
      retorno = SEM_ESTRUTURA_AUXILIAR;
  }
  
  return retorno;
}

/*
Objetivo: retorna a quantidade de elementos preenchidos da estrutura auxiliar da posição 'posicao'.
Retorno (int)
    ok POSICAO_INVALIDA - posição inválida
    ok SEM_ESTRUTURA_AUXILIAR - sem estrutura auxiliar
    ESTRUTURA_AUXILIAR_VAZIA - estrutura auxiliar vazia
    Um número int > 0 correpondente a quantidade de elementos preenchidos da estrutura
*/

int getQuantidadeElementosEstruturaAuxiliar(int posicao){
  
  int ret, retorno = 0;

  ret = ehPosicaoValida(posicao);
  if(ret == POSICAO_INVALIDA)
    retorno = POSICAO_INVALIDA;
  else{// testar se existe a estrutura auxiliar
    if(vetor[posicao].vetPrincipal != NULL){
      if (vetor[posicao].qtdElemento > 0){
        if (vetor[posicao].tamAux < vetor[posicao].qtdElemento)
          vetor[posicao].qtdElemento = vetor[posicao].tamAux;
        retorno = vetor[posicao].qtdElemento;
      }
      else 
        retorno = ESTRUTURA_AUXILIAR_VAZIA;
    }
    else
      retorno = SEM_ESTRUTURA_AUXILIAR;
  } 
  return retorno;
}


/*
Objetivo: montar a lista encadeada com cabeçote com todos os números presentes em todas as estruturas.
Retorno (No*)
    NULL, caso não tenha nenhum número nas listas
    No*, ponteiro para o início da lista com cabeçote
*/
No *montarListaEncadeadaComCabecote()
{

    return NULL;
}

/*
Objetivo: retorna os números da lista enceada com cabeçote armazenando em vetorAux.
Retorno void
*/
void getDadosListaEncadeadaComCabecote(No *inicio, int vetorAux[])
{
}

/*
Objetivo: Destruir a lista encadeada com cabeçote a partir de início.
O ponteiro inicio deve ficar com NULL.
Retorno 
    void.
*/
void destruirListaEncadeadaComCabecote(No **inicio)
{
}


/*Objetivo: finaliza o programa. deve ser chamado ao final do programa 
para poder liberar todos os espaços de memória das estruturas auxiliares.
*/

void finalizar(){
  int i;
  for(i= 0; i< TAM; i++){
    if(vetor[i].vetPrincipal != NULL)
        free (vetor[i].vetPrincipal);
  }
}
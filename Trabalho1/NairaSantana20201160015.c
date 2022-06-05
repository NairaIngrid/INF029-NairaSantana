// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Naira Ingrid Lemos Santana
//  email: nairapitangueira@gmail.com 
//  Matrícula: 20201160015
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 07/05/2021 - 19/08/2016

// #################################################

#include <stdio.h>
#include "NairaSantana20201160015.h" 
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

/*int somar(int x, int y)
{  //função utilizada para testes
    int soma;
    soma = x + y;
    return soma;
}

int fatorial(int x)
{ //função utilizada para testes
  int i, fat =1;
    
  for (i= x; i>1; i--)
    fat = fat*i;
  return fat;
}

int teste(int a)
{
    int val;
    if (a == 2)
        val = 3;
    else
        val = 4;

    return val;
}
*/

DataQuebrada quebraData(char data[]){
  
  DataQuebrada dq;
  char sDia[3];
	char sMes[3];
	char sAno[5];
	int i;

	for (i = 0; data[i] != '/'; i++){
		sDia[i] = data[i];	
	}
	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sDia[i] = '\0';  // coloca o barra zero no final
	}else{
		dq.valido = 0;
    return dq;
  }

  for (i = 0;sDia[i]!='\0';i++){  // testa se tem letra no dia
    if(sDia[i] >= ':' || sDia[i] <= '/' ){ 
      dq.valido = 0;
      return dq;
    }
  }	

	int j = i + 1; //anda 1 cada para pular a barra
	i = 0;

	for (; data[j] != '/'; j++){
		sMes[i] = data[j];
		i++;
	}

	if(i == 1 || i == 2){ // testa se tem 1 ou dois digitos
		sMes[i] = '\0';  // coloca o barra zero no final
	}else{
		dq.valido = 0;
    return dq;
  }
  
  for (i = 0;sMes[i]!= '\0';i++){ // testa se tem letra no mes
    if(sMes[i] >= ':'|| sMes[i] <= '/'){ 
  		dq.valido = 0;
      return dq;
    }
  }
  
	j = j + 1; //anda 1 cada para pular a barra
	i = 0;
	
	for(; data[j] != '\0'; j++){
	 	sAno[i] = data[j];
	 	i++;
	}

	if(i == 2 || i == 4){ // testa se tem 2 ou 4 digitos
		sAno[i] = '\0';  // coloca o barra zero no final
	}else{
		dq.valido = 0;
    return dq;
  }
  
  for (i = 0;sAno[i]!= '\0';i++){
    if(sAno[i] >= ':'|| sAno[i] <= '/'){ // testa se tem letra no ano
  		dq.valido = 0;
      return dq;
    }
  } 
  dq.iDia = atoi(sDia);
  dq.iMes = atoi(sMes);
  dq.iAno = atoi(sAno); 

  if (dq.iMes >12 || dq.iMes < 1)
    dq.valido = 0;
  else
  	dq.valido = 1;

  return dq;
}
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char data[])
{
  int datavalida = 1;
  
  DataQuebrada dq = quebraData(data);
  
  if(dq.valido == 0) 
    datavalida = 0;
  else{
    if (dq.iMes ==4 || dq.iMes ==6 || dq.iMes == 9 || dq.iMes == 11){
      if (dq.iDia > 30 || dq.iDia < 1)
        datavalida = 0;
    }else if (dq.iMes == 2){
      if (dq.iAno% 4 == 0 && (dq.iAno % 100!= 0 || dq.iAno % 400== 0)){
        if(dq.iDia > 29 || dq.iDia < 1)
          datavalida = 0;
      }else{
        if(dq.iDia > 28 || dq.iDia < 1)
          datavalida = 0;
      }      
    }else{
      if (dq.iDia > 30 || dq.iDia < 1)
        datavalida = 0;
    } 
  } 

if (datavalida == 1)
      return 1;
  else
      return 0;
}

/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. 
 @saida
    Retorna um tipo DiasMesesAnos. No atributo retorno, deve ter os possíveis valores abaixo
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
    Caso o cálculo esteja correto, os atributos qtdDias, qtdMeses e qtdAnos devem ser preenchidos com os valores correspondentes.
 */

int qtdDiasMesFinal(int mes, int ano)
{
  
  if (mes == 0 || mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
    return 31;
  } 
  if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
    return 30;
  } 
  if (mes == 2 && ano % 4 != 0) {
    return 28;
  } 
  if (mes == 2 && ano % 4 == 0 && (ano % 100!= 0 || ano % 400 == 0)) {
    return 29;
  } 
}

DiasMesesAnos q2(char datainicial[], char datafinal[])
{
  //calcule os dados e armazene nas três variáveis a seguir
  DiasMesesAnos dma;

  DataQuebrada dqInicial = quebraData(datainicial);
  DataQuebrada dqFinal = quebraData(datafinal);

  if (q1(datainicial) == 0){
    dma.retorno = 2;
    return dma;
  }else if (q1(datafinal) == 0){
    dma.retorno = 3;
    return dma;
  }else if (dqInicial.iAno > dqFinal.iAno){
    dma.retorno = 4;
    return dma;
  }else if ((dqInicial.iAno == dqFinal.iAno) && (dqInicial.iMes > dqFinal.iMes)){
    dma.retorno = 4;
    return dma;
  }else if((dqInicial.iAno == dqFinal.iAno) && (dqInicial.iMes == dqFinal.iMes) && (dqInicial.iDia > dqFinal.iDia)){   
    dma.retorno = 4;
    return dma;
  }else{
//verifica os dias
    if (dqFinal.iDia >= dqInicial.iDia){
      dma.qtdDias = dqFinal.iDia - dqInicial.iDia;
    }else{
      dma.qtdDias = dqFinal.iDia - dqInicial.iDia + qtdDiasMesFinal(dqFinal.iMes - 1, dqFinal.iAno);
    }
// verifica mês
    if(dqFinal.iMes >= dqInicial.iMes && dqFinal.iDia >= dqInicial.iDia){
      dma.qtdMeses = dqFinal.iMes - dqInicial.iMes;
    }else if(dqFinal.iMes >= dqInicial.iMes && dqFinal.iDia < dqInicial.iDia){
      dma.qtdMeses = dqFinal.iMes - dqInicial.iMes - 1;
    }else if (dqFinal.iMes < dqInicial.iMes && dqFinal.iDia >= dqInicial.iDia){
      dma.qtdMeses = dqFinal.iMes - dqInicial.iMes + 12;
    }else if (dqFinal.iMes < dqInicial.iMes && dqFinal.iDia < dqInicial.iDia){
      dma.qtdMeses = dqFinal.iMes - dqInicial.iMes + 12 - 1;
    }
// verifica ano  
    if (dqFinal.iMes >= dqInicial.iMes || (dqFinal.iMes == dqInicial.iMes && dqFinal.iDia > dqInicial.iDia)){
      dma.qtdAnos = dqFinal.iAno - dqInicial.iAno;
    }else{
      dma.qtdAnos = dqFinal.iAno - dqInicial.iAno - 1;
    }
      
  dma.retorno = 1;
  return dma;
      
  }
      
}

/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */

int q3(char *texto, char c, int isCaseSensitive)
{
  int qtdOcorrencias = 0;
  int i;
  
  if(isCaseSensitive){
    for (i= 0; i < strlen(texto); i++){
      if(texto[i]== c)
        qtdOcorrencias++;
    }
  }
  else{ 
    for (i= 0; i < strlen(texto); i++){
      if((toupper(texto[i]) == toupper(c)))
        qtdOcorrencias++;
    }
  }
    return qtdOcorrencias;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */


int comparacaoTextos(char busca[], char texto[], int j)
{
  int i;

  for(i = 0; i < strlen(busca); i++){
    if(busca[i] != texto[j]){
      return 0;
    }
      j++;
  }
    return 1;
}

int q4(char strTexto[], char strBusca[], int posicoes[30])
{
  int qtdOcorrencias = 0, i, j = 0;

  for(i = 0; i < strlen(strTexto); i++){
    if(strTexto[i] == strBusca[0] ){
      if(comparacaoTextos(strBusca, strTexto, i) == 1){
        qtdOcorrencias++;
        posicoes[j] = i+1;
        posicoes[j+1] = i+strlen(strBusca);
        j += 2;  
      }
    }
  }
  return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num)
{  
  int cifra, inverso = 0;
  
  if (num >= 0){
    do{
      cifra = num % 10;
      inverso = inverso * 10 + cifra;
      num = num / 10;
      
    }while(num > 0);
    
  }else if (num < 1){
    num = num *-1;
    do{
      cifra = num % 10;
      inverso = inverso * 10 + cifra;
      num = num / 10;
      
    }while(num != 0);

    num = num * -1;
  }
    return inverso;
}


/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca)
{
  int qtdOcorrencias = 0;
  int restoNumerobase;
  int tamanhoBase10 = 1;
  int numerobuscatemporario = numerobusca;
  
  while (numerobuscatemporario > 1){
    numerobuscatemporario = numerobuscatemporario / 10;
    tamanhoBase10 = tamanhoBase10 * 10;
  }
  
  if (numerobase > 0){
    restoNumerobase = numerobase % tamanhoBase10;
    if (restoNumerobase == numerobusca){
      qtdOcorrencias ++;
      numerobase = numerobase / tamanhoBase10;
    }else{
      numerobase = numerobase / 10;
      }
    return qtdOcorrencias + q6(numerobase, numerobusca);
  }
  return qtdOcorrencias;
}

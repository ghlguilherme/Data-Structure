#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Recebe uma string e um caractere e devolve o numero de ocorrencias desse caractere:
int conta_char(char* str,char c);

void main(int argc, char *argv[]){
	char palavra[80] = " ";
	int numeroDeOcorrencias;
	char caractere;
	
	printf("Digite a palavra: ");
	scanf(" %[^\n]",palavra);
	printf("Digite o caractere a buscar: ");
	scanf(" %c",&caractere);
	
	numeroDeOcorrencias = conta_char(palavra,caractere);
	
	printf("O numero de ocorrencias de %c foi %d ",caractere,numeroDeOcorrencias);
}

int conta_char(char* str, char c){
	int i, contador=0;
	for(i=0;i<strlen(str);i++){
		if((str[i]==c)||(str[i]==(c-'a'+'A'))){
			contador++;
		}
	}
	return(contador);
}

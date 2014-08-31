#include<stdio.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Troca o caractere anterior pelo próximo e o ultimo se torna o primeiro:
void roda_string(char* str);

void main(int argc,char *argv[]){
	char palavra[80]=" ";
	int vezes,i;
	
	printf("Digite a string: ");
	scanf(" %[^\n]",palavra);
	printf("Digite o numero de vezes que quer rodar a palavra: ");
	scanf("%d",&vezes);
	printf("\n\n");
	for(i=0;i<vezes;i++){
  		roda_string(palavra);
		printf("RODANDO... %10d:   ||%s||\n",i+1,palavra);
	}
	
	printf("\n\nPalavra final: %s ",palavra);
}

void roda_string(char* str){
	int i; char aux;

	//printf("str[0]: %c || str[strlen(str)-1]: %c || aux: %c \n",str[0],str[strlen(str)-1],aux);
	
	for(i=0;i<(strlen(str));i++){
		if(i!=(strlen(str))){
			aux = str[i];
			str[i] = str[strlen(str)-1];
			str[strlen(str)-1] = aux;
		}
	}
}

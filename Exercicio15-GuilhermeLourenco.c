#include<stdio.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Conta o numero de vogais em uma string:
int conta_vogais(char* str);

void main(int argc, char *argv[]){
	char palavra[80] =" ";
	int numeroDeVogais;
	printf("Digite uma string: ");
	scanf(" %[^\n]",palavra);
	
	numeroDeVogais = conta_vogais(palavra);
	
	printf("Numero de vogais: %d ",numeroDeVogais);
	
}

int conta_vogais(char* str){
	int i,contador=0;
	for(i=0;i<strlen(str);i++){
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U')){
			contador++;
		}
	}
	return(contador);
}

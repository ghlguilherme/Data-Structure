#include<stdio.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Converte os caracteres maiusculos para minusculos:
void minusculo(char* str);

void main(int argc, char *argv[]){
	char palavra[80] = " ";
	
	printf("Digite a palavra: ");
	scanf(" %[^\n]",palavra);
	
	minusculo(palavra);
	
	printf("%s",palavra);
	
}

void minusculo(char* str){
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]>='A'&&str[i]<='Z'){
			str[i]=str[i]-'A'+'a';
		}
	}
}


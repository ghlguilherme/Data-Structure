#include<stdio.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Troca cada ocorrencia de letras pelo seu oposto:
void string_oposta(char* str);

void main(int argc, char *argv[]){
	char palavra[80]= " ";
	
	printf("Digite a palavra: ");
	scanf(" %[^\n]",palavra);
	
	string_oposta(palavra);
	
	printf("A nova palavra: %s",palavra);
}

void string_oposta(char* str){
	int i;
	for(i=0;i<strlen(str);i++){
			if(((str[i] >= 'a') && (str[i] <= 'z'))){
			     str[i]='a' - str[i] + 'z';
			}
			if(((str[i] >= 'A') && (str[i] <= 'Z'))){
				str[i]='A' - str[i] + 'Z';
			}
			//Verifica-se que se 'a'=65 e 'z'=90 a fórmula para tornar a=z é : 'x' = ('a' - ['x'] + 'z') onde x é a letra que será trocada pelo oposto.
	}
}


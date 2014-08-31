#include<stdio.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Louren�o
 * �ltima Modifica��o: 29/08/2014
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
			//Verifica-se que se 'a'=65 e 'z'=90 a f�rmula para tornar a=z � : 'x' = ('a' - ['x'] + 'z') onde x � a letra que ser� trocada pelo oposto.
	}
}


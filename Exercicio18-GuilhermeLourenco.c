#include<stdio.h>
#include<string.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Troca a ocorrencia de letras pelas letras seguintes:
void shift_string(char* str);

void main(int argc, char *argv[]){
	char palavra[80]=" ";
	
	printf("Digite a palavra: ");
	scanf(" %[^\n]",palavra);
	
 	shift_string(palavra);
 	printf("Nova palava: %s",palavra);
}

void shift_string(char* str){
	int i;
	for(i=0;i<strlen(str);i++){
		if(((str[i] >= 'a') && (str[i] <= 'y')) || ((str[i] >= 'A') && (str[i] <= 'Y'))){
			str[i]=str[i]+1;	
		}else{
			if(str[i]=='z'){
				str[i]='a';
			}
			if(str[i]=='Z'){
				str[i]='A';
			}
		}
	}
}

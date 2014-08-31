#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Reimplementação dos exercicios 5.3 a 5.6 com cópia das strings mantendo a original;
char* roda_string(char* str);
char* string_oposta(char* str);
char* shift_string(char* str);
char* minusculo(char* str);
char* organizaPalavra(char* str);

void main(int argc, char *argv[]){
	char palavra[50]=" ";
	int i;
	char *stringNova;
	stringNova = (char*)malloc(strlen(palavra)*sizeof(char));
	
	printf("Digite a string original: ");
	scanf(" %s",palavra);
	
	printf("\nPALAVRA ORIGINAL: %s\n",palavra);
	
	stringNova = organizaPalavra(palavra);
	
	stringNova = string_oposta(palavra);
	printf("FUNCAO STRING OPOSTA: %s\n",stringNova);
	
	stringNova = roda_string(palavra);
	printf("FUNCAO RODA STRING:   %s\n",stringNova);
	
	stringNova = shift_string(palavra);
	printf("FUNCAO SHIFT STRING:  %s\n",stringNova);
	
	stringNova = minusculo(palavra);
	printf("FUNCAO MINUSCULO:     %s\n",stringNova);
	
}

char* organizaPalavra(char* str){
	int i;
     char *novaPalavra;
     novaPalavra = (char*)malloc(strlen(str)*sizeof(char));
     for(i=0;i<strlen(str);i++){
     	novaPalavra[i]=str[i];
     }
     return(novaPalavra);
}

char* roda_string(char* str){
	int i; char aux;
     char *novaPalavra;
     novaPalavra = (char*)malloc(strlen(str)*sizeof(char));
     for(i=0;i<strlen(str);i++){
     	novaPalavra[i]=str[i];
     }
     
    printf("\nstrlen(str): %d\n",strlen(str));
    printf("strlen(novaPalavra): %d\n",strlen(novaPalavra));
    printf("\nCOPIA PALAVRA: %s ||  %s \n",novaPalavra,str);
		for(i=0;i<(strlen(str));i++){
		if(i!=(strlen(str))){
			aux = novaPalavra[i];
			novaPalavra[i] = novaPalavra[strlen(novaPalavra)-1];
			novaPalavra[strlen(novaPalavra)-1] = aux;
		}
	}
	
	return(novaPalavra);
}

char* string_oposta(char* str){
	int i;
	char *novaPalavra;
     novaPalavra = (char*)malloc(strlen(str)*sizeof(char));
     for(i=0;i<strlen(str);i++){
     	novaPalavra[i]=str[i];
     }
     
     printf("\nstrlen(str): %d\n",strlen(str));
     printf("strlen(novaPalavra): %d\n",strlen(novaPalavra));
     printf("\nCOPIA PALAVRA: %s || %s \n",novaPalavra,str);
     
	for(i=0;i<strlen(str);i++){
			if(((novaPalavra[i] >= 'a') && (novaPalavra[i] <= 'z'))){
			     novaPalavra[i]='a' - novaPalavra[i] + 'z';
			}
			if(((novaPalavra[i] >= 'A') && (novaPalavra[i] <= 'Z'))){
				novaPalavra[i]='A' - novaPalavra[i] + 'Z';
			}
			//Verifica-se que se 'a'=65 e 'z'=90 a fórmula para tornar a=z é : 'x' = ('a' - ['x'] + 'z') onde x é a letra que será trocada pelo oposto.
	}
	return(novaPalavra);
}

char* shift_string(char* str){
	int i;
	char *novaPalavra;
     novaPalavra = (char*)malloc(strlen(str)*sizeof(char));
     for(i=0;i<strlen(str);i++){
     	novaPalavra[i]=str[i];
     }
     
    printf("\nstrlen(str): %d\n",strlen(str));
    printf("strlen(novaPalavra): %d\n",strlen(novaPalavra));
    printf("\nCOPIA PALAVRA: %s || %s \n",novaPalavra,str);
	for(i=0;i<strlen(str);i++){
		if(((novaPalavra[i] >= 'a') && (novaPalavra[i] <= 'y')) || ((novaPalavra[i] >= 'A') && (novaPalavra[i] <= 'Y'))){
			novaPalavra[i]=novaPalavra[i]+1;	
		}else{
			if(novaPalavra[i]=='z'){
				novaPalavra[i]='a';
			}
			if(novaPalavra[i]=='Z'){
				novaPalavra[i]='A';
			}
		}
	}
	return(novaPalavra);
}

char* minusculo(char* str){
	int i;
	char *novaPalavra;
     novaPalavra = (char*)malloc(strlen(str)*sizeof(char));
     for(i=0;i<strlen(str);i++){
     	novaPalavra[i]=str[i];
     }
     
    printf("\nstrlen(str): %d\n",strlen(str));
    printf("strlen(novaPalavra): %d\n",strlen(novaPalavra)); 
    printf("\nCOPIA PALAVRA: %s || %s \n",novaPalavra,str);
	for(i=0;i<strlen(str);i++){
		if(novaPalavra[i]>='A' && novaPalavra[i]<='Z'){
			novaPalavra[i]=novaPalavra[i]-'A'+'a';
		}
	}
	return(novaPalavra);
}


#include <stdio.h>
/*
 * Author: Guilherme Henrique Louren�o
 * �ltima Modifica��o: 29/08/2014
 * Language:  C
 */
 
//Prot�tipo da fun��o
int soma_impares(int n);

void main(int argc, char *argv[]){
	int n;
	printf("Digite o numero n: ");
	scanf("%d",&n);
	printf("A soma dos impares: %d\n",soma_impares(n));
}

int soma_impares(int n){
	int i=0,soma=0;
	int num = (n*2);
	for(i=0;i<=num;i++){
		if(i%2!=0){
			soma = soma +i;
		}
	}
	
	return(soma);
}

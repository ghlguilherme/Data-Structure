#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
int pares(int n,int* vet);

void main(int argc, char *argv[]){
	int n, i, *vetor;
	
	printf(":::INDICA QUANTOS NUMEROS PARES EXISTEM EM UM VETOR:::\n");
	printf("Digite o numero de elementos do vetor: ");
	scanf("%d",&n);
	vetor = (int *)malloc(n*sizeof(int));
	if(vetor==NULL){
		printf("Memoria Insuficiente!!!");
		exit(1);
	}
	
	for(i=0;i<n;i++){
		printf("Digite o numero inteiro para %dª posição do vetor: ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("A quantidade de numeros pares encontrados foi: %d ",pares(n,vetor));
	free(vetor);
}

int pares(int n,int* vet){
	int i, contador=0;
	for(i=0;i<n;i++){
		if(vet[i]%2==0) contador++;
	}
	return(contador);
}

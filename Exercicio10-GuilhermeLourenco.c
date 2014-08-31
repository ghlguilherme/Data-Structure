#include<stdio.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
void inverte(int n,int* vet);

void main(int argc, char *argv[]){
	int i,n , *vetor;
	
	printf("::::PROGRAMA QUE INVERTE O VETOR::::\n");
	printf("Digite o numero de elementos do vetor: ");
	scanf("%d",&n);
	vetor = (int *)malloc(n*sizeof(int));
	if(vetor==NULL){
		printf("Memoria insuficiente!!!");
		exit(1);
	}
	for(i=0;i<n;i++){
		printf("Digite o valor para a %d posicao do vetor: ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("O vetor invertido: \n");
	inverte(n,vetor);
	
	for(i=0;i<n;i++){
		printf(" vetor[%d]: %d \n",i+1,vetor[i]);
	}
	free(vetor);
}

void inverte(int n, int* vet){
	int i, aux;
	for(i=0;i<n;i++){
		aux = vet[i];
		vet[i]= vet[n-1];
		vet[n-1]=aux;
		n--;
	}

}

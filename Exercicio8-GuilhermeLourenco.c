#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
int negativos(int n, float* vet);

void main(int argc, char *argv[]){
	int tamanho,i;
	float *vetor;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d",&tamanho);
	vetor = (float *)malloc(tamanho*sizeof(float));
	
	if(vetor==NULL){
		printf("Memória Insuficiente!!!");
		exit(1);
	}

	for(i=0;i<tamanho;i++){
		printf("Digite um numero para o vetor: ");
		scanf("%f",&vetor[i]);
				
	}

	printf("Numero de numeros negativos: %d ",negativos(tamanho,vetor));
	free(vetor);
	
}

int negativos(int n,float* vet){
	int i,contador=0;
	for(i=0;i<n;i++){
	   if(vet[i]<0)	contador++;
	   //printf("%f ",vet[i]);
	}
	return(contador);
}

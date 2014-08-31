#include<stdio.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Louren�o
 * �ltima Modifica��o: 29/08/2014
 * Language:  C
 */

void main(int argc, char *argv[]){
	int **matriz,l,i,j;
	//Por a matriz ser triangular superior ela � necessariamente quadrada.
	//O n�mero de linhas � igual ao n�mero de colunas.
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d",&l);
	
	matriz = (int**)malloc(l*sizeof(int));
	 for(i=0;i<l;i++){
	 	matriz[i] = (int*)malloc(l*sizeof(int));
	 }
	
	
	//Preenchimento da matriz triangular:
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(i<=j){
				printf("Digite o valor para a posicao [%d][%d] : ",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
	}
	printf("\n\n");
	//Mostrar a matriz formada:
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(i<=j){
			    printf("[%d][%d] = %d ",i,j,matriz[i][j]);
			    
			}
		}
		printf("\n");
	}
	printf("\n\nVALORES\n\n");
	//Mostrar a matriz formada:
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(i<=j){
			    printf(" %d ",matriz[i][j]);
			    
			}
		}
		printf("\n");
	}
	
	
}

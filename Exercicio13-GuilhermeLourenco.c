#include<stdio.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//void imprimirMatriz(int l,int i,int j);
void main(int argc, char *argv[]){
	int **matriz,l,i,j;
	//Por a matriz ser triangular inferior ela é necessariamente quadrada.
	//O número de linhas é igual ao número de colunas.
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d",&l);
	
	matriz = (int**)malloc(l*sizeof(int));
	 for(i=0;i<l;i++){
	 	matriz[i] = (int*)malloc(l*sizeof(int));
	 }
	
	
	//Preenchimento da matriz triangular:
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(i>=j){
				printf("Digite o valor para a posicao [%d][%d] : ",i,j);
				scanf("%d",&matriz[i][j]);
			}
		}
	}
	
	printf("\n\n");
	//Mostrar a matriz formada:
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(i>=j){
			    //imprimirMatriz(l,i,j);
			    printf("[%d][%d] = %d ",i,j,matriz[i][j]);
			   
			}
		
		}
		printf("\n");
	}
	//Mostrar valores:
	printf("\nMOSTRA SOMENTE OS VALORES: \n\n");
	for(i=0;i<l;i++){
		for(j=0;j<l;j++){
			if(i>=j){
			    //imprimirMatriz(l,i,j);
			    printf(" %d ",matriz[i][j]);
			   
			}
		
		}
		printf("\n");
	}
	
}

/*void imprimirMatriz(int l,int i,int j){
	int c;
	for(c=0;c<l;c++){
		printf("[%d][%d] ",i,j);
	}
	printf("\n");
}*/

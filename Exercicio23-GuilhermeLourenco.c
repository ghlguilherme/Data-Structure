#include<stdio.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Estrutura representa um vetor no espaço 3D e calcula produto escalar.
struct vetor{
	float x;
	float y;
	float z;
};
typedef struct vetor Vetor;
float dot(Vetor* v1, Vetor* v2);

void main(int argc, char *argcv[]){
	Vetor v1;
	Vetor v2;
	float produtoVetorial;
	printf("\n\nESCREVA NO FORMATO x,y,z\n\n");
	printf("Digite os pontos x,y,z do primeiro vetor: ");
	scanf(" %f,%f,%f",&v1.x,&v1.y,&v1.z);
	printf("Digite os pontos x,y,z do segundo vetor: ");
	scanf(" %f,%f,%f",&v2.x,&v2.y,&v2.z);
	
	produtoVetorial = dot(&v1,&v2);
	
	printf("\nO PRODUTO VETORIAL FOI: %.2f ",produtoVetorial);
	
	
}

float dot(Vetor* v1, Vetor* v2){
	float produto;
	produto = (v1->x * v2->x) + (v1->y * v2->y) + (v1->z * v2->z);
	return(produto);
}

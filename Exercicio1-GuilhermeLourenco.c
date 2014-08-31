#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Protótipo da função
int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);

void main(int argc,char *argv[]){
	int x0,x1,x,y0,y1,y;
	printf("Digite o valor de x0: ");
	scanf("%d",&x0);
	printf("Digite o valor de y0: ");
	scanf("%d",&y0);
	printf("Digite o valor de x1: ");
	scanf("%d",&x1);
	printf("Digite o valor de y1: ");
	scanf("%d",&y1);
	printf("Digite o valor de x: ");
	scanf("%d",&x);
	printf("Digite o valor de y: ");
	scanf("%d",&y);
	
	printf("Retorno da função: %d \n\n\n", dentro_ret(x0,y0,x1,y1,x,y));

	if(dentro_ret(x0,y0,x1,y1,x,y)){

		printf("       ----------------------(%d,%d)\n",x1,y1);
		printf("       |                     |\n");
		printf("       |      (x,y)dentro    |\n");
		printf("       |                     |\n");
		printf("   (%d,%d)----------------------\n",x0,y0);
	}else{

	
    	printf("       ----------------------(%d,%d)\n",x1,y1);
		printf("       |                     |\n");
		printf("       |                     |     (x,y)fora\n");
		printf("       |                     |\n");
		printf("   (%d,%d)----------------------\n",x0,y0);
	}
	
	
}
//Função que retorna 1 se o ponto estiver dentro do retângulo ou 0 se o ponto estiver fora.
int dentro_ret(int x0, int y0, int x1, int y1, int x, int y){
	if(x<=x1 && x>=x0 && y<=y1 && y>=y0){
		return(1);
	} 
	else{
		return(0);
	}
}

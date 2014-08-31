#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Protótipo da função
int raizes(float a, float b, float c, float* x1, float* x2);
void main(int argc, char *argv[]){
	float a,b,c,x1=0,x2=0;
	
	printf("Digite o termo [a] da equacao: ");
	scanf("%f",&a);
	printf("Digite o termo [b] da equacao: ");
	scanf("%f",&b);
	printf("Digite o termo [c] da equacao: ");
	scanf("%f",&c);
	raizes(a,b,c,&x1,&x2);
	printf("As raizes sao: x1: %.1f x2: %.1f \n",x1,x2);
}

int raizes(float a,float b, float c,float* x1, float* x2){
	float delta;
	delta = pow(b,2) -(4*a*c);
	if(delta>=0){
		*x1 = ((-1)*b+sqrt(delta))/(2*a);
		*x2 = ((-1)*b-sqrt(delta))/(2*a);
	}else{
		exit(1);
	}
	return(0);
}

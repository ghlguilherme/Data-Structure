#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
void calc_esfera(float r,float* area,float* volume);

void main(int argc, char *argv[]){
	float r, area, volume;
	
	printf("Digite o raio da esfera: ");
	scanf("%f",&r);
	calc_esfera(r,&area,&volume);
	
	printf("A area da esfera: %.2f \nO volume da esfera: %.2f \n",area,volume);
}

void calc_esfera(float r,float* area,float* volume){
     double pi = 3.141592;
	   *area = 4* pi * pow(r,2);
	   *volume = (4 * pi * pow(r,3))/3;
}

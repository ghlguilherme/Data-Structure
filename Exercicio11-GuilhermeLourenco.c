#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
double avalia(double* poli,int grau, double x);

void main(int argc, char *argv[]){
	double *polinomio, x;
	int grau,i ;
	
	printf("Digite o grau do polinomio: ");
	scanf("%d",&grau);
	
	
	polinomio = (double *)malloc(grau*sizeof(double));
	if(polinomio==NULL){
		printf("Memoria Insuficiente!!!");
		exit(1);
	}
	
	for(i=grau;i>=0;i--){
		printf("Digite o coeficiente x^%d do polinomio: ",i);
		scanf("%lf",&polinomio[i]);
		
	}
	
	printf("Digite o valor de x: ");
	scanf("%lf",&x);
	printf("POLINOMIO:  ");
	for(i=grau;i>=0;i--){
		printf("  %.0lf x %.0lf^%d",polinomio[i],x,i);
	}
	
	printf("\nRESULTADO: %.0lf ",avalia(polinomio,grau,x));
	
}

double avalia(double* poli, int grau, double x){
	double resultado=0;
	int i;
	for(i=0;i<=grau;i++){
		resultado += (poli[i] * pow(x,i));
	}
	return(resultado);
}

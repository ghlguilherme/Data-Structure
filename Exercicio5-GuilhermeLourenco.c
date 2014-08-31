#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Protótipo da função
double pi(int n);

void main(int argc, char *argv[]){
	int n;
	printf("Aproximacao do PI ::: Quanto maoir valor de n, melhor a aproximacao::\n");
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	printf("O valor aproximado de pi: %.16lf\n", pi(n));
	
	
}

double pi(int n){
   double *p;
   //Alocação dinâmica para calcular pi com precisao de até 10^17
   p= (double*)malloc(10000000*sizeof(double));
   
   if(p==NULL){
   	printf("Memoria insuficiente!!!");
   	exit(1);
   }
   
   int den=1,i=1;
 while(i<=n){
 	if(i%2==0){
 		*p = *p + (-1)*pow(den,-1);
 		den+=2;
 	}
 	else{
 		*p = *p + pow(den,-1);
 		den+=2;
 	}
 	//printf("%d  %.16lf \n",den, p);
 	i++;
 }
  return(4 * *p);
}

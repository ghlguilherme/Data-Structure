#include <stdio.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Protótipo da função
int fibonacci(int n);

void main(int argc, char *argv[]){
	int n;
	printf("Digite um termo da serie: ");
	scanf("%d",&n);
	printf("Termo: %d \n",fibonacci(n));
}

int fibonacci(int n){
	int i=0, a=1,b=1,c;
	for(i=1;i<=n;i++){
		if(n==1) return(a);
		if(n==2) return(b);
		
	    if(i>2){
		   c=a+b;
		   a=b;
		   b=c;
	    } 
	}
	return(c);
     
}


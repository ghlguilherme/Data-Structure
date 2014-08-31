#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Protótipo da função primo
int primo(int n);

void main(int argc, char *argv[]){
    int n;
    printf("Digite um numero: ");
    scanf("%d",&n);
    
    printf("O retorno da funcao foi: %d\n",primo(n));
    
    primo(n)?printf("\n\nNumero primo!"): printf("\n\nNao Primo!");
		


}

int primo(int n){
	int divisores = 0, i=1;
	if(n==2) return(1);
	
     for(i=1;i<=n;i++){
     	if(n%i==0){
     		divisores = divisores + 1;
     		printf("divisores: %d    %d\n",divisores,i);
     	}
     }	
   if(divisores<=2){
   	return(1);
   }else{
   	return(0);
   }
}

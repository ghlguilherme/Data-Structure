#include<stdio.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Usando estrutura verifica se um ponto está dentro do retângulo: 
struct ponto{
	int x;
	int y;
};
typedef struct ponto Ponto;
int dentroRet(Ponto* v1,Ponto* v2,Ponto* p);

void main(int argc, char *argv[]){
  Ponto v1;
  Ponto v2;
  Ponto p;
  printf("\nESCREVA NO FORMATO x,y \n\n");
  printf("Digite o valor para o ponto v1: ");
  scanf(" %d,%d",&v1.x,&v1.y);
  
  printf("Digite o valor para o ponto v2: ");
  scanf(" %d,%d",&v2.x,&v2.y);
  
  printf("Digite o valor para o ponto p: ");
  scanf(" %d,%d",&p.x,&p.y);
  
  if(dentroRet(&v1,&v2,&p)){
  	printf("\nDENTRO DO RETANGULO\n");
  }else{
  	printf("\nFORA DO RETANGULO\n");
  }
 
 	
}


int dentroRet(Ponto* v1,Ponto* v2,Ponto* p){
	if((p->x<=v2->y) && (p->x>=v1->y) && (p->y<=v2->y) && (p->y>=v1->y)){
		return(1);
	} 
	else{
		return(0);
	}
}

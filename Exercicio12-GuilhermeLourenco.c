#include <stdio.h>
#include <stdlib.h>
/*
 * Author: Guilherme Henrique Louren�o
 * �ltima Modifica��o: 29/08/2014
 * Language:  C
 */
 
int verificaSimetriaVersao1(int* matriz1,int* matriz1Transposta,int l,int c);
int verificaSimetriaVersao2(int** matriz2,int** matriz2Transposta,int l,int c);


void main(int argc, char *argv[]){
	int *matriz1,*matriz1Transposta,**matriz2Transposta,**matriz2,l,c; //Matriz2 � declarada como um ponteiro de ponteiros.
	printf("Digite o numero de linhas da matriz: ");
	scanf("%d",&l);
	printf("Digite o numero de colunas: ");
	scanf("%d",&c);
	
	//Aloca��o da matriz1 pelo m�todo 1:
	matriz1 = (int *)malloc(l*c*sizeof(int));
	//Aloca��o de espa�o de mem�ria para a transposta da matriz1:
	matriz1Transposta=(int *)malloc(l*c*sizeof(int));
	
	//Aloca��o da matriz2 pelo m�todo 2
	int i;//Usado no la�o for para alocar as colunas.
	matriz2 = (int**)malloc(l*sizeof(int));
	    for(i=0;i<l;i++){
	    	matriz2[i] = (int*)malloc(c*sizeof(int));
	    }
	//Aloca��o de espa�o de mem�ria para a trasposta da matriz2:
	matriz2Transposta = (int**)malloc(l*sizeof(int));
	    for(i=0;i<l;i++){
	    	matriz2Transposta[i] = (int*)malloc(sizeof(int));
	    }    
	    
	    
	 //Preenche matriz1:
	 printf("\n\nPREENCHENDO MATRIZ1:\n");
	 int m,n;
	 for(m=0;m<l;m++){
	 	for(n=0;n<c;n++){
	 		printf("Digite o valor para a posicao[%d][%d]  : ",m,n);
	 		scanf("%d",&matriz1[n*l+m]);
	 	}
	 }   
	//Imprimindo matriz1:
	printf("\n\nIMPRIMINDO MATRIZ1:\n");
	 for(m=0;m<l;m++){
	 	for(n=0;n<c;n++){
	 		printf("Valor para a posicao[%d][%d] =  %d:\n",m,n,matriz1[n*l+m]);
	 	}
	 }       
	    
    //Preenchendo a matriz2:
	printf("\n\nPREENCHENDO A MATRIZ2:\n");
	for(m=0;m<l;m++){
		for(n=0;n<c;n++){
			printf("Digite o valor para a posicao[%d][%d]  : ",m,n);
			scanf("%d",&matriz2[n][m]);
		}
	}	
	//Imprimindo matriz2:
	printf("\n\nIMPRIMINDO MATRIZ2:\n");
	 for(m=0;m<l;m++){
	 	for(n=0;n<c;n++){
	 		printf("Valor para a posicao[%d][%d] =  %d:\n",m,n,matriz2[n][m]);
	 	}
	 }  
	 
	 //Cria��o das matrizes transpostas
	 //printf("\n\nIMPRIMINDO MATRIZ1 TRANPOSTA: \n");
	 //Primeira matriz transposta:
	 for(m=0;m<l;m++){
	 	for(n=0;n<c;n++){
	 		matriz1Transposta[m*c+n] = matriz1[n*c+m];
	 		//printf("[%d][%d] = %d\n",m,n,matriz1Transposta[m*c+n]);
	 	}
	 }
	 //printf("\n\nIMPRIMINDO MATRIZ2 TRANSPOSTA: \n");
	 //Segunda matriz transposta:
	 for(m=0;m<l;m++){
	 	for(n=0;n<c;n++){
	 	   
	 		matriz2Transposta[n][m] = matriz2[m][n];
	 		//printf("[%d][%d] = %d\n",m,n,matriz2Transposta[n][m]);
	 		
	 	}
	 }
	 printf("\n\n");
	 //Verifica se a matriz1 � sim�trica:
	 if(verificaSimetriaVersao1(matriz1,matriz1Transposta,l,c)){
	 	printf("\n\nMatriz 1 = SIMETRICA\n\n");
	 }else{
	 	printf("\n\nMatriz 1 = NAO SIMETRICA\n\n");
	 }
	 
	 //Verifica se a matriz2 � sim�trica:
	 if(verificaSimetriaVersao2(matriz2,matriz2Transposta,l,c)){
	 	printf("\n\nMatriz 2 = SIMETRICA\n\n");
	 }else{
	 	printf("\n\nMatriz 2 = NAO SIMETRICA\n\n");
	 }
}

int verificaSimetriaVersao1(int* matriz1, int* matriz1Transposta,int l,int c){
	int i,j,elementos,contador=0;
	elementos = l*c;
	  for(i=0;i<l;i++){
	  	for(j=0;j<c;j++){
	  		if(matriz1Transposta[i*c+j] == matriz1[i*c+j]){
				contador++;
	  			printf("posicao: a-> %d b-> %d || contador: %d || elementos da matriz %d \n",matriz1[i*c+j],matriz1Transposta[i*c+j],contador,elementos);
	  		}
	  	}
	  }
	   return((contador==elementos)?1:0);
}
int verificaSimetriaVersao2(int** matriz2,int** matriz2Transposta,int l,int c){
	int i,j,elementos,contador=0;
	elementos = l*c;
	  for(i=0;i<l;i++){
	  	for(j=0;j<c;j++){
	  		if(matriz2[i][j]==matriz2Transposta[i][j]){
	  			contador++;
	  			printf("posicao: a-> %d b-> %d || contador: %d || elementos %d \n",matriz2[i][j],matriz2Transposta[i][j],contador,elementos);
	  		}
	  	}
	  }
	return((contador==elementos)?1:0);
}

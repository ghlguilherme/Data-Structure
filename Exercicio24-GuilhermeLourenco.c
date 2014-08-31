#include<stdio.h>
#include<stdlib.h>
/*
 * Author: Guilherme Henrique Lourenço
 * Última Modificação: 29/08/2014
 * Language:  C
 */
 
//Realiza o cadastro de alunos de uma disciplina e imprime matricula, nome, turma e media de todos os alunos.
struct aluno{
	char nome[81];
	char matricula[8];
	char turma;
	float p1;
	float p2;
	float p3;
};
typedef struct aluno Aluno;

void imprime_aprovados(int n, Aluno** turmas);

void main(int argc, char *argv[]){
	int numeroDeAlunos,i;
	
	printf("Digite o numero de alunos: ");
	scanf(" %d",&numeroDeAlunos);
 	
    Aluno* alunos[numeroDeAlunos];
    
	
	for(i=0;i<numeroDeAlunos;i++){
		alunos[i] = (Aluno*)malloc(sizeof(Aluno));
		printf("\n\nDigite o nome do Aluno: ");
		scanf(" %s",&alunos[i]->nome);
		//printf("%s\n",alunos[i].nome);
		printf("Digite o numero de matricula: ");
		scanf(" %s",&alunos[i]->matricula);
		//printf("%s\n",alunos[i].matricula);
		printf("Digite a turma do aluno: ");
		scanf(" %c",&alunos[i]->turma);
		printf("Digite a nota de p1: ");
		scanf(" %f",&alunos[i]->p1);
		printf("Digite a nota de p2: ");
		scanf(" %f",&alunos[i]->p2);
		printf("Digite a nota de p3: ");
		scanf(" %f",&alunos[i]->p3);
	} 
	 
	 /*for(i=0;i<numeroDeAlunos;i++){
	 	printf("NOMES: %s\n",alunos[i].nome);
	 }*/
	 imprime_aprovados(numeroDeAlunos,alunos);
}

void imprime_aprovados(int n, Aluno** turmas){
	float media;
	int i=1;
	
	for(i=0;i<n;i++){
	    media = (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3)/3;
	    if(media>=6){
	    	printf("\n\nAluno Aprovado: %s\n",turmas[i]->nome);
	    	printf("Numero MATR: %s\n",turmas[i]->matricula);
	    	printf("Turma: %c\n",turmas[i]->turma);
	    	printf("Media: %2.f\n\n",media);
	    }
	}
}


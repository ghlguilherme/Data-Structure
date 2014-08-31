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

float media_turma(int n,Aluno** turmas,char turma);

void main(int argc, char *argv[]){
	int numeroDeAlunos,i;
	char turma;
	float mediaTurma;
	printf("Digite o numero de alunos: ");
	scanf(" %d",&numeroDeAlunos);
 	
    Aluno* alunos[numeroDeAlunos];
    
	
	for(i=0;i<numeroDeAlunos;i++){
		alunos[i] = (Aluno*)malloc(sizeof(Aluno));
		printf("\n\nDigite o nome do Aluno: ");
		scanf(" %s",&alunos[i]->nome);
		printf("Digite o numero de matricula: ");
		scanf(" %s",&alunos[i]->matricula);
		printf("Digite a turma do aluno: ");
		scanf(" %c",&alunos[i]->turma);
		printf("Digite a nota de p1: ");
		scanf(" %f",&alunos[i]->p1);
		printf("Digite a nota de p2: ");
		scanf(" %f",&alunos[i]->p2);
		printf("Digite a nota de p3: ");
		scanf(" %f",&alunos[i]->p3);
	} 
	 
	printf("\nDigite a turma que deseja consultar a media final: ");
	scanf(" %c",&turma); 
	
	mediaTurma = media_turma(numeroDeAlunos,alunos,turma);
	
	printf("A media da turma %c foi: %.2f\n",turma,mediaTurma);

}

float media_turma(int n, Aluno** turmas, char turma){
	int i;
	float SomaMediaAlunos=0,contaAlunos=0,mediaTurma;
	
	for(i=0;i<n;i++){
		if(turmas[i]->turma==turma){
			SomaMediaAlunos += ((turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3)/3);
			contaAlunos++;
		}
	}
	
	mediaTurma = SomaMediaAlunos/contaAlunos;
	return(mediaTurma);
}




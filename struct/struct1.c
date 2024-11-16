#include<stdio.h>
#include<stdlib.h>

struct Aluno{
	char nomeAluno[50];
	int idade;
	float nota;
};

void imprimeAluno(struct Aluno a);

int main(){
	int i;
	struct Aluno a[3];
	
	for(i=0;i<3;i++){
		printf("Digite o nome do aluno %d: \n",i);
		scanf("%s",&a[i].nomeAluno);
	}
	
	for(i=0;i<3;i++){
		printf("Digite a idade do aluno %d: \n",i);
		scanf("%d",&a[i].idade);
	}
	
	for(i=0;i<3;i++){
		printf("Digite a nota do aluno %d: \n",i);
		scanf("%f",&a[i].nota);
	}
	
	printf("====Dados dos alunos====\n");
	imprimeAluno(a[0]);
	imprimeAluno(a[1]);
	imprimeAluno(a[2]);
	
	return 0;
}

void imprimeAluno(struct Aluno a){
	printf("Nome: %s, Idade: %d, Nota: %.2f\n",a.nomeAluno,a.idade,a.nota);
}

#include<stdio.h>
#include<stdlib.h>

struct Funcionario{
	char nome[50];
	char cargo[50];
	float salario;
};

void imprimeFuncionario(struct Funcionario f[],int n);

void Imprime();

int main(){
	int i;
	int n;
	
	printf("Quantos funcionarios voce quer cadastrar: \n");
	scanf("%d",&n);
	
	struct Funcionario f[n];
	
	for(i=0;i<n;i++){
		printf("Digite o nome do funcionario %d: \n",i);
		scanf("%s",&f[i].nome);
	}
	
	for(i=0;i<n;i++){
		printf("Digite o cargo do funcionario %d: \n",i);
		scanf("%s",&f[i].cargo);
	}
	
	for(i=0;i<n;i++){
		printf("Digite o salario do funcionario %d: \n",i);
		scanf("%f",&f[i].salario);
	}
	
	Imprime();
	imprimeFuncionario(f,n);
	return 0;	
}

void imprimeFuncionario(struct Funcionario f[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("Nome: %s, Cargo: %s, Salario: %.2f\n",f[i].nome,f[i].cargo,f[i].salario);
	}
		
}

void Imprime(){
	printf("====Dados do Funcionario====\n");
}

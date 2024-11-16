#include<stdio.h>
#include<stdlib.h>

float mediaAluno(float n1,float n2,float n3,float n4);
	
int main(){
	float no1,no2,no3,no4;
	float mediaa;
	
	printf("Digite as quatro notas: \n");
	scanf("%f %f %f %f",&no1,&no2,&no3,&no4);
	
	mediaa = (mediaAluno(no1,no2,no3,no4));
	
	return 0;
}

float mediaAluno(float n1,float n2,float n3,float n4){
	float media = (n1+n2+n3+n4)/4;
	printf("Media: %.2f\n",media);
	if(media>=7){
		printf("Aprovado");
	}else{
		printf("Reprovado");
	}
}

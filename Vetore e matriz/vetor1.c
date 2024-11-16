#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n;
	int i;
	int soma = 0;
	
	printf("Digite a quantidade de espacos no vetor: \n");
	scanf("%d",&n);
	
	
	int *vet = (int *)malloc(n *sizeof(int));
	
	for(i=0;i<n;i++){
		printf("Digite o elemento %d do vetor: \n",i);
		scanf("%d",&vet[i]);
	}
	
	for(i=0;i<n;i++){
		soma = soma + vet[i];
	}
	
	printf("A soma dos elementos e: %d",soma);
	
	return 0;
}

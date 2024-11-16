#include<stdio.h>
#include<stdlib.h>

int somaVet(int vet[5]);

int main(){
	int i;
	int vetA[5];
	
	for(i=0;i<5;i++){
		printf("Digite o numero %d do vetor: \n",i);
		scanf("%d",&vetA[i]);
	}
	
	somaVet(vetA);
	
	return 0;
}

int somaVet(int vet[5]){
	int i;
	int soma = 0;
	float media;
	for(i=0;i<5;i++){
		soma += vet[i];
	}
	
	media = soma/5;
	
	printf("Soma: %d\n",soma);
	printf("Media: %.2f\n",media);
}

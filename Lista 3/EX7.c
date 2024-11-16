#include<stdio.h>
#include<stdlib.h>

int maiorValor(int vet[],int n);

int main(){
	int i;
	int n1;
	
	printf("Digite o tamanho do vetor: \n");
	scanf("%d",&n1);
	
	int vetA[n1];
	
	for(i=0;i<n1;i++){
		printf("Digite o %d numero do vetor: \n",i);
		scanf("%d",&vetA[i]);
	}
	
	maiorValor(vetA,n1);
	
	return 0;
}

int maiorValor(int vet[],int n){
	int i;
	int maior;
	maior = vet[0];
	
	for(i=1;i<n;i++){
		if(vet[i]>maior){
			maior = vet[i];
		}
	}
	
	printf("O maior numero dentro do vetor e: %d\n",maior);
}


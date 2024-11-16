#include<stdio.h>
#include<stdlib.h>

int multiplicaValores(int vet[],int n,int m);

int main(){
	int i;
	int n;
	int mult;
	
	printf("Digite o tamanho do vetor: \n");
	scanf("%d",&n);
	
	int vetA[n];
	
	for(i=0;i<n;i++){
		printf("Digite o %d numero do vetor: \n",i);
		scanf("%d",&vetA[i]);
	}
	
	printf("Digite o numero que voce quer multiplicar o vetor: \n");
	scanf("%d",&mult);
	
	multiplicaValores(vetA,n,mult);
	
	return 0;
	
}

int multiplicaValores(int vet[],int n,int m){
	int i;
	for(i=0;i<n;i++){
		vet[i] *= m;
	}
	
	for(i=0;i<n;i++){
		printf("%d\n",vet[i]);
	}
	
}

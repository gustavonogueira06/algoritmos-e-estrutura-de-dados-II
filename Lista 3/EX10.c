#include<stdio.h>
#include<stdlib.h>

void maiorNumero(int n1,int n2);

int main(){
	int n1;
	int n2;
	
	printf("Digite o primeiro numero: \n");
	scanf("%d",&n1);
	
	printf("Digite o segundo numero: \n");
	scanf("%d",&n2);
	
	maiorNumero(n1,n2);
	
	return 0;
}

void maiorNumero(int n1,int n2){
	if(n1>n2){
		printf("O numero maior e %d",n1);
	}else if(n2>n1){
		printf("O numero maior e %d",n2);
	}else{
		printf("Os numeros sao iguais");
	}
}

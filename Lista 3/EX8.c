#include<stdio.h>
#include<stdlib.h>

void exibirPares(int n);

int main(){
	int n;
	printf("Digite um numero: \n");
	scanf("%d",&n);
	
	exibirPares(n);
	
	return 0;
}

void exibirPares(int n){
	int i;
	for(i=1;i<=n;i++){
		if(i % 2 == 0){
			printf("%d\n",i);
		}
	}
}

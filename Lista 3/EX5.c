#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>

int impares(n);

int main(){
	int n1;
	int i;
	
	printf("Digite um numero: \n");
	scanf("%d",&n1);
	
	impares(n1);
	
	return 0;
}

int impares(n){
	int i;
	for(i=1;i<=n;i++){
		if(i % 2 == 1){
			if(i % 7 != 0)
			printf("%d\n",i);
		}
	}
	
	
}

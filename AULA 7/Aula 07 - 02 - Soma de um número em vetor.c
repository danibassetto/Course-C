#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int A[10], B[10], i, n;
	
	for(i = 0; i < 10; i++){
		
		printf("\nInforme o elemento %d: ", i+1);
		scanf("%d", &A[i]);
	}
	
	printf("\nVetor A: ");
	for(i = 0; i < 10; i++){
		printf("%d ", A[i]);
	}
	
	printf("\nInforme o número que deseja somar a cada elemento de A: \n");
	scanf("%d", &n);
	
	printf("\nNúmeros após soma: \n");
	for (i = 0; i < 10; i++){
		B[i] = A[i] + n;
		printf("%d ", B[i]);
	}
	
	
}

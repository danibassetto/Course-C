#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int n, i;
	
	printf("Informe um n�mero: ");
	scanf("%d", &n);
	
	printf("\nTABUDA DO N�MERO %d\n", n);
	for (i = 1; i <= 10; i++){
		printf("\n%d X %d = %d\n", i, n, i * n);
	}
}

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n, soma;
	while (n != 0){
		printf("\nDigite um número para soma ou 0 para encerrar: ");
		scanf("%d", &n);
		soma += n;
	}
	
	/*int n, soma, continuar;
	soma = 0;
	continuar = 1;
	
	while (continuar)
	{
		printf("\nDigite um número para soma: ");
		scanf("%d", &n);
		soma = soma + n;
		printf("\nDeseja continuar? (1 para Sim e 0 para Não) ");
		scanf("%d", &continuar);
	}
	*/
	
	printf("\nSoma dos números informados = %d", soma);
		
}

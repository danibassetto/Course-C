#include <stdio.h>
int main()
{
	int condicao,numero,continuar,soma;
	condicao = 1
	continuar = 1;
	soma = 0;
	while(condicao)
	{
		printf("Digite um número para a soma: ");
		scanf("%d", &numero);
		printf("Deseja continuar (S/N): ");
		scanf("%c", &continuar);
		if(continuar.lower() != 's')
			soma = soma + numero;
		else
			condicao = 0;
	}	
	printf("A soma dos numero digitados e: %d",soma);	
}
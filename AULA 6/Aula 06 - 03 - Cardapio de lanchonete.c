#include <stdio.h>
int main()
{
	int condicao,produto,quantidade;
	float totalparcial,total;
	totalparcial = 0;
	total = 0;
	do
	{
		printf("------------------------------------\n");
		printf("| Especificacao   | Codigo | Preco |\n");
		printf("------------------------------------\n");
		printf("| Cachorro Quente |   100  |  1.20 |\n");
		printf("| Bauru Simples   |   101  |  1.30 |\n");
		printf("| Bauru com Ovo   |   102  |  1.50 |\n");
		printf("| Hamburguer      |   103  |  1.20 |\n");
		printf("| Cheeseburguer   |   104  |  1.70 |\n");
		printf("| Suco            |   105  |  2.20 |\n");
		printf("| Refrigerante    |   106  |  1.00 |\n");
		printf("------------------------------------\n");
		printf("Quais produtos deseja consumir?\n");
		printf("------------------------------------\n");
		printf("Digite o código do produto: ");
		scanf("%d", &produto);
		printf("Digite a quantidade desejada: ");
		scanf("%d", &quantidade);
		if(produto == 100)
		  totalparcial = 1.2 * quantidade;
		if(produto == 101)
		  totalparcial = 1.3 * quantidade;
		if(produto == 102)
		  totalparcial = 1.5 * quantidade;
		if(produto == 103)
		  totalparcial = 1.2 * quantidade;
		if(produto == 104)
		  totalparcial = 1.7 * quantidade;
		if(produto == 105)
		  totalparcial = 2.2 * quantidade;
		if(produto == 106)
		  totalparcial = 1.0 * quantidade;
		total = total + totalparcial;
		printf("Deseja continuar? (1 - Sim | 0 - Não): ");
		scanf("%d", &condicao);
	}while(condicao);
	printf("A total da conta e: %.2f",total);	
}
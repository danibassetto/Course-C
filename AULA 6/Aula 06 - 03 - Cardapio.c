#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	int codigo, quantidade, encerrar;
	float preco, total;
	encerrar = 1;
	
	while (encerrar){
		printf("\nInforme o código do produto: ");
		scanf("%d", &codigo);
		printf("\nInforme a quantidade: ");
		scanf("%d", &quantidade);
		
		if (codigo == 100)
		{
			preco = quantidade * 1.20;
			printf("\nCachorro Quente >> %d x 1.20 = %.2f\n", quantidade, preco);
			total += preco;
		}
		if (codigo == 101)
		{
			preco = quantidade * 1.30;
			printf("\nBauru Simples >> %d x 1.30 = %.2f\n", quantidade, preco);
			total += preco;
		}
		if (codigo == 102)
		{
			preco = quantidade * 1.50;
			printf("\nBauru com Ovo >> %d x 1.50 = %.2f\n", quantidade, preco);
			total += preco;
		}
		if (codigo == 103)
		{
			preco = quantidade * 1.20;
			printf("\nHamburguer >> %d x 1.20 = %.2f\n", quantidade, preco);
			total += preco;
		}
		if (codigo == 104)
		{
			preco = quantidade * 1.70;
			printf("\nCheeseburguer >> %d x 1.70 = %.2f\n", quantidade, preco);
			total += preco;
		}
		if (codigo == 105)
		{
			preco = quantidade * 2.20;
			printf("\nSuco >> %d x 2.20 = %.2f\n", quantidade, preco);
			total += preco;
		}
		if (codigo == 106)
		{
			preco = quantidade * 1.00;
			printf("\nRefrigerante >> %d x 1.00 = %.2f\n", quantidade, preco);
			total += preco;
		}
		
		printf("\nDeseja encerrar? (1 para Não e 0 para Sim)\n");
		scanf("%d", &encerrar);
	}
	
	printf("Total = %.2f", total);
}

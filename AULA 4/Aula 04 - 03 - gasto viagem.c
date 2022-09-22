#include <stdio.h>
int main()
{
	float preco, desempenho, distancia, litros, gasto;
	printf("Digite o preço do combustível: ");
	scanf("%f", &preco);
	printf("Digite o desempenho do veículo (km/l): ");
	scanf("%f", &desempenho);
	printf("Digite a distância entre as cidades (km): ");
	scanf("%f", &distancia);
	litros = distancia/desempenho;
	gasto = litros * preco;
	printf("Serão gastos %.2f litros e R$ %.2f", litros,gasto);
}
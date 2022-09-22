#include <stdio.h>
int main()
{
	float salario, reajuste, novosalario;
	printf("Digite o salario atual: ");
	scanf("%f", &salario);
	printf("Digite o reajuste (%): ");
	scanf("%f", &reajuste);	
	novosalario = salario + (salario * (reajuste/100));
	printf("O novo salario e: %.2f", novosalario);
}
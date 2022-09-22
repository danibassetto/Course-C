/* Escreva um programa para ler um uma  temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius | C = ((F – 32)/9)*5 |
Salve com o seguinte formato:  "seu nome - exercicio 03.c" */

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt-br");  // compilando em português
	
	float F, C;  // declarando as variáveis
	
	printf("Informe a temperatura em graus Fahrenheit: ");
	scanf("%f", &F);  // entrando com o valor em Fahrenheit
	
	C = ((F - 32)/9) * 5;  // convertendo para Celsius
	
	printf("\nTemperatura em Celsius: %.2f°C", C);  // Exibindo a temperatura em Celsius
}

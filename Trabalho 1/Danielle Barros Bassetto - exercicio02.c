// Escreva um programa que leia um valor em metros e o exiba convertido em  mil�metros. Salve com o seguinte formato:  "seu nome - exercicio 02.c"

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt-br");  // compilando em portugu�s
	
	float metros, milimetros;  // declarando as vari�veis
	
	printf("Informe o valor em metros que deseja converter em milimetros: ");
	scanf("%f", &metros);  // entrando com o valor em metros
	
	milimetros = metros * 1000;  // convertendo em milimetros
	
	printf("\n%.2fm = %.2fmm", metros, milimetros);  // exibindo a convers�o
}

#include <stdio.h>
int main()
{
	char nome[30]; /* declaração de uma string para armazenar no maximo 30 caracteres */
	printf("Qual o seu nome? ");
	scanf("%[^\n]", &nome); /* Entre com seu nome */	
	printf("Olá %s! \n", nome);
}
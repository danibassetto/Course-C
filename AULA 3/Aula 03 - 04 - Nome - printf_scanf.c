#include <stdio.h>
int main()
{
	char nome[30]; /* declara��o de uma string para armazenar no maximo 30 caracteres */
	printf("Qual o seu nome? ");
	scanf("%[^\n]", &nome); /* Entre com seu nome */	
	printf("Ol� %s! \n", nome);
}
// Escreva um programa para receber 3  valores inteiros do usu�rio e mostrar a  sua m�dia. Salve com o seguinte formato: "seu nome - exercicio 01.c" 

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt-br");  // compilando em portugu�s
	
	int n1, n2, n3;  // declarando os valores inteiros
	float media;  // declarando a m�dia como float pois pode ser valor quebrado
	
	printf("Informe o primeiro valor: "); 
	scanf("%d", &n1);  // entrando com o valor da primeira vari�vel
	printf("\nInforme o segundo valor: "); 
	scanf("%d", &n2);  // entrando com o valor da segunda vari�vel
	printf("\nInforme o terceiro valor: ");  
	scanf("%d", &n3);  // entrando com o valor da terceira vari�vel
	
	media = (float)(n1 + n2 + n3) / 3; // calculando a m�dia e convertendo os inteiros para float para gerar uma m�dia mais precisa
	
	printf("\nMedia: %.2f", media); // exibindo a m�dia 
}



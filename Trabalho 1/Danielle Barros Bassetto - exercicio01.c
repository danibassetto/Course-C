// Escreva um programa para receber 3  valores inteiros do usuário e mostrar a  sua média. Salve com o seguinte formato: "seu nome - exercicio 01.c" 

#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "pt-br");  // compilando em português
	
	int n1, n2, n3;  // declarando os valores inteiros
	float media;  // declarando a média como float pois pode ser valor quebrado
	
	printf("Informe o primeiro valor: "); 
	scanf("%d", &n1);  // entrando com o valor da primeira variável
	printf("\nInforme o segundo valor: "); 
	scanf("%d", &n2);  // entrando com o valor da segunda variável
	printf("\nInforme o terceiro valor: ");  
	scanf("%d", &n3);  // entrando com o valor da terceira variável
	
	media = (float)(n1 + n2 + n3) / 3; // calculando a média e convertendo os inteiros para float para gerar uma média mais precisa
	
	printf("\nMedia: %.2f", media); // exibindo a média 
}



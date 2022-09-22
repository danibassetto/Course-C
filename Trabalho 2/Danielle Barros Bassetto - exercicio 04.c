/* Escreva um programa que imprima na tela, de 1 até 100, de 1 em 1 usando while, imprima somente os pares de 1 até 100 usando 
for e imprima somente os ímpares usando do while.. Salve com o seguinte formato: "seu nome - exercicio 04.c" */

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");   // comando para usar idioma local
	
	int n, p, i;  // declaração das variáveis utilizadas
	n = 1;  // atribuindo a n e a i o valor 1, para que iniciem a contagem com ele
	i = 1; 
	
	printf("Números de 1 a 100:\n");  
	while (n <= 100) {  // while sendo para exibir os números de 1 a 100
		printf("%d ", n);
		n++;
	}
	
	printf("\n");
	
	printf("\nNúmeros pares:\n");
	for (p = 1; p <= 100; p++) {  // for para exibir os números pares
		if (p % 2 == 0) {
			printf("%d ", p);
		}
	}
	
	printf("\n");
	
	printf("\nNúmeros ímpares:\n");
	while (i <= 100) {  // while para exibir os números ímpares
		if (i % 2 != 0) {
			printf("%d ", i);
		}
		i++;
	}
}

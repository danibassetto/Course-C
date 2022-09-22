/* Criar uma matriz “A” de 7 linhas e 3 colunas, preencher com valores digitados pelo usuário, exibindo a ele a posição que
será preenchida, e imprimir a matriz ao final. Salve com o seguinte formato: "seu nome - exercicio 05.c" */

#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");  // comando para utilizar idioma local
	
	int i, j, M[7][3];  // declarando variáveis e matriz
	
	for(i=0; i<7; i++){  // for para informar os valores da matriz
		for(j=0; j<3; j++){
			printf("\nInforme o elemento da posição %d x %d: ", i+1, j+1);  // informa a posição, sendo que para facilitar ao usuário consideramos o 0 como 1
			scanf("%d", &M[i][j]);
		} 
	}
	
	printf("\nEXIBINDO A MATRIZ 7 X 3\n"); 
	printf("\n");
	for(i=0;i<7;i++){  // com outro for exibimos a matriz
		for(j=0;j<3;j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
	
}

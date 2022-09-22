#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "");
	
	int i, j, M[7][3];
	
	for(i=0; i<7; i++){
		for(j=0; j<3; j++){
			printf("\nInforme o elemento da posição %d x %d: ", i+1, j+1);
			scanf("%d", &M[i][j]);
		} 
	}
	
	printf("\nEXIBINDO A MATRIZ 7 X 3\n");
	printf("\n");
	for(i=0;i<7;i++){
		for(j=0;j<3;j++){
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}
}

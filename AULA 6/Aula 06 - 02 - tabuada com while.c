#include <stdio.h>
int main()
{
	int numero,contador,resultado;
	contador = 0;
	printf("Digite um número para exibir a tabuada: ");
	scanf("%d", &numero);
	while(contador <= 10)
	{
		resultado = numero * contador;
		printf("%d x %d = %d\n",contador,numero,resultado);
		contador = contador + 1;
	}
}
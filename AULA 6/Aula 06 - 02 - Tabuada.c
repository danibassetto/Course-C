#include <stdio.h>
#include <locale.h>

int main() {
	
	setlocale(LC_ALL, "portuguese");
	int numero, contador, resultado;
	contador = 0;
	
	printf("Informe o número que deseja exibir a tabuada: ");
	scanf("%d", &numero);
	
	printf("\n<<< TABUADA DO %d >>>\n", numero);
	while (contador <= 10)
	{
		printf("\n%d X %d = %d", contador, numero, numero * contador);
		contador = contador + 1;
	}
		
}

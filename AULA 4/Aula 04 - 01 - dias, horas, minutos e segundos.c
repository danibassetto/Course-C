#include <stdio.h>
int main()
{
	int d, h, m, s, total;
	printf("Digite a quantidade de dias: ");
	scanf("%d", &d);
	printf("Digite a quantidade de horas: ");
	scanf("%d", &h);
	printf("Digite a quantidade de minutos: ");
	scanf("%d", &m);
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &s);	
	total = (d*24*60*60) + (h*60*60) + (m*60) + s;
	printf("O total em segundos e: %d", total);
}
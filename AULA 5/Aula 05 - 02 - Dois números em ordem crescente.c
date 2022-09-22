#include <stdio.h>
int main() 
{
	int a,b;
	printf("Digite o valor de A: ");
	scanf("%d",&a);
	printf("Digite o valor de B: ");
	scanf("%d",&b);

	if(a < b)
	{
		printf("A ordem crescente e: %d %d",a,b);
	}
	else
	{
		printf("A ordem crescente e: %d %d",b,a);
	}
}



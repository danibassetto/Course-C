# include<stdio.h> /* Biblioteca para usar o scanf() */
void main()
{
	char nome[30];
	int idade;

	printf("Digite o seu nome: ");
	scanf("%s",&nome); // Usa-se %s por se tratar de string
	printf("\nDigite a sua idade: ");
	scanf("%d",&idade); // Usa-se %d por se tratar de inteiro

	printf("\n %s tem %d anos!!!",nome,idade);
}
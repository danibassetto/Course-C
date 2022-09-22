#include <stdio.h>
int main ()
{
    int primeiro, segundo, quadradoprimeiro, quadradosegundo, soma;
    printf ("digite um valor: ");
    scanf("%d", &primeiro);
    printf ("digite outro valor: ");
    scanf("%d", &segundo);

    quadradoprimeiro = primeiro*primeiro;
    quadradosegundo = segundo*segundo;
    soma = quadradoprimeiro + quadradosegundo;

    printf("A soma do quadrado dos valore é %d \n",soma);
}
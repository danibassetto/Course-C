#include <stdio.h>
int main()
{
    int primeiro, segundo, dobroprimeiro, dobrosegundo;
    printf ("digite um valor: ");
    scanf("%d", &primeiro);
    printf ("digite um valor: ");
    scanf("%d", &segundo);	

    dobroprimeiro = 2*primeiro;
    dobrosegundo = 2*segundo;

    printf("O dobro do primeiro valor é %d e o dobro do segundo valor é %d \n",dobroprimeiro, dobrosegundo);
}
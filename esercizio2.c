#include <stdio.h>

int main()
{
int numero1;
int numero2;
int media;

printf("\nInserisci primo numero: ");
scanf("%d", &numero1);

printf("\nInserisci secondo numero: ");
scanf("%d", &numero2);
media = (numero1 + numero2)/2;

printf("\n(%d + %d)/2 = %d\n", numero1, numero2, media);

return 0;
}
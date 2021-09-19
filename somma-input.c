#include <stdio.h>

int main()
{
	int a = 0, b = 0, c = 0;

	do
	{
		printf("inserisci il primo numero:\n");
		scanf("%d", &a);
	} while (a <= 0);

	do
	{
		printf("inserisci il secondo numero:\n");
		scanf("%d", &b);
	} while (b <= 0);

	c = a + b;
	printf("Il risultato e': %d", c);
}

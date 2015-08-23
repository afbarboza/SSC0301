#include <stdio.h>

int main ()
{
	int x, y, z;

	printf("\n digite um numero inteiro:");
	scanf("%d", &x);

	printf("\n digite um numero inteiro:");
	scanf("%d", &y);

	printf("\n digite um numero inteiro:");
	scanf("%d", &z);

	if (x > y)
		if (x > z)
			printf("%d", x);
		else
			printf("%d", z);
	else
		if (y > z)
			printf("%d",y);
		else
			printf("%d",z);
	return 0;
}

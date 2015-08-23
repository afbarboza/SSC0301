#include <stdio.h>

/*
 * Em cada printf, tente escrever os casos.
 * Exemplo: printf("%d\n", x); //(x > y > z)
 */

int main ()
{
	int x,y,z;
	scanf("%d %d %d ", &x, &y, &z);

	if (x > y)
		if (x > z)
			printf ("%d", x);
		else
			printf ("%d", z);
	else
		if (y > z)
			printf ("%d", y);
		else
			printf ("%d", z);

	return 0;
}

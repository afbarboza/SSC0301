#include <stdio.h>

int main ()
{
	int x, y, z;
	printf ("Digite tres numeros inteiros");
	scanf ("%d",&x);
	scanf ("%d",&y);
	scanf ("%d",&z);

	if (x > y)
		if (x > z)
			printf("%d", x);
		else
			printf ("%d", z);
	else
		if (y > z)
			printf ("%d", y);
		else
			printf ("%d", z);
	return 0;
}

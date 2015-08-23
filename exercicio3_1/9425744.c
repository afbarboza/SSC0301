#include <stdio.h>

int main ()
{
	int x,y,z;
	printf ("\ncoloque um valor inteiro:");
	scanf ("%d",&x);
	printf ("\ncoloque mais um valor inteiro:");
	scanf ("%d",&y);
	printf ("\ncoloque outro valor inteiro:");
	scanf ("%d",&z);

	if (x>y)
		if (x>z)
			printf ("o maior valor e o primeiro ");
		else
			printf ("o maior valor e o terceiro");
	else
		if (y>z)
			printf ("o maior valor e o segundo");
		else
			printf ("o maior valor e o terceiro");
	return 0;
}

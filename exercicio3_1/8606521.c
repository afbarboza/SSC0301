#include <stdio.h>

int main ()
{
	float x,y,z;
	printf ("Digite o primeiro numero: \n");
	scanf ( "%d", &x);
	printf ("Digite o segundo numero: \n");
	scanf ("%d", &y);
	printf ("Digite o terceiro numero: \n");
	scanf ("%d", &z);

	if  (x>y && x>z)
		printf ("O primeiro numero eh maior");
	else if (y>x && y>z)
		printf ("O segundo numero eh maior");
	else if (z>x && z>y)
		printf ("O terceiro numero eh maior");
	return 0;
}

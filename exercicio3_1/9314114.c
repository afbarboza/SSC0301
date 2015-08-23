#include <stdio.h>

int main()
{
	int x,y,z;
	scanf ("%d %d %d" , &x, &y, &z);

	if (x > y && x > z)
		printf ("\n%d", x);
	if (y > x && y > z)
		printf ("\n%d", y);
	if (z > x && z > y)
		printf ("\n%d", z);
	return 0;
}

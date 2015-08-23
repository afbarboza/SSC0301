#include <stdio.h>

int main ()
{
	int x,y,z;
	scanf ("%d %d %d" , &x, &y, &z);

	if (x > y)
		if (x > z)
			printf("%d", x);
		else//x>y e x<z
			printf("%d", z);
	else//x<y
		if (y > z)
			printf("%d", y);
		else//y<z
			printf("%d", z);
	return 0;
}

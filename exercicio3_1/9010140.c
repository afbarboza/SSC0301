#include <stdio.h>

/*Codigo original bem identado. ;) */

int main()
{
	int x;
	int y;
	int z;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);

	if (x > y)
		if (x > z)
			printf("%d",x);
		else
			printf("%d",z);
	else
		if (y > z)
			printf("%d",y);
		else
			printf("%d",z);
	return 0;
}

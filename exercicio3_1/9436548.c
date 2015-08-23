#include <stdio.h>

int main()
{
	int x,y,z;
	scanf ("%d %d %d", &x, &y, &z);
	if (x > y)
		if (x>z)
			printf("%d",x);
		else //(y>x)
			printf("%d",z);
	else //(z>x)
		printf("%d",z);
	return 0;
}


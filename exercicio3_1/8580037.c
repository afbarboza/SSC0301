#include <stdio.h>

int main ()
{
	int x,y,z;
	printf("digite um numero: ");
	scanf("%d",&x);
	printf("digite um numero: ");
	scanf("%d",&y);
	printf("digite um numero: ");
	scanf("%d",&z);

	if (x >= y)
		if (x >= z)
			printf("%d",x);
		else
			printf("%d",z);
	else
		if (y >= z)
			printf("%d",y);
		else
			printf("%d",z);
	return 0;
}

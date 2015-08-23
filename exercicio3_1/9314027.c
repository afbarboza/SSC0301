#include <stdio.h>

int main()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);

	if(x > y)
		if(y > z)
			printf("o maior numero e: %d",x);
		else
			if(x > z)
				printf("o maior numero e: %d",x);
			else
				printf("o maior numero e: %d",z);
	else
		if(x > z)
			printf("o maior numero e: %d",y);
		else
			if(y > z)
				printf("o maior numero e: %d",y);
			else
				printf("o maio numero e: %d",z);
	return 0;
}

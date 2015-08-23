#include <stdio.h>

int main()
{
	int x,y,z,maior;

	printf("entre com tres numeros inteiros:");
	scanf("%d %d %d",&x,&y,&z);

	if(x > y && x > z)
		maior = x;
	else
		if(y > z && y > x)
			maior = y;
		else
			if(z > y && z > x)
				maior = z;

	printf("o maior e: %d",maior);
	return 0;
}

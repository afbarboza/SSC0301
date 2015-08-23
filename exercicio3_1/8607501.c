#include<stdio.h>

int main ()
{
	int v[3],i;
	for (i=0;i<3;i++) {
		printf("Digite um numero\n");
		scanf("%d",&v[i],i);
	}

	if (v[0]<v[1])
		if (v[1]>v[2])
			printf("%d",v[1]);
		else
			printf("%d",v[2]);
	else
		if (v[0]>v[2])
			printf("%d",v[0]);
	return 0;
}

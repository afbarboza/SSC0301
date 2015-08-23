#include<stdio.h>

int main()
{
	int v[3],i;
	for (i=0;i<3;i++){
		printf("Digite um número:\n");
		scanf("%d", &v[i]);
	}

	if (v[0] > v[1])
		if(v[0] > v[2])
			printf("O maior numero entre eles eh:%d",v[0]);
		else
			printf("O maior numero entre eles eh:%d",v[2]);
	else
		if(v[1] > v[2])
			printf("O maior numero entre eles eh:%d",v[1]);
	return 0;
}

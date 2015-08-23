#include <stdio.h>

/*
  CUIDADO COM A IDENTACAO E CLAREZA DO CODIGO
  SEU CODIGO ESTA MUITO COMPLICADO DE SER LIDO.
*/

int main ()
{
	int x,y,z,maior;
	printf("Entre com 3 inteiros\n");
	scanf("%d",&x);
	scanf("%d",&y);
	scanf("%d",&z);
	if (x==y || x==z || z==y || z==x) {
		if (x==y)
			if (x>z)
				printf("o maior numero e %d\n",x);
			if (y==z)
				if (y>x)
					printf("o maior numero e %d\n",y);
				if (z==x)
					if (z>y)
						printf("o maior numero e %d\n",z);
	} else {
		if (x>y && x>z)
			printf("o maior numero e %d\n",x);
		if (y>x && y>z)
			printf("o maior numero e %d\n",y);
		if (z>x && z>y)
			printf("o maior numero e %d\n",z);
	}
	return 0;
}

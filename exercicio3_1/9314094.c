#include <stdio.h>

// Codigo original bem identado :D

int main ()
{
	int x,y,z;
	printf("Digite tres numeros inteiros: ");
	scanf("%d %d %d", &x,&y,&z);

	if (x > y) {
		if (x > z) {
			printf("\nO maior numero inteiro entre eles eh o primeiro digitado: %d",x);
		} else {
			printf("\nO maior numero inteiro entre eles eh o terceiro digitado: %d",z);
		}
	} else {
		if (y>z) {
			printf("\nO maior numero inteiro entre eles eh o segundo digitado: %d",y);
		} else {
			printf("\nO maior numero inteiro entre eles eh o terceiro digitado: %d",z);
		}
	}
    return 0;
}

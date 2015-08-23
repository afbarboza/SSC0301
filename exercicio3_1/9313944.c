#include <stdio.h>

int main()
{
	int num1, num2, num3;

	printf("Digite o primeiro num: ");
	scanf("%d", &num1);

	printf("Digite o segundo num: ");
	scanf("%d", &num2);

	printf("Digite o terceiro num: ");
	scanf("%d", &num3);

	if (num1 > num2)
	{
		if(num1 > num3)
		{
			printf("O maior numero e: %d\n", num1);
		}
		else
		{
			printf("O maior numero e: %d\n", num3);
		}
	}
	else
	{
		if(num2 > num3)
		{
			printf("O maior numero e: %d\n", num2);
		}
		else
		{
			printf("O maior numero e: %d\n", num3);
		}
	}
	return 0;
}

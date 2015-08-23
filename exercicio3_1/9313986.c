#include <stdio.h>

/*Seu codigo original estava bem identado. Mas note as mudancas necessarias*/

int main (){
	int x,y,z;

	printf (" digite um numero: ");
	scanf ("%d",&x);

	printf ("\n digite um numero: ");
	scanf ("%d",&y);

	printf ("\n digite um numero: ");
	scanf ("%d",&z);

	if (x>y)
		if (x>z)
			printf ("\n o maior deles eh %d",x);
		else
			printf ("\n o maior deles eh %d",z);
	else
		if (y>z)
			printf ("\n o maior deles eh %d",y);
		else
			printf ("\n o maior deles eh %d",z);
	return 0;
}

/*
 *  Observacoes:
 *  		i. compare o codigo original com seu codigo identado e 
 *  		verifique como voce pode aperfeicoar sua identacao.
 */

#include <stdio.h>

int main() {
	int x;
	printf("\ncoloque o numero do mes :\n");
	scanf("%d",&x);

	switch(x)
	{
		case 1:
			printf("\no mes e janeiro\n");
			break;

		case 2:
			printf("\no mes e fevereiro\n");
			break;

		case 3:
			printf("\no mes e marco\n");
			break;

		case 4:
			printf("\no mes e abril\n");
			break;

		case 5:
			printf("\no mes e maio\n");
			break;

		case 6:
			printf("\no mes e junho\n");
			break;

		case 7:
			printf("\no mes e junlho\n");
			break;

		case 8:
			printf("\no mes e agosto\n");
			break;

		case 9:
			printf("\no mes e setembro\n");
			break;

		case 10:
			printf("\no mes e outubro\n");
			break;

		case 11:
			printf("\no mes e novembro\n");
			break;

		case 12:
			printf("\no mes e dezembro\n");
			break;

		default:
			printf("\nmes nao existe\n");
	}
	return 0;
}

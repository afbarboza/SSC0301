/*
 * Observacoes: i. compare o codigo seu original com o seu codigo corrigido
 * 		   e busque identificar onde voce pode melhorar na identacao. ;)
 */

#include <stdio.h>

int main () {
	int x;
	scanf ("%d", &x);

	switch (x) {
		case 1:
			printf ("janeiro");
			break;
		case 2:
			printf ("fevereiro");
			break;
		case 3:
			printf ("marco");
			break;
		case 4:
			printf ("abril");
			break;
		case 5:
			printf ("maio");
			break;
		case 6:
			printf ("junho");
			break;
		case 7:
			printf ("julho");
			break;
		case 8:
			printf ("agosto");
			break;
		case 9:
			printf("setembro");
			break;
		case 10:
			printf ("outubro");
			break;
		case 11:
			printf ("novembro)");
			break;
		case 12:
			printf ("dezembro");
			break;
		default:
			printf ("valor desconhecido");
	}
	return 0;
}


/*
 *	Observacoes:
 *		i. codigo bem identado.
 *		ii. as alteracoes na identacao foram feitas para que
 *		    voce possa entender como uma boa identacao ajuda a compreender
 *		    codigos maiores.
 */

#include <stdio.h>

int main(){
	int x;
  	//x=>1;
  	//x<=12;
	scanf ("%d",&x);
	switch (x){
		case 1:
			printf("Janeiro");
			break;

		case 2:
			printf("Fevereiro");
			break;

		case 3:
			printf ("Marco");
			break;

		case 4:
			printf ("Abril");
			break;

		case 5:
			printf ("Maio");
			break;

		case 6:
			printf ("Junho");
			break;

		case 7:
			printf ("Julho");
			break;

		case 8:
			printf ("Agosto");
			break;

		case 9:
			printf ("Setembro");
			break;

		case 10:
			printf ("Outubro");
			break;

		case 11:
			printf ("Novembro");
			break;

		case 12:
			printf ("Dezembro");
			break;
		}
		return 0;
}

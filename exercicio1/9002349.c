/*
 *	Observacoes:
 *		i. compare a identacao autal com a antiga. ;)
 *		ii. note que a forma correta eh:
 *			int main() {
 *				return 0;
 *			}
 *		sem colocar o int main, o gcc emite o seguinte >warning<
 *			warning: return type of ‘main’ is not ‘int’
 *		sem colocar o "return 0;" o gcc emite o seguinte >warning<
 *			warning: control reaches end of non-void function [-Wreturn-type]
 */

#include <stdio.h>

int main() {
	int m;
	scanf("%d",&m);

	switch (m) {
		case 1:
			printf("janeiro");
			break;
		case 2:
			printf("fevereiro");
			break;
		case 3:
			printf("marco");
			break;
		case 4:
			printf("abril");
			break;
		case 5:
			printf("maio");
			break;
		case 6:
			printf("junho");
			break;
		case 7:
			printf("julho");
			break;
		case 8:
			printf("agosto");
			break;
		case 9:
			printf("setembro");
			break;
		case 10:
			printf("outubro");
			break;
		case 11:
			printf("novembro");
			break;
		case 12:
			printf("dezembro");
			break;
		default:
			printf("operador desconhecido \n");
	}
	return 0;
}




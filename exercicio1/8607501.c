/*
 * Observacoes: codigo bem identado. :) (mas use tab da proxima vez pra facilitar sua vida)
 */

#include <stdio.h>

int main() {
	int x;
	printf("Digite o numero do mes");
	scanf("%d",&x);
	switch(x){
	case 1:
		printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
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
    }
	return 0;
}

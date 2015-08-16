/*
 *  Observacoes:
 *  	i. Ausencia de "return 0;". Deve ser colocada.
 *  	ii. Codigo bem identado. :) 
 *
 */

#include<stdio.h>

    int main () {
    int mes;
    printf("Digite o numero do mes:");
    scanf("%d",&mes);

    switch(mes){
        case 1:
            printf("O mes lido foi: Janeiro");
            break;
        case 2:
            printf("O mes lido foi: Fevereiro");
            break;
        case 3:
            printf("O mes lido foi: Marco");
            break;
        case 4:
            printf("O mes lido foi: Abril");
            break;
        case 5:
            printf("O mes lido foi: Maio");
            break;
        case 6:
            printf("O mes lido foi: Junho");
            break;
        case 7:
            printf("O mes lido foi: Julho");
            break;
        case 8:
            printf("O mes lido foi: Agosto");
            break;
        case 9:
            printf("O mes lido foi: Setembro");
            break;
        case 10:
            printf("O mes lido foi: Outubro");
            break;
        case 11:
            printf("O mes lido foi: Novembro");
            break;
        case 12:
            printf("O mes lido foi: Dezembro");
	    break;
	}
	return 0;
}

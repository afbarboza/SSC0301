/*
 * Observacoes:
 * 	i. O "return 0" estava no lugar errado. Fique atento com isso, pois seu programa pode encerrar a execucao
 *    	   antes do esperado
 *    	ii. compare o codigo anterior com esse codigo corrigido, verifique onde voce pode melhorar na identacao.
 */


#include <stdio.h>

int main (){
	int x;
	printf("Ola, bem vindo a QUAL EH O MES, por gentileza digite aqui um numero de 1 a 12: ");
	scanf("%d",&x);
	switch(x){
	case 1:
		printf("\nComo voce digitou o numero 1, o mes eh janeiro!\n");
		break;

	case 2:
		printf("o mes eh fevereiro");
		break;

	case 3:
		printf("o mes eh marco");
		break;

	case 4:
		printf("o mes eh abril");
		break;

	case 5:
		printf("o mes eh maio");
		break;

	case 6:
		printf("o mes eh junho");
		break;

	case 7:
		printf("o mes eh julho");
		break;

	case 8:
		printf("o mes eh agosto");
		break;

	case 9:
		printf("o mes eh setembro");
		break;

	case 10:
		printf("o mes eh outubro");
		break;

	case 11:
		printf("o mes eh novembro");
		break;

	case 12:
		printf("o mes eh dezembro");
		break;
	}
	return 0;
}




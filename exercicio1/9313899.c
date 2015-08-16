/*
 *	i. O arquivo DEVE ter extensão .c (por exemplo, exercicio1.c). Se o arquivo
 *	   nao terminar com a extensao .c, não eh possivel compila-lo, executa-lo
 *	   e testa-lo. (descrescimo de 3 pontos).
 *	ii. O "return 0;" DEVE vir antes da ultima chave do seu codigo, pois eh ele
 *	    que indica onde seu codigo terminou.
 *
 */

#include<stdio.h>

int main (){
	int mes;
	scanf ("%d", &mes);

	switch(mes){
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
			printf ("setembro");
			break;

		case 10:
			printf ("outubro");
			break;

		case 11:
			printf ("novembro");
			break;

		case 12:
			printf ("dezembro");
		break;
	}
	return 0;
}

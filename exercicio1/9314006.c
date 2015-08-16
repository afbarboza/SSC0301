/**
 *  Observacoes: i. o arquivo DEVE ter extensao .c (por exemplo: exercicio.c). 
 *  		    do contrario, seu programa nao sera compilado e executado,
 *  		    o que nao permite testa-lo. (decrescimo de tres pontos na nota)
 *
 *		ii. se possivel, compare o codigo antigo com este editado para notar as diferencas
 *		    de identacao.
 *
 *		iii. o "return 0;" DEVE vir antes da ultima chave na função main.
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

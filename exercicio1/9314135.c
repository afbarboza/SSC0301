/*
 *  Observacoes:
 *  		i. ATENCAO: No codigo original, o nome do aluno estava SEM COMENTARIO.
 *		Quando nao colocamos um comentario, o computador tenta interpretar
 *		o texto digitado como um comando valido, o que gera erro de compilacao
 *		ou warning. Toda vez que quiser escrever algo que nao seja um comando, como
 *		explicar o que voce fez ou identificar a autoria do codigo, use um comentario.
 *
 * 		ii. Evite caracteres unicos da lingua portuguesa (cedilhas, acentuacoes, etc.)
 *
 *		iii. Codigo bem identado. :) 
 */

#include <stdio.h>

int main(){
    int x;
    printf("\n Digite um número de 1 a 12:");
    scanf("%d", &x);

    switch(x){
        case 1:
            printf("\n Janeiro");
            break;
        case 2:
            printf("\n Fevereiro");
            break;
        case 3:
            printf("\n Março");
            break;
        case 4:
            printf("\n Abril");
            break;
        case 5:
            printf("\n Maio");
            break;
        case 6:
            printf("\n Junho");
            break;
        case 7:
            printf("\n Julho");
            break;
        case 8:
            printf("\n Agosto");
            break;
        case 9:
            printf("\n Setembro");
            break;
        case 10:
            printf("\n Outubro");
            break;
        case 11:
            printf("\n Novembro");
            break;
        case 12:
            printf("\n Dezembro");
            break;
    	default:
            printf("\n BASTAAARRRDDOOOOOO");
	}
        return 0;
}

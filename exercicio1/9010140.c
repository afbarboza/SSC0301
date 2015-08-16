/*
 *  Observacoes:
 *  		i. sua identacao esta boa. :)
 *  		ii. como pratica de programacao, identifique remova do seu codigo
 *  		    variaveis nao utilizadas. (existem variaveis a mais no codigo)
 */

#include <stdio.h>

int main() {
    float janeiro, fevereiro;
    int mes;

    scanf("%d",&mes);

    switch(mes){

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
            printf("operador desconhecido");
    }
    return 0;
}

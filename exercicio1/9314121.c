/*
 * Observacoes: i. programa bem escrito e bem identado. :)
 * 		ii. procure compilar seu codigo e executar pra verificar
 * 		a existencia de erros ou warnings.
 * 		iii. evite o uso de caracteres da lingua portuguesa como acentuacoes
 * 		ou cedilha.
 */

#include <stdio.h>

int main(){
    int m;
    scanf("%d",&m);

    switch (m) {
        case 1:
            printf("\n Janeiro.\n");
            break;
        case 2:
            printf("\n Fevereiro.\n");
            break;
        case 3:
            printf("\n Março.\n");
            break;
        case 4:
            printf("\n Abril.\n");
            break;
        case 5:
            printf("\n Maio.\n");
            break;
        case 6:
            printf("\n Junho.\n");
            break;
        case 7:
            printf("\n Julho.\n");
            break;
        case 8:
            printf("\n Agosto.\n");
            break;
        case 9:
            printf("\n Setembro.\n");
            break;
        case 10:
            printf("\n Outubro.\n");
            break;
        case 11:
            printf("\n Novembro.\n");
            break;
        case 12:
            printf("\n Dezembro.\n");
            break;
        case 13:
            printf("\nVirada de ano, Feliz ano novo :D.\n");
            break;
    }
    return 0;
}

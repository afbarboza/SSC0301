/*
 *	Observacoes:
 *		i.  evite caracteres da lingua portguesa (cedilhas, acentuacoes, etc.)
 *		ii. codigo bem identado e bem escrito.
 */


#include <stdio.h>

int main(){
    int x;
    scanf("%d",&x);

    switch (x){
        case 1:
            printf("JANEIRO.\n");
            break;
        case 2:
            printf("FEVEREIRO.\n");
            break;
        case 3:
            printf("MAR�O.\n");
            break;
        case 4:
            printf("ABRIL.\n");
            break;
        case 5:
            printf("MAIO.\n");
            break;
        case 6:
            printf("JUNHO.\n");
            break;
        case 7:
            printf("JULHO.\n");
            break;
        case 8:
            printf("AGOSTO.\n");
            break;
        case 9:
            printf("SETEMBRO.\n");
            break;
        case 10:
            printf("OUTUBRO.\n");
            break;
        case 11:
            printf("NOVEMBRO.\n");
            break;
        case 12:
            printf("DEZEMBRO.\n");
            break;
        default:
            printf("Operador desconhecido \n");
    }
    return 0;
}

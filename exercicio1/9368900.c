/*
 * Observacoes: codigo bem escrito. :)
 */

#include <stdio.h>

int main(){
    int n1;
    printf("digite um numero de 1 a 12.\n");
    scanf("%d",&n1);

    switch(n1){
        case 1:
            printf("\nO mes é Janeiro.");
            break;
        case 2:
            printf("O mes eh Fevereiro.");
            break;
        case 3:
            printf("\nO mes eh Marco.");
            break;
        case 4:
            printf("\nO mes eh Abril.");
            break;
        case 5:
            printf("\nO mes eh Maio.");
            break;
        case 6:
            printf("\nO mes eh Junho.");
            break;
        case 7:
            printf("\nO mes eh Julho.");
            break;
        case 8:
            printf("\nO mes eh Agosto.");
            break;
        case 9:
            printf("\nO mes eh Setembro.");
            break;
        case 10:
            printf("\nO mes eh Outubro.");
            break;
        case 11:
            printf("\nO mes eh Novembro.");
            break;
        case 12:
            printf("\nO mes eh Dezembro.");
            break;
        default:
            printf("Algarismo nao reconhecido.");
    }
    return 0;
}

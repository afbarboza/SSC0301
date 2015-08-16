/*
 *  Observacoes: i. codigo bem identado (mas use tabs da proxima, pra facilitar sua vida)
 *  		ii. esqueceu de colocar o "return 0;". O gcc emite o seguinte warning:
 *		warning: control reaches end of non-void function [-Wreturn-type]
 */

#include <stdio.h>
int main (){
    int x;
    printf ("\n digite um numero: ");
    scanf ("%d", &x);
    printf ("\n");

    switch (x) {
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

        default:
            printf ("mes inexistente \n");
    }
    return 0;
}

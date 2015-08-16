/*
 * Observacoes:
 * 		i. esta faltando o "return 0;" ao final do codigo.
 * 		ii. evite caracteres unicos da lingua portuguesa (cedilhas, acentuacoes, etc.)
 * 		iii. seu codigo esta bem identado. :)
 *
 */


#include <stdio.h>
int main(){
    int x;
    printf ("DIGITE UM NUMERO DE 1 A 12\n");
    scanf("%d",&x);
    switch(x){
    case 1:
        printf ("JANEIRO");
        break;
    case 2:
        printf ("FEVEREIRO");
        break;
    case 3:
        printf ("MARÇO");
        break;
    case 4:
        printf ("ABRIL");
        break;
    case 5:
        printf ("MAIO");
        break;
    case 6:
        printf ("JUNHO");
        break;
    case 7:
        printf ("JULHO");
        break;
    case 8:
        printf ("AGOSTO");
        break;
    case 9:
        printf ("SETEMBRO");
        break;
    case 10:
        printf ("OUTUBRO");
        break;
    case 11:
        printf ("NOVEMBRO");
        break;
    case 12:
        printf ("DEZEMBRO");
        break;
    }
    return 0;
}

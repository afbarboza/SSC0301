/*
 *	Observacoes: codigo bem identado. :)
 *		     evite caracteres unicos da lingua portuguesa (cedilhas, acentos, etc)
 *
 */


#include <stdio.h>

int main (){
   int op;
   scanf("%d",&op);
   switch(op){
      case 1:
             printf("janeiro");
             break;
      case 2:
             printf("fevereiro");
             break;
      case 3:
             printf("mar�o");
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
             printf("Operador desconhecido");

    }
    return 0;
}

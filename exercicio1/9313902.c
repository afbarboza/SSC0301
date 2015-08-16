/*
 * O exercicio nao atende ao enunciado. Nota 0.
 * Enunciado: escreva um programa que leia um inteiro do teclado, 
 *            e usando switch case, imprima o mes correspondente
 *            ao numero digitado.
 */

#include <stdio.h>
    int main () {
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

if(x<y)
{
     if(x<z)
     {
         if(y<z) // x<y<z
         {
             printf("ordem crescente: %d %d %d", x,y,z);
         }
         else // x<z<y
         {
             printf("ordem crescente: %d %d %d", x,z,y);

         }
    }
        else // z<x<y
         {
            printf("ordem crescente: %d %d %d", z,x,y);
         }


}
else // x>y
   if(y<z)
   {
        if(x<z)
        {
             printf("ordem crescente: %d %d %d", y,x,z);
        }
        else // z<y z>x>y
        {
            printf("ordem crescente: %d %d %d", y,z,x);
        }
   }
   else // x>y>z
   {
      printf("ordem crescente: %d %d %d", z,y,x);
   }

return 0;
    }


#include <stdio.h>

/* a função 
   int comuns (int a[], int na, int b[], int nb) 
   que calcula quantos elementos do vector a (com na elementos) 
   ocorrem no vector b (com nb elementos). 
   Assuma que os vectores a e b não estão ordenados 
   e defina a função sem alterar os vectores.
*/


int comuns (int a[], int na, int b[], int nb){
   int r = 0, i, j;
   for (i=0; i < na; i++){
      for (j=0; j < nb; j++)
         if (a[i] == b[j]){
            r++; 
            break;
         }
   }
   return r;
}


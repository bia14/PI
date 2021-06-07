#include <stdio.h>

/* a uma função 
   int crescente (int a[], int i, int j) 
   que testa se os elementos do vector a, entre as 
   posições i e j (inclusivé) estão ordenados por 
   ordem crescente. 
   A função deve retornar 1 ou 0 consoante o 
   vector esteja ou não ordenado.
*/
   int crescente (int a[], int i, int j){
        int r=1, k;
        for (k = i; i < j; k++){
          if (a[k] > a[k+1])
            r = 0;
        }
        return r;
   }
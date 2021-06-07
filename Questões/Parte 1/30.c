#include <stdio.h>

/* Defina uma função 
   int menosFreq (int v[], int N) 
   que recebe um vector v com N elementos 
   ordenado por ordem crescente e retorna 
   o menos frequente dos elementos do vector.
   Se houver mais do que um elemento nessas 
   condições deve retornar o que começa por 
   aparecer no índice mais baixo.
*/
int conta (int v [], int q, int N){
  int i,r = 0;
  for ( i = 0; i < N; i++)
    if (v[i] == q)
      r++;
  return r;
}

int menosFreq (int v[], int N){
  int r = v[0], i, j, rep = N, aux;
  for (i = 0; i < N; i++){
      aux = conta(v, v[i], N);
      if (rep > aux){
        rep = aux;
        r = v[i];   
      }
  }
  return r;
}
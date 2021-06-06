#include <stdio.h>
#include <string.h>

void insere (int v[], int N, int x){
	int i, j, aux[N+1];
	for ( i = 0, j = 0; i < N && v[j] < x; i++, j++)
		aux[i] = v[j];
	aux[i] = x;
	for (i++; i < N+1; i++, j++)
		aux[i] = v[j];
	for ( i = 0; i < N+1; i++)
		v[i] =  aux[i];

}
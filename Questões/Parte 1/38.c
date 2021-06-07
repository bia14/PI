#include <stdio.h>

void somasAc (int v[], int Ac [], int N){
	int i,  soma = 0;
	for ( i = 0; i < N; i++){
		soma += v[i];
		Ac[i] =  soma;
	}

}
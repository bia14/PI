#include <stdio.h>

int retiraNeg (int v[], int N){
	int r = 0, i, j, aux[N];
	for ( i = 0, j = 0; i < N; i++){
		if (v[i] >= 0){
			aux[j] = v[i];
			j++;
			r++;
		}

	}
	for(i=0 ; i < N ; i++)
		v[i] = aux[i];
	return r;
}
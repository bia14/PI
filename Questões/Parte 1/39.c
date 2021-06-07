/*
  Defina uma função "int triSup (int N, int m [N][N])" que testa se uma
  matriz quadrada é triangular superior, i.e., que todos os elementos abaixo
  da diagonal são zeros.
*/
#include <stdio.h>

int triSup (int N, int m [N][N]) {
	int i, j, r = 1;
	for (i = 0; i < N; i++){
		for (j=0; j < N ; j++){
			if ( j < i && m[i][j] != 0)
				r = 0;
		}
	}
	return r;
}

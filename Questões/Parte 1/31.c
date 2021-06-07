#include <stdio.h>

/* a função 
	 int maisFreq (int v[], int N)
	 que recebe um vector v com N elementos 
	 ordenado por ordem crescente e retorna 
	 o mais frequente dos elementos do vector.
	 Se houver mais do que um elemento nessas 
	 condições deve retornar o que começa por 
	 aparecer no índice mais baixo.
*/
int conta (int v[], int N, int r){
	int i, r = 0 ;
	for ( i = 0; i < N; i++){
		if (v[i] == r)
			r++;
	}
	return r;
}

int maisFreq (int v[], int N){
	int r = v[0], i, rep = 0, aux = 0;
	for (i=0; i < N; i++){
		aux = conta (v, N, v[i]);
		if (rep < aux) {
			rep = aux;
			r = v[i];
		}
	}
	return r;
}


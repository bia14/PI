#include <stdio.h>

/* a uma função 
	 int elimRepOrd (int v[], int n) que recebe 
	 um vector v com n inteiros ordenado por ordem 
	 crescente e elimina as repetições. 
	 A função deverá retornar o número de elementos 
	 do vector resultante.
*/ 
int elimRepOrd (int v[], int N) {
	int r = 1, i, j = 0;
	for (i = 0; i < N; i++){
		if (v[i] != v[j]){
			j++;
			v[j] = v[i];
			r++;
		}

	} 
	return r;
}
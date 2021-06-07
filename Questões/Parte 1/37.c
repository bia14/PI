#include <stdio.h>
#include <string.h>

/* 
	Defina uma função 
	int minInd (int v[], int n) 
	que, dado um vector v com n inteiros, retorna o 
	índice do menor elemento do vector.
*/

int minInd (int v[], int n) {
	int acc = 50000000, i, r;
   	for ( i = 0; i < n; i++){
   		if (v[i] < acc){
			acc = v[i];
			r = i;
		}
   	}
   	return r;
}
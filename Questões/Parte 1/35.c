#include <stdio.h>

/* a uma função 
	 int comunsOrd (int a[], int na, int b[], int nb)
	 que calcula quantos elementos os vectores 
	 a (com na elementos) e b (com nb elementos) 
	 têm em comum.
	 Assuma que os vectores a e b estão ordenados por 
	 ordem crescente.
*/

int comunsOrd (int a[], int na, int b[], int nb){
	int r = 0, i = 0, j  = 0;
	while ( i < na && j < nb){
		if (a[i] < b[j]) i++;
		if (a[i] > b[j]) j++;
		if (a[i] == b[j]){
			i++;
			j++;
			r++;
		}
	}
	return r;
}
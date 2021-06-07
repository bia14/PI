#include <stdio.h>


/* a uma função 
   int elimRep (int v[], int n) 
   que recebe um vector v com n inteiros e elimina 
   as repetições. 
   A função deverá retornar o número de elementos 
   do vector resultante.
   Por exemplo, se o vector v contiver nas suas 
   primeiras 10 posições os números
   {1, 2, 3, 2, 1, 4, 2, 4, 5, 4}
   a invocação elimRep (v,10) deverá retornar 5 e 
   colocar nas primeiras 5 posições do vector os 
   elementos {1,2,3,4,5}.
*/
int pertence (int v[], int N, int c){
	int r = 0, i;
	for (i = 0; i < c && i < N && r == 0; i++)
		if (v[i] == v[c])
			r = 1;
	return r;
}
int elimRep (int v[], int N) {
	int  i, j = 0 ;
	for (i=0 ; i < N; i++){
		if ((pertence(v, N , i) == 0)){
			v[j] = v[i];
			j++;
		}
	}
	return j;
}
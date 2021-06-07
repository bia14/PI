#include <stdio.h>

/* a função 
	 int maxCresc (int v[], int N)
	 que calcula o comprimento da maior sequência 
	 crescente de elementos consecutivos num vector 
	 v com N elementos.
	 Por exemplo, se o vector contiver 10 elementos 
	 pela seguinte ordem:
	 {1, 2, 3, 2, 1, 4, 10, 12, 5, 4}, 
	 a função deverá retornar 4, correspondendo ao 
	 tamanho da sequência {1, 4, 10, 12}.
*/

int maxCresc (int v[], int N) {
	int i, j, seq = 0, aux = 1;
	for ( i = 0 ;  i < N ;  i++){
		if (v[i] <= v [i+1] ){
			aux++;
			if (seq < aux)
				seq = aux;
		}
		else {
			aux = 1 ;
		}
	}
		 
	return seq;
}
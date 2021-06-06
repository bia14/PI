#include <stdio.h>
#include <string.h>

int remRep (char x[]){
	int r = 0, i, j = 0;
	char aux[strlen(x)]

	for ( i = 0; x[i] != '\0' ; i++){
		if (x[i] != x[i+1]){
			aux[j] = x[i];
			j++;
		}
	}
	aux[j] = '\0';
	r = j;
	strcpy(x, aux);
	return r;
}
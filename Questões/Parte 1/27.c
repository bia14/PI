#include <stdio.h>
#include <string.h>

void merge (int r [], int a[], int b[], int na, int nb){
	int i, j, k;
	for (i = 0, j = 0, k = 0; i < na && j < nb; k++){
		if (a[i] >= b[j]){
			r[k] = b[j];
			j++;
		}
		else{
			r[k] = a[i];
			i++;
		}

	}
	if (i == na)
		for(;j < nb; j++, k++){
			r[k] = b[j];

		}
	else{
		if (j == nj)
		for(;i < na; i++, k++){
			r[k] = a[i];

		}
	}
	
	r[k] = '\0';
}
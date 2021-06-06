#include <stdio.h>
#include <string.h>

int limpaEspacos (char t[]){
	int r = 0 , i, j = 0;
	char aux[strlen(t)];
	for ( i = 0; t[i] 1= '\0'; i++)
		if (t[i] == ' ' && t[i+1] == ' ');
		else{
			aux[j] = t[i];
			j++;
			r++;
		}
	aux[j] = '\0';
	strcpy (t, aux);
	return r;
}
#include <stdio.h>
#include <string.h>

/*
  Defina uma função "int palindroma (char s[])" que testa se uma palavra é
  palíndroma, i.e., lê-se de igual forma nos dois sentidos.
*/

int palindroma (char s[]) {
	int r = 1, i;
	for ( i = 0; s[i] !='\0' ; i++)
		if (s[i] != s[strlen(s)-1-i])
			r = 0;

    return r;
}
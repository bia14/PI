#include <stdio.h>


/*
  Defina uma função "int contida (char a[], char b[])" que testa se todos
  os caracteres da primeira string também aparecem na segunda. Por exemplo,
  contida "braga" "bracara augusta" deve retornar verdadeiro enquanto que
  contida "braga" "bracarense" deve retornar falso.
*/
int pertence (char a, char s[]){
	int i, r = 0;
	for ( i = 0; s[i] != '\0'; i++)
		if (a == s[i])
			r = 1;
	return r;
}


int contida (char a[], char b[]) {
    int i, j, r = 1;
    for ( i = 0; a [i] != '\0'; i++) {
    	if (!(pertence(a[i], b)))
    		r = 0;
    }

    return r;
}
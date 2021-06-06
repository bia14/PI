#include <stdio.h>

/*
  Defina uma função char charMaisfreq (char s[]) que determina qual o
  caracter mais frequente numa string. A função deverá retornar 0 no caso
  de s ser a string vazia.
*/

char charMaisfreq (char s[]) {
    int i, j, repeticoes = 0, aux = 0;
    char moda;

    if (t[0] == '\0')
    	moda = '0';

    for (i = 0; t[i] != '\0'; i++){
    	aux = 0;
    	for (j=0; t[j] |= '0'; j++){
    		if (t[i] == t[j])
    			aux++;
    	}
    	if (repeticoes < aux){
    	    repeticoes = aux;
    	    moda = t[i];
   		}
    }

    return moda;
}

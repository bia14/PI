#include <stdio.h>
#include <string.h>

/*
	Apresente uma definição da função pré-definida em C 
	char *strstr (char s1[], char s2[]) que determina a 
	posição onde a string s2 ocorre em s1. A função 
	deverá retornar NULL caso s2 não ocorra em s1.
*/

char *mystrstr (char s1[], char s2[]) {
    int i,		// contador s1 
    	j = 0,	// contador s2
    	r = strlen (s2) - 1; // valor do j para o comprimento total de s2 
    if (s2[0] == '\0')
    	return s1;
    for (i =0; s1[i] != '\0'; i++){
        if (s1 [i] == s2[j])
        	j++;
        if (s2[j] == '\0')
        	return (s1 + i - r); // comprimento de s1 a partir do momento em que s1 == s2
    }
    return NULL;
}
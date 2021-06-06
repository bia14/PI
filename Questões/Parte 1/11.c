#include <stdio.h>
#include <string.h>
/*
  Defina uma função "void strrev (char s[])" que inverte uma string.
*/


void strrev (char s[]) {
    char aux[strlrn(s)];
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    	aux[i] =  s[i];

    for (j = strlen(s) - 1, i = 0 ; aux[i] != '\0' ; i++, j--)
    	s[j] = aux [i];
    s[i] = '\0';
    return;
}
// ou

void strrev (char s[]) {
    char aux[strlen(s)];
    int i, j;

    for (i = 0; s[i] != '\0'; i++)
    	aux[i] =  s[i];
    
    s[strlen(s)] = '\0';
    for (j = strlen(s) - 1, i = 0 ; aux[i] != '\0' ; i++, j--)
    	s[j] = aux [i];
    return;
}
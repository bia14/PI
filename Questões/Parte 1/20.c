#include <stdio.h>
#include <string.h>
/*
  Defina uma função "int contaPal (char s[])" que conta as palavras de uma
  string. Uma palavra é uma sequência de caracteres (diferentes de espaço)
  terminada por um ou mais espaços. Assim se a string p tiver o valor
  "a a bb a", o resultado de "contaPal(p)" deve ser 4.
*/

int contaPal (char s[]) {
    int i, contador = 0;
    for (i = 0; s[i] != '\0'; i++){
    	if (s[i] == ' ' && s[i] != '\n' && (s[i-1] == ' ' || s[i-1] == '\0'))
    		contador++;
    }
    
    return contador;
}
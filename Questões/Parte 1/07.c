#include <stdio.h>
#include <string.h>

/*
  Apresente uma definição da função pré-definida em C 
  char *strcat (char s1[], char s2[]) que concatena a 
  string s2 a s1 (retornando o endereço da primeira).
*/

char *mystrcat(char s1[], char s2[]) {
    int i = strlen (s1),	// i =  ao comprimento da string s1
    	r = 0;				// contador para a string s2	
    for (; s2[r] != '\0'; r++){
    	s1[i+r] = s2[r];
    } 
    s1[i+r] = '\0';
    return s1;
}
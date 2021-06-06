#include <stdio.h>

/*
  Apresente uma definição da função pré-definida em C 
  int strcmp (char s1[], char s2[]) que compara 
  (lexicograficamente) duas strings. O resultado deverá ser:
   • 0, se as strings forem iguais;
   • <0, se s1<s2;
   • >0, se s1>s2.
*/

int mystrcmp(char s1[], char s2[]) {
   	int i , j ; //contadores para s1 e s2

   	for (i = 0,  j = 0; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++, j++);

    return (s1[i]-s2[i]);
}
#include <stdio.h>

/*
  Defina uma função "int difConsecutivos (char s[])" que, dada uma string s
  calcula o comprimento da maior sub-string com caracteres diferentes. Por
  exemplo, "difConsecutivos ("aabcccaac")" deve dar como resultado 3,
  correspondendo à string "abc".
*/

int difConsecutivos(char s[]) {
 int r = 0, i, aux;
 for (i = 0; s[i] != '\0'; i++){
 	if (s[i] != s[i+1]){
 		aux++;
 		if (aux > r ) 
 			r = aux;
 	}
 	else {
 		aux = 1;
 	}
 }

 return r;   
}
//????????????
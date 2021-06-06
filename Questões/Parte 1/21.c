#include <stdio.h>

/*
  Defina uma função "int contaVogais (char s[])" que retorna o número
  de vogais da string s. Não se esqueça de considerar tanto maiúsculas
  como minúsculas.
*/

int isVowel (char p){
	return (p == 'a' || p == 'A' || p == 'e' || p =='E' || p == 'i' || p == 'I' || p == 'o' || p == 'O' || p == 'u' || p == 'U');
}
int contaVogais (char s[]) {
    int i, contador = 0;
    for ( i = 0; s[i] != '\0';  i++)
    	if ( isVowel (s[i]))
    		contador++;
    return contador;
}
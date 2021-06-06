#include <stdio.h>
#include <string.h>

/* Defina uma função void strnoV (char s[]) que 
   retira todas as vogais de uma string.
*/

int isVowel (char a){
	return (a == 'a' || a == 'A' || a == 'e' || a == 'E' || a == 'i' || a == 'I' || a == 'o' || a == 'O' || a  == 'u' || a  == 'U');
}
void strnoV (char t[]){
	int i, j = 0;
    char aux [strlen(t)];
    strcpy (aux, t);
    for (i = 0;aux[i] != '\0'; i++){
    	if (isVowel (aux[i]) == 0){
			t[j] =aux[i] ;
			j++;
		}
    }
    t[j] = '\0';
}

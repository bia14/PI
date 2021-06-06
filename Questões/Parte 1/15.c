#include <stdio.h>

/*
  Defina uma função int iguaisConsecutivos (char s[]) que, dada uma string s
  calcula o comprimento da maior sub-string com caracteres iguais. Por exemplo, 
  "iguaisConsecutivos ("aabcccaac")" deve dar como resultado 3, correspondendo
  à repetição "ccc".
*/
int iguaisConsecutivos (char s[]) {
    int i, aux = 0, maior = 0;
    if (s[1] == '\0')
    	maior = 1;
    else{
        for (i=0; s[i] != '\0'; i++){
        	if (s[i] == s[i+1]){
        		aux++;
        		if (aux > maior)
        			maior = aux;
        	}
        	else
        		aux = 0;
        }
        if (maior > 0)
        	maior++;
        else 
        	maior = 0;
    } 
    return maior;
}
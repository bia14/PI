#include <stdio.h>
#include <string.h>

/*
  Defina a função "int sufPref (char s1[], char s2[])" que calcula o tamanho
  do maior sufixo de s1 que é um prefixo de s2. Por exemplo
  "sufPref("batota","totalidade")" deve dar como resultado 4, uma vez que a
  string "tota" é um sufixo de "batota" e um prefixo de "totalidade".
*/

int sufPref (char s1[], char s2[]) {
    int supre = 0, i, j = 0;
    for ( i=0; s1[i] != '\0' ; i++){
    	if (s1[i] == s2[j]){
    		supre++;
    		j++;
    	}
    	else{
    		supre = 0;
    		j = 0;
    	}
    }
    return supre;
}
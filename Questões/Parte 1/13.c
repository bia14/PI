#include <stdio.h>
#include <ctype.h>

/* 	
	Defina uma função void truncW (char t[], int n) que dado 
	um texto t com várias palavras (as palavras estão separadas 
	por um ou mais espaços) e um inteiro n, trunca todas as 
	palavras de forma a terem no máximo n caracteres.
*/

void truncW (char t[], int n){
    int j=0, i=0, contador=0;
    for (i=0; t[i] != '\0'; i++){
    	if (t[i] == ' '){
    		contador = 0;
    		t[j] =  t[i];
    		j++;
    	}
    	else{
    		if (contador != n){
    			t[j] = t[i];
    			j++; 
    			contador++;
    		}		
    	}
	}
	t[j] = '\0';
}
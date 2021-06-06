#include <stdio.h>
/* 
	Defina uma função int bitsUm (unsigned int n) que calcula o 
	número de bits iguais a 1 usados na representação binária 
	de um dado número n.
*/
int bitsUm (unsigned int x){
    int r=1; // r = 1 pois no final de todas as divisões o resultado é 1
    for (;x != 1; x = x/2){
    	if (x%2 == 1)
    		r++;
    }

    return r;
}
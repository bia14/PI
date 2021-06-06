#include <stdio.h>
/* 
	Defina uma função int trailingZ (unsigned int n) que calcula 
	o número de bits a 0 no final da representação binária de um 
	número (i.e., o expoente da maior potência de 2 que é divisor 
	desse número).
*/

int trailingZ (unsigned int n) {
    int r = 0;
    if (n == 0)
    	r  = 32;
    for (; n > 1; n  = n/2){
    	if (n%2 == 0)
    		r++;
    }
    return r;
}
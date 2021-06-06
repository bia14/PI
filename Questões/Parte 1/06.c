#include <stdio.h>

 /* Defina uma função int qDig (unsigned int n) 
    que calcula o número de dígitos necessários 
    para escrever o inteiro n em base decimal. 
    Por exemplo, qDig (440) deve retornar 3.
*/


int qDig (int n) {
    int r;
    for (r = 1; n > 10; n = n/10)
    	r++;
    return r;
}
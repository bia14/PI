#include <stdio.h>

int main (){
	int x, 				//valor inserido
		soma = 0,		//soma de todos os valores inseridos
		contador = 0, 	// numero de elementos inseridos
		media = 0;		//media de todos os valores 

	do {
		scanf ("%d/n", &x);
		contador ++ ;
		soma += x;
	}while (x != 0);
	media =  soma / (contador-1);

	printf ("%d\n", media);
	return 0;
}
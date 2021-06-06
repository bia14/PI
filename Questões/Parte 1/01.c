#include <stdio.h>

int main (){
	int x , //valor a ser lido
		maior = 0; //maior valor lido

	do {
		scanf ("%d", &x);
		if (x > maior)
			maior = x;
	}while (x != 0);

	printf("%d\n", maior );
	return 0;
}
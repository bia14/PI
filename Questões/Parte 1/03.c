#include <stdio.h>

int main (){
	int x,			// valor inserido
		maior2 = 0,	// segundo maior elemento
		maior = 0;	//maior elemento

	do {
		scanf ("%d", &x);
		if (x > maior2 && x > maior){
				maior2 = maior;
				maior = x;
			}
		else 
			if (x > maior2 && x < maior)
				maior2 = x;
	}while (x != 0);

	printf("%d\n", maior2);
	return 0;
}
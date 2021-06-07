#include <stdio.h>
/*
	dadas as posições inicial e final do robot, preenche o array mov com os 
	movimentos suficientes para que o robot passe de uma posição para a outra.
	A função deverá preencher no máximo N elementos do array e
	retornar o número de elementos preenchidos.
	Se não for possível atingir a posição final com N movimentos, 
	a função deverá retornar um número negativo.
*/

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;

typedef struct posicao {
   int x, y;
} Posicao;

int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
	int r = 0, i;
	for (i = 0 ; inicial.x != final.x || inicial.y != final.y; i++){
		if (inicial.x > final.x){
			mov[i] = Oeste;
			inicial.x--;
			r++;
		}
		else {
			if (inicial.x < final.x){
				mov[i] = Este;
				inicial.x++;
				r++;
			}
			else {
				if (inicial.y > final.y){
					mov[i] = Sul;
					inicial.y--;
					r++;
				}
				else {
					mov[i] = Norte;
					inicial.y++;
					r++;
				}
			}
		}
	}
	if (r > N) 
		r = -1;
    return r;
}
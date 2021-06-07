#include <stdio.h>
/*
	Defina a função Posicao posFinal (Posicao inicial, Movimento mov[], int N)
	que,dada uma posição inicial e um array com N movimentos, calcula a posição 
	final do robot depois de efectuar essa sequência de movimentos.
*/
typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;

typedef struct posicao {
   int x, y;
} Posicao;


Posicao posFinal (Posicao inicial, Movimento mov[], int N){
	int i;
    for (i = N-1; i >= 0; i--){
    	switch (mov[i]){
    		case Norte :
    			inicial.y++;
    			break;
    		case Sul :
    			inicial.y--;
    			break;
    		case Este :
    			inicial.x++;
    			break;
    		case Oeste :
    			inicial.x--;
    			break;
    		default : break;
    	}

    }
    return inicial;
}
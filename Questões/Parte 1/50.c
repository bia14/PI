#include <stdio.h>

/*
	Defina a função int vizinhos (Posicao p, Posicao pos[], int N) que, 
	dada uma posição e um array com N posições, calcula quantas dessas 
	posições são adjacentes à posição dada.

*/

typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;

typedef struct posicao {
   int x, y;
} Posicao;


int vizinhos (Posicao p, Posicao pos[], int N) {
    int i, vizinho = 0;
    for (i = 0; i < N; i++){
    	if ((pos[i].x == p.x+1 && pos[i].y == p.y)|| 
    		(pos[i].x == p.x-1 && pos[i].y == p.y)|| 
    		(pos[i].y == p.y+1 && pos[i].x == p.x)|| 
    		(pos[i].y == p.y-1 && pos[i].x == p.x))
    			vizinho++;
    }
    return vizinho;
}
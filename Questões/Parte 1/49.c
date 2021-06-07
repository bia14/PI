#include <stdio.h>
#include <math.h>

/*
	Defina a função int maisCentral (Posicao pos[], int N) que, dado um 
	array com N posições, determina o índice da posição que está mais
	perto da origem (note que as coordenadas de cada ponto são números inteiros).
*/


typedef enum movimento {Norte, Oeste, Sul, Este} Movimento;

typedef struct posicao {
   int x, y;
} Posicao;

int dist (Posicao ponto){
	return distancia = (ponto.x)*(ponto.x) + (ponto.y)*(ponto.y);
}

int maiscentral (Posicao pos[], int N) {
    int i, central = 0;
    for (i = 0; i < N; i++){
    	if (dist(p[i]) < dist(p[central]))
    		central = i;	
    }
    
    return central;
}
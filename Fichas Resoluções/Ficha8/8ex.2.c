#include <stdio.h>
#include <stdlib.h>

//ex. 2

typedef struct slist {
int valor;
struct slist * prox;
} * LInt;

LInt newLInt (int x, LInt xs) {
LInt r = malloc (sizeof(struct slist));
if (r!=NULL) {
r->valor = x; r->prox = xs;
}
return r;
}

typedef struct {
	LInt inicio, fim;
} Queue;

void initQueue (Queue *q){
	q -> inicio=NULL;
	q->fim = NULL;

}

int QisEmpty (Queue q){
	return (q.inicio == NULL);
}

int enqueue (Queue *q, int x){
	int r =0; LInt nova;
	nova = malloc(sizeof(struct slist));
	if (nova == NULL) //caso em que pode dar erro, isto é não conseguir alocar memória
		r= 1;
	else{
		nova->valor = x;
		nova->prox = NULL;
		if (q->inicio == NULL){
			q-> inicio = q->fim = nova;	
		}
		else {
			q->fim->prox= nova;
			q->fim = nova;		
		}
	}
	return r;
}

int dequeue (Queue *q, int *x){
	int r =0; LInt aux;
	if (q->inicio == NULL) 
		r=1;
	else{
		*x = q->inicio->valor;//
		aux = q->inicio;//
		//	q->inici == q->fim -> alternativa
		if (q->inicio->prox == NULL){
			q->inicio = q->fim = NULL;
		}
		else {
			q->inicio = q->inicio->prox;
		}
		free (aux);
	}
	return r;
}
/*
int front (Queue q, int *x){
	return 0;
}
*/
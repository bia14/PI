#include <stdio.h>
#include <stdlib.h>

//ex.3

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
	LInt  fim;
} Queue;

typedef struct dlist {
	int valor;
	struct dlist *ant, *prox;
} *DList;

typedef struct {
	DList back, front;
} Deque;

void initQueue (Queue *q){
	(*q) =NULL;
	(*q)->prox = NULL;

}

int QisEmpty (Queue q){
	return ((*q) == NULL);
}

int enqueue (Queue *q, int x){
	int r =0; LInt nova;
	nova = malloc(sizeof(struct slist));
	nova->valor = x;
	if (*q == NULL)
		nova->prox = nova;
		(*q) = nova;
	else {
	nova->prox = (*q)-> prox;
	(*q)->prox = nova;
	(*q) = nova;
	}
	return r;
}

int dequeue (Queue *q, int *x){
	int r =0; LInt aux;
	if ( *q == NULL) 
		r=1;
	else{
		*x = (*q)->prox->valor;//9
		aux = (*q)->prox;//6
		//	q->inicio == q->fim -> alternativa
		if ((*q)->prox == (*q){
			*q = NULL;
		}
		else {
			(*q)->prox = (*q)->prox->prox;
		}
		free (aux);}

	return r;
}

void initDeque (Deque *d){
	d->back = NULL;
	d->front = NULL;
}

int DisEmpty (Deque d){
	return (d->front == NULL );
}

int pushBack (Deque *q, int x){
	int r=0; DList nova;
	nova = malloc (sizeof (struct dlist));
	if (nova == NULL) 
		r=1;
	else {
		nova->valor = x;
		nova->ant = NULL;
		nova->prox = d->back;
		if (d->back == NULL)
			d->front=nova;
		else
			d->back->ant = nova;
		d->back = nova;
	}
	return r;
}

int popMax (Deque *d, int *x){

}
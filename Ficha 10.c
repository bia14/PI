#include <stdio.h>
#include <stdlib.h>

typedef struct nodo {
	int valor;
	struct nodo *esq, *dir;
} * ABin;


//recursiva
int removeElem (ABin *a, int x){
	//retorna 0 se sucesso
	int r = 0;
	//procurar x em *a
	if ((*a) == NULL)
		r = 1;
	else 
		if ((*a)->valor == x)
			removeRaiz (s);
		else
			if (x < (*a)->valor)
				r = removeElem (&((*a)->esq), x);
			else 
				r = removeElem (&((*a)->dir), x);
	return r ;
}

//não recursiva
int removeElem (ABin *a, int x){
	//retorna 0 se sucesso
	int r = 0;
	//procurar x em *a
	while ((*a) != NULL && (*a)->valor != x)
		if (x < (*a)-> valor)
			a = & ((*a)->esq);
		else 
			a = & ((*a)->dir);
	if (*a == NULL)
		r = 1;
	else 
		removeRaiz(a);
	return r ;
}

void removeRaiz (ABin *a){
	ABin tmp, menor;
	if ((*a)->esq == NULL)
		*a = (*a)->dir;
	else if ((*a)->dir == NULL)
		 	*a = (*a)-> esq;
		 else{
		 	menor = removeMenor(&((*a)->dir));
		 	menor->esq = (*a)->esq;
		 	menor->dir = (*a)->dir;
		 	*a = menor;
		 }
		 free (tmp);
}

ABin removeMenor (ABin *a){
	//remove o menor elemento de *a -> tmp ?
	//retorna esse nodo que foi removido -> r 
	ABin r;
	if ((*a)->esq == NULL){
		r = *a;
		*a = (*a)->dir;
	}
	else
		r = removeMenor (&((*a)->esq));
	return r;

}	

void rodaDireita (ABin *a){
	ABin b = (*a)->esq;
	(*a)->esq = b -> dir;
	b ->dir = *a;
	*a = b;
}

void promoveMenor (ABin *a){
	if (*a == NULL || (*a)->esq == NULL);
	else {
		promoveMenor(&((*a)->esq));
		rodaDireita (a);
	}
}
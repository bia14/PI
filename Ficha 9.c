#include <std.io>

typedef struct nodo {
	int valor;
	struct nodo *esq, *dir;
} *ABin;

ABin newABin (int r, ABin e, ABin d) {
ABin a = malloc (sizeof(struct nodo));
if (a!=NULL) {
a->valor = r; a->esq = e; a->dir = d;
}
return a;
}

int altura (ABin a){
	int r,e,d;
	if (a==NULL)
		r=0;
	else {
		e = altura (a->esq);
		d = altura (a->dir);
		if  (e>d)
			r = e + 1;
		else 
			r = d + 1;
	}
	return r;
}


int nFolhas (ABin a){
	int r, e, d;
	if (a == NULL)
		r = 0;
	else{
		if (a->esq == NULL && a->dir == NULL)
			r = 1 ;
		else 
			r = nFolhas (a->esq) + nFolhas (a-> dir);
	}
	return r;
}

void imprimeNivel (ABin a, int l){
	if (a != NULL){
		if (l == 0)
			printf("%d\n", a->valor);
		else {
			imprimeNivel (a->esq, l-1);
			imprimeNivel (a->dir, l-1);
		}
	}
}

int procuraE (ABin a, int x){
	int r = 0;
	if (a != NULL)
		if (a->valor == x)
			r = 1;
		else 
			r = procuraE (a->esq, x) || procuraE (a->dir, x);
	return r;
	//return (a != NULL && (a->valor == x || procuraE(a->esq, x) ||  procuraE(a->dir , x)) )
}

ABin maisEsquerda (ABin a){
	ABin r;
	while (a != NULL && a-> esq != NULL)
			r = (a->esq);
	return r;
	/*
	if ( a != NULL)
		while (a-> esq != NULL)
			a = (a->esq);
	return a;
	*/
}

// recursivo
struct nodo *procura (ABin a, int x){
	struct nodo *res;
	if (a == NULL)
		res = a;
	else {
		if (a->valor == x)
			res = a;
		else {
			if (a-> valor > x)
				res = procura (a-> esq, x);
			else 
				res = procura (a->dir, x);
		}
	} 
	return res ;
}

//não recursivo
struct nodo *procura (ABin a, int x){
	struct nodo *res;
	while (a-> valor != NULL && a->valor != x){
		if ( a->valor > x)
			a = a->esq;
		else 
			a = a->dir;
	}
	return a;
}

int nivel (ABin a, int x){
	int n = 0;
	while (a-> valor != NULL && a->valor != x){
		n++;
		if ( a->valor > x)
			a = a->esq;
		else 
			a = a->dir;
	}
	if (a == NULL)	
		return -1;
	else 
		return n;
}

int nivel (ABin a, int x){
	int res, r1;
	if (a == NULL)
		res = -1;
	else 
		if (a->valor == x)
			res = 0;
		else {
			if (a-> valor > x)
				r1 = nivel (a-> esq, x)
			else 
				r1 = nivel (a->dir, x);				
			if (r1 == -1)
				res = -1;
			else
				res = r1 + 1;
			}
	 
	return res ;
}

void imprimeAte (ABin a , int x){
	
	if (a!= NULL){
		imprimeAte (a->esq, x);
		if (a->valor < x){
			printf("%d", a-> valor);
			imprimeAte (a-> dir, x);
		}
	}

}

void imprime (ABin a){
	if (a != NULL){
		imprime (a->esq);
		printf("%d\n", a->valor);
		imprime(a->dir);
	}
}
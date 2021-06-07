#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 100

struct staticStack {
    int sp;
    int values [Max];
};
typedef struct staticStack *SStack;

void  SinitStack (SStack s){
    s -> sp=0;
}
int SisEmpty (SStack s){
    if (s->sp=0) return 1;
    else return 0;
    //return(s->sp=0);
}

int Spush (SStack s, int x){
    int r=0;
    if (s->sp == Max)
        r=1;
    else {
        s->values [s->sp] = x;
        s->sp++;
        // s->values [s->sp++] = x;
    }
    return r;
}

//colocar no endereço o elemento tirado da stack (*x)
int Spop (SStack s, int *x){
    int r=0;
    if (s->sp == 0)
        r = 1;
    else {
        s->sp--;
        *x = s-> values[s->sp];
        //*x = s-> values[--s->sp];
    }
    return r;
}

int  Stop (SStack s, int *x) {
    int r=0;
    if (s->sp == 0)
        r = 1;
    else {
        *x = s-> values[s->sp];
        //*x = s-> values[--s->sp];
    }
    return r;
}

//2
struct staticQueue {
    int front;
    int length;
    int values [Max];
} QUEUE, *SQueue;

//3
typedef struct dinStack {
    int size; // guarda o tamanho do array values
    int sp;
    int *values;
} *DStack;

void DinitStack (DStack s) {
    s->sp=0;
    s->size=5;
    s->values=malloc(5*sizeof(int));
}

int  DisEmpty (DStack s) {
    return (s->sp == 0);
}
//strngcopy
//memcpy
int  Dpush (DStack s, int x){
    int r=0, *n, i;
    if (s->sp == s->size){
        n = malloc (2*s->size*sizeof(int));
        //for (i=0;i<= s->sp;i++)
        //    n[i]=s->values[i];
        memcpy(n,s->values,s->size*sizeof(int));
        free (s->values);
        s->values = n;
        s->size *=2;
        s->values[s->sp++] = x;
    }
    else {
        s->values[s->sp++] = x;
    }
    return r;
}
//s->values = realloc (s->values, 2*s->size);
//realloc faz basicamente o que foi feito encima

int  Dpop (DStack s, int *x){
    int r=0;

    return r;
}

int  Dtop (DStack s, int *x){
    int r=0;
    if (s->sp == 0)
        r = 1;
    else {
        *x = s-> values[s->sp];
        //*x = s-> values[--s->sp];
    }
    return r;
}
int main() {
    printf("Hello, World!\n");
    return 0;
}

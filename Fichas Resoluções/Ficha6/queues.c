#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

// Static queues
#define Max 10
/*
 * struct SQueue
 *  int */
struct staticQueue {
    int front;
    int length;
    int values [Max];
};
typedef struct staticQueue *SQueue;

struct dinQueue {
    int size;
    int front;
    int length;
    int *values;
};

void SinitQueue (SQueue q){
    q -> front =  q -> length = 0;
}

int  SisEmptyQ (SQueue q){
    return (q->length == 0);
}

int  Senqueue (SQueue q, int x){
    int r=0, p;
    if (q->length == Max)
        r = 1;
    else {
        p = q->front + q->length;
        //p =(q->front + q->length)%Max;
        if ( p>=Max)
        if ( p>=Max)
            p -=Max;
        q->values[q->front + q->length] = x;
        q->length++;
    }
    return r;
}

int  Sdequeue (SQueue q, int *x) {
    int r=0,p;
    if (q->length == 0)
        r=1;
    else {
        p = q->front + q->length;
        q-> values[p];
        q->front ++;
        q ->length --;

    }
}

int  Sfront (SQueue q, int *x) {
    // ...

    return (-1);
}

void ShowSQueue (SQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%Max;
    }
    putchar ('\n');
}

// Queues with dynamic arrays

int dupQueue (DQueue q) {
    // ...
    return (-1);
}

void DinitQueue (DQueue q) {
    // ...
}

int  DisEmptyQ (DQueue s) {
    return (-1);
}

int  Denqueue (DQueue q, int x){
    // ...
    return (-1);
}

int  Ddequeue (DQueue q, int *x){
    // ...
    return (-1);
}

int  Dfront (DQueue q, int *x){
    // ...
    return (-1);
}

void ShowDQueue (DQueue q){
    int i, p;
    printf ("%d Items: ", q->length);
    for (i=0, p=q->front; i<q->length; i++) {
        printf ("%d ", q->values[p]);
        p = (p+1)%q->size;
    }
    putchar ('\n');
}

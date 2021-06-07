#include <stdio.h>


//EXERCÍCIO 2
void swapM (int *x, int *y){
    int tmp;
    tmp = *x;
    *x= *y;
    *y = tmp;
}
//EXERCÍCIO 3
void swap (int v[], int i, int j){
    int tmp;
    tmp = v[i];
    v[i]=v[j];
    v[j]=tmp;
}
//Exercício 4
int soma (int v[], int N){
    int j,i;
    for (i=0, j = 0 ; i < N ; i++){
        j+= v[i];
    }
    return j;
}
// e se tentássemos fazer uma definição recursiva à Haskell?
// sum [] = 0;
//sum (h:t)= h + sum t;

int somaR (int v[], int N){
 if (N==0) return 0;
 else return v[0] + somaR(v+1, N-1);
}
//Exercício 5
void inverteArray (int v[], int N){
    int i; //para percorrer metade do array
    for (i=0; i<N/2; i++){
        // trocar v[i] por v[N-i-j]
          swapM(&(v[i]),&(v[N-i-1]));
        //swapM(v+i, v+N-i-1);
        //swap (v, i, N-i-1);
    }
}
void dumpV(int v[], int N){
    int i;
    for (i=0; i<N; i++)
            printf("%d ", v[i]);
    putchar('\n');
}

// o que é v[k] ? o que está na posição k
// v é um endereço de memória onde começa o array
// o que é v+k? o endereço da posição k do array v
// &(v[k]) == v+k

void inverteArray2 (int v[], int N){
    int i, j;
    for (i = 0, j = N; i < j; i++, j--){
        swap (v, i, j);
      //swapM (v+1 , v+j);
    }
}

//Exercício 6
int maximum (int v[], int N, int *m){
    int r = 0, i;
    if (N<=0)
        r=1;
    else {
        //colocar em *m o maior elemento do array v
        //percorrer o array v
        *m = v[0];
        for (i=0; i<N; i++){
            if (v[i]>*m)
                *m = v[i];
        }
    }
    return r;
}

//Exercício 7
void quadrados (int q[], int N){
    int i, delta;
    q[0]=0;delta=1;
    for (i=1; i<N; i++){
        q[i]=q[i-1]+ delta ;
        delta += 2;
    }
}
// 0 1 4 9 16 25 36

//Exercício 8
/*
 * linha 0 ... 1
 * linha 1 ... 1 1
 * linha 2 ... 1 2 1
 * linha 3 ... 1 3 3 1
 * linah 4 ... 1 4 6 4 1
 * linha 5 ... 1 5 10 10 5 1
 */
void pascal (int v[], int N){
    int i,j ; // para sabermos rm que linha estamos
    v[0]= 1;
    for (i=1; i<=N; i++){
        //assumimos que a linha i+1 já está construida
        //construimos a linha i
        v[i]=1;
        for (j=i-1; j>0; j--){
            v[j]=v[j]+v[j-1];
        }

    }
}

void desenhaTriangulpP (int N){
    int i;
    int a[N+1];
    for (i=0; i <=N; i++){
        pascal(a,i);
        dumpV(a,a+1);
    }
}

int main() {
    //Exercício 2
   /* int x = 3, y = 5;
    swapM (&x, &y);
    printf ("%d %d\n", x, y);
    */
    //Exercício 3
    /* int v[10]={10,6,2,3,5,1,5,9,8,7};
    swap(v,1,50);
    */
    //Exercício 4
    /*
    int v[10]={10,6,2,3,5,1,5,9,8,7};
    printf( "%d \n", soma (v,10));
    //Exercicio 5
    */
     /*
    int v[11]={10,6,2,3,5,1,5,9,8,7,45};
    printf("ao invertermos o array "); dumpV(v,11);
    inverteArray(v,11);
    printf("obtemos                "); dumpV(v,11);
    */
    //Exercício 6
    /*
    int x = 3 , y = 5;
    int v[10]={10,6,2,3,5,1,55,9,8,7};
    x = maximum (v,10, &y);
    printf ("O maior elemento de "); dumpV (v,10);
    printf ("é %d\n", y);
    */
    //Exercício 7
    /*int q[10]={0,1,2,3,4,5,6,7,8,9};
    printf ("Os 10 primeiros quadrados: ");
    quadrados (q,10);
    dumpV (q,10);
    */
    //Exercício 8
    int v[10]={0,1,2,3,4,5,6,7,8,9};
    printf ("A linha 5 do triângulo de Pascal é ");
    pascal (v,5); dumpV (v,6);

    printf ("As linhas 0 a 10 do triângulo de Pascal\n\n");
    desenhaTriangulpP (10);
     return 0;
}

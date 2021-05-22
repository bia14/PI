#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct aluno {
    int numero;
    char nome[100];
    int miniT [6];
    float teste;
} Aluno;

//////////////////////////////////
int nota (Aluno a);

void ordenaPorNum (Aluno t [], int N);
int procuraNum (int num, Aluno t[], int N);

void criaIndPorNum (Aluno t [], int N, int ind[]);
int procuraNumInd (int num, int ind[], Aluno t[], int N);

void criaIndPorNome (Aluno t [], int N, int ind[]);

void imprimeTurmaInd (int ind[], Aluno t[], int N);
/////////////////////////////////

void dumpV (int v[], int N){
    int i;
    for (i=0; i<N; i++) printf ("%d ", v[i]);
}
void imprimeAluno (Aluno *a){
    int i;
    printf ("%-5d %s (%d", a->numero, a->nome, a->miniT[0]);
    for(i=1; i<6; i++) printf (", %d", a->miniT[i]);
    printf (") %5.2f %d\n", a->teste, nota(*a));
}

int nota (Aluno a){
    int r, i, mt=0;
    float nota, mediaMT;
    //Somar as notas todas nos minitestes
    for (i=0; i<6;i++)
            mt += a.miniT[i];
    mediaMT = 20 * mt / 12;
    nota = mediaMT * 0.3 + a.teste * 0.7;

    if (mediaMT < 8 || a.teste < 8 || nota < 9.5)
        return 0;
    else
        r = round (nota);
    return r;
}

int procuraNum (int num, Aluno t[], int N){
    int i = 0, r=-1;
    for (i=0; i<N && t[i].numero == num ; i++)
            return i;

    return (-1);
}
/*
 * int procuraNum (int num, Aluno t[], int N){
    int i = 0, r=-1;
    for (i=0; i<N ; i++)
        if (t[i].numero == num )
            break;

    return (i==N ? -1 : i);
    }

    ---ou
    int procuraNum (int num, Aluno t[], int N){
    int i = 0, r=-1;
    for (i=0; i<N && t[i].numero == num; i++);

    return (i==N ? -1 : i);
    }

    int procuraNum (int num, Aluno t[], int N){
    int i = 0, r;
    for (i=0; i<N && t[i].numero != num; i++){
        if (i == N-1 && t[i].numero != num)
            r=-1;
        else
            r = i;}

    return r;
    }

     int procuraNum (int num, Aluno t[], int N){
        int i = 0, r=-1;
        for (i=0; i<N ; i++)
        ;
            if (i<N && t[i].numero == num )
                return i;

        return (-1);
    }*/
void ordenaPorNum (Aluno t [], int N){
    int i,j;
    Aluno aux;
    for (i=0; i<N-1; i++)
        for (j=i+1; j<N; j++)
            if (t[i].numero > t[j].numero) {
                aux = t[i];
                t[i] = t[j];
                t[j] = aux;
            }
}

void criaIndPorNum (Aluno t [], int N, int ind[]) {
    int i, j, aux;
    for (i = 0; i < N; i++)
        ind[i] = i;
    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
            if (t[ind[i]].numero > t[ind[j]].numero) {
                aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
            }
}
int procuraNumInd (int num, int ind[], Aluno t[], int N){
    int i;
    for (i=0; i<N; i++){

    }
    return -1;
}

void criaIndPorNome (Aluno t [], int N, int ind[]){
    int i, j, aux;
    for (i = 0; i < N; i++)
        ind[i] = i;
    for (i = 0; i < N - 1; i++)
        for (j = i + 1; j < N; j++)
            if (strcmp(t[ind[i]].nome, t[ind[j]].nome)) {
                aux = ind[i];
                ind[i] = ind[j];
                ind[j] = aux;
            }
}

void imprimeTurmaInd (int ind[], Aluno t[], int N){
    int i;
    for (i=0; i<N; i++){
    imprimeAluno(&(t[ind[i]]));
    }
}

int main() {
    Aluno Turma1 [7] = {{4444, "André", {2,1,0,2,2,2}, 10.5}
            ,{6666, "Bruna", {2,2,2,1,0,0}, 12.5}
            ,{8888, "Carla", {2,1,2,1,0,1}, 14.5}
            ,{5555, "Diogo", {2,2,1,1,1,0},  8.5}
            ,{2222, "Joana", {2,0,2,1,0,2},  3.5}
            ,{7777, "Maria", {2,2,2,2,2,1},  5.5}
            ,{3333, "Paulo", {0,0,2,2,2,1},  8.7}
    } ;
    int indNome [7], indNum [7];
    int i;

    printf ("\n-------------- Testes --------------\n");

    // ordenaPorNum (Turma1, 7);

    for (i=0; i<7 ; imprimeAluno(Turma1 + i++));
     printf ("procura 5555: %d \n", procuraNum (5555, Turma1, 7));
     printf ("procura 9999:%d \n", procuraNum (9999, Turma1, 7));

    for (i=0; i<7; imprimeAluno (Turma1 + i++));

    // criaIndPorNum (Turma1, 7, indNum);

    // printf ("procura 5555:%d \n",  procuraNumInd (5555, indNum, Turma1, 7));
    // printf ("procura 9999:%d \n",  procuraNumInd (9999, indNum, Turma1, 7));

    // criaIndPorNome (Turma1, 7, indNome);

    // imprimeTurmaInd (indNum, Turma1, 7);
    // imprimeTurmaInd (indNome, Turma1, 7);

    printf ("\n---------- Fim dos Testes ----------\n");

    return 0;
}

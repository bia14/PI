#include <stdio.h>

//Exercício 1
void exercicio1 (int n){
   int i,j;
   for (i=0;i<n;i++){
       for (j=0;j<n;j++){
           putchar('#');
       }
       putchar('\n');
   }
}

//Exercício 2
void exercicio2 (int n){
    int i, j;
    for (i=0;i<n;i++){
        for  (j=0;j<n;j++){
            if (j%2==0 && i%2 ==0 || j%2!=0 && i%2 !=0)
                putchar ('#');
            else
                putchar('_');
        }
        putchar('\n');
    }
}

//Replicate
int replicate (int n, char c){
    int i;
    for (i=0;i<n;i++){
        putchar(c);
    }
}

//Exercício 3
void exercicio3V (int n){
    int i;
    for (i=0;i<n;i++){
        replicate (i+1,'#');
        putchar ('\n');
    }
    for (i=(n-1);i>0;i--){
        replicate (i, '#');
        putchar('\n');
    }
}

void exercicio3H (int n){
    int i;
    for (i=0;i<n;i++){
        replicate((n-(i+1)), ' ');
        replicate((2*i+1), '#');
        putchar('\n');
    }
}

int main() {
    int x,r = 0;
    x=;
    while (x > 0) {
        r += 2;
        x = x - r;
    }
    printf("%d", r);
    return 0;
}

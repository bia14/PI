#include <stdio.h>

/* Estado e atribuições
EXERCÍCIO 1

 1. int x, y;
    x = 3;
    y = x+1;
    x = x*y;
    y = x + y;
    printf("%d %d\n", x, y);

    1)  x=? y=?
    2)  x=3
    3)  y=4
    4)  (3*4==12) x=12
    5)  (12+4==16) y=16

    12   16

 2. int x, y;
    x = 0;
    printf ("%d %d\n", x, y);

    1)  x=?  y=?
    2)  x=0
    3)

 3. char a, b, c;
    a = ’A’; b = ’ ’; c = ’0’;
    printf ("%c %d\n", a, a);
    a = a+1; c = c+2;
    printf ("%c %d %c %d\n", a, a, c, c);
    c = a + b;
    printf ("%c %d\n", c, c);

    1)  a=? b=? c=?
    2)  a='A'
        b=' '
        c='0'
    3)  A 65
    4)  a='B' c='2'
    5)  B 66 2 50
    6)  c='b'
    7)  b 98

 4. int x, y;
    x = 200; y = 100;
    x = x+y;
    y = x-y;
    x = x-y;
    printf ("%d %d\n", x, y);

    1) x=? y=?
    2) x=200  y=100
    3) (200+100==300) x=300
    4) (300-100==200) y=200
    5) (300-200==100) x=100
    6) 100 200

 EXERCÍCIO 2

  a) int x, y;
     x = 3; y = 5;
     if (x > y)
     y = 6;
     printf ("%d %d\n", x, y);

     1) x=? y=?
     2) x=3  y=5
     3) (3>5= False)
     4) 3  5

  b) int x, y;
     x = y = 0;
     while (x != 11) {
     x = x+1; y += x;
     }
     printf ("%d %d\n", x, y);

     1) x=? y=?
     2) x=0 y=0
     3) (x!=11 == 0!=11 == True) x=1  y=1
     4) (x!=11 == 1!=11 == True) x=2  y=3
     5) (x!=11 == 2!=11 == True) x=3  y=6
     6) (x!=11 == 3!=11 == True) x=4  y=10
     7) (x!=11 == 4!=11 == True) x=5  y=15
     8) (x!=11 == 5!=11 == True) x=6  y=21
     9) (x!=11 == 6!=11 == True) x=7  y=28
    10) (x!=11 == 7!=11 == True) x=8  y=36
    11) (x!=11 == 8!=11 == True) x=9  y=45
    12) (x!=11 == 9!=11 == True) x=10  y=55
    13) (x!=11 == 10!=11 == True) x=11  y=66
    14) (x!=11 == 11!=11 == False) x=11  y=66
    15) 11 66

  c) int i;
     for (i=0; (i<20) ; i++)
     if (i%2 == 0) putchar (’_’);
     else putchar (’#’);

    1) i=?
    2) i=0 (i<20 == 0<20 == True)
            (i%2 == 0%2 == 0 == True) _
    3) i=1 (i<20 == 1<20 == True)
           (i%2 == 1%2 == 0 == False) _#
    4) i=2 (i<20 == 2<20 == True)
            (i%2 == 2%2 == 0 == True) _#_
    5) i=3 (i<20 == 3<20 == True)
           (i%2 == 3%2 == 0 == False) _#_#
    6) i=4 (i<20 == 4<20 == True)
            (i%2 == 4%2 == 0 == True) _#_#_
    7) i=5 (i<20 == 5<20 == True)
           (i%2 == 5%2 == 0 == False) _#_#_#
    8) i=6 (i<20 == 6<20 == True)
            (i%2 == 6%2 == 0 == True) _#_#_#_
    9) i=7 (i<20 == 7<20 == True)
           (i%2 == 7%2 == 0 == False) _#_#_#_#
    10) i=8 (i<20 == 8<20 == True)
            (i%2 == 8%2 == 0 == True) _#_#_#_#_
    11) i=9 (i<20 == 9<20 == True)
           (i%2 == 9%2 == 0 == False) _#_#_#_#_#
    12) i=10 (i<20 == 10<20 == True)
            (i%2 == 10%2 == 0 == True) _#_#_#_#_#_
    13) i=11 (i<20 == 11<20 == True)
           (i%2 == 11%2 == 0 == False) _#_#_#_#_#_#
    14) i=12 (i<20 == 12<20 == True)
            (i%2 == 12%2 == 0 == True) _#_#_#_#_#_#_
    15) i=13 (i<20 == 13<20 == True)
           (i%2 == 13%2 == 0 == False) _#_#_#_#_#_#_#
    16) i=14 (i<20 == 14<20 == True)
            (i%2 == 14%2 == 0 == True) _#_#_#_#_#_#_#_
    17) i=15 (i<20 == 15<20 == True)
           (i%2 == 15%2 == 0 == False) _#_#_#_#_#_#_#_#
    18) i=16 (i<20 == 16<20 == True)
            (i%2 == 16%2 == 0 == True) _#_#_#_#_#_#_#_#_
    19) i=17 (i<20 == 17<20 == True)
           (i%2 == 17%2 == 0 == False) _#_#_#_#_#_#_#_#_#
    20) i=18 (i<20 == 18<20 == True)
            (i%2 == 18%2 == 0 == True) _#_#_#_#_#_#_#_#_#_
    21) i=19 (i<20 == 19<20 == True)
            (i%2 == 19%2 == 0 == False) _#_#_#_#_#_#_#_#_#_#
    20 ) i=20 (i<20 == 20<20 == False) _#_#_#_#_#_#_#_#_#_#

   d) void f (int n) {
        while (n>0) {
            if (n%2 == 0) putchar (’0’);
            else putchar (’1’);
            n = n/2;
        }
        putchar (’\n’);
      }
      int main () {
        int i;
        for (i=0;(i<16);i++)
            f (i);<
        return 0;
      }

        1) i=?
        2) i=0 (i<16 == 0<16 == True)
            (0>0 == False)


 */

void quadrado (int n) {
    //printf ("Quadrado %d a", n);
    // escrever n linhas
    int i,j;
    for (i=0;i<n; i++) {
        //escrever a linha i
        //escrever n vezes o caracter '#' seguido de '\n'
        for (j=0;j<n;j++)
            putchar ('#');
        putchar('\n');
    }
}
/* Versão 1
void xadrez (int n){
    int i,j;
    for (i=0;i<n,i++){
        if (i%2==0) {
            for (j=0;j<n;j++)
                if (j%2==0)
                    putchar ('#');
                else
                    putchar('_');
                putchar('\n');
        }
        else {
            for (j=0;j<n;j++)
                if (j%2==0)
                    putchar ('_');
                else
                    putchar('#');
                putchar('\n');
        }
    }

}

Esta maneira só dá para valores impares
void xadrez (int n){
    int i;
    for (i=0; i<n*n;i++){
        if (i%n==0) putchar('\n');
        if (i%2==0) putchar('#');
        else putchar('_');
    }
}
*/
//Versão 2
void xadrez (int n){
    int i,j;
    for (i=0;i<n;i++) {
        for (j==0;j<n;j++){
            if (j%2==i%2)
                putchar ('#');
            else
                putchar('_');
        }
        putchar('\n');
    }
}
/*
escrever a linha 0: escrever 4 ' ' e depois escrever  1 '#'
escrever a linha 1: escrever 3 ' ' e depois escrever 3 '#' (+2 do que na linha anterior)
escrever a linha 2: escrever 2 ' ' e depois escrever 5 '#' (+2 do que na linha anterior)
...
escrever a linha i: escrever (n-(i+1)) ' ' e depois escrever (2*i+1) '#'
*/
void replicate (int n, char c){
    int i;
    for (i=0;i<n; i++)
        putchar (c);
}
/* Versão 1
void TrianguloH (int n){
    int i, // para contar em que linha vamos
        j,
        e, // para contar o numero de espaços antes dos '#'
        c; // para contar quantos '#' temos que escrever nessa linha

    // escreve n linhas
    c = 1; e = n-1;
    for (i=0;i<n;i++){
        //escreve a linha i
        replicate(e,' ');
        replicate(c,'#');
        c=c+2; e=e-1;
        putchar ('\n');
    }
}
*/
//Versão 2
void TrianguloH (int n){
    int i, // para contar em que linha vamos
    j;

    // escreve n linhas
    for (i=0;i<n;i++){
        //escreve a linha i : escrever n-(i+1) ' ' e depois escrever  2*i+1 '#'
        replicate((n-(i+1)),' ');
        replicate((2*i+1),'#');
        putchar ('\n');
    }
}
void TrianguloV (int n) {
    int i,j;
    // escreve n linhas a crescer
    for (i=0;i<n;i++){
        replicate (i+1,'#');
        putchar ('\n');
    }
    //escrever n-1 ultimas linhas a crescer
    for (i=(n-1);i>0;i--){
        replicate (i,'#');
        putchar ('\n');
    }
}
/*
                01234
#########       #               -4
#########     #####             -3
#########    #######            -2
#########    #######            -1
#########   #########            0
#########    #######             1
#########    #######             2
#########     #####              3
#########       #                4

*/
void Circulo (int raio){
    int x,y,
            c;//contador de '#'
    for(y=(-1)*raio; y <= raio; y++){
        for(x=(-1)*raio; x <= raio;x++){
            //só escrever se (x,y) estiver dentro do circulo
            //ATENÇÃO: x^2 != x ao quadrado
            if ((x*x + y*y)<= raio*raio ){
                putchar('#');
                c=c+1;
            }
            else
                putchar(' ');
        }
        putchar('\n');
    }
    return c;
}


int main() {
    int n;
    quadrado (5);
    xadrez (5);
    TrianguloH (5);
    TrianguloV (5);
    Circulo (5);
    return (0);
}

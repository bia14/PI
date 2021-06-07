#include <stdio.h>

void swap (int v[], int i, int j){
    int x;
    x = v[i];
    v[i] = v[j];
    v[j] = x;
}

void org (int n, int v[]){
    int m, i;
    if (n > 1){
        // descobrir o indice do menor elemento
        m=0;
        for (i=1; i<n; i++)
            if (v[i]<v[m])
                m = i;
        swap (v, 0, m);
        printf("%d ", v[i]);
        org (n-1, v+1);

    }
    printf("%d ", v);

}


int main() {
    int x=0,
        a=0, b=0, c=0, d=0, e=0, f=0, g=0, h=0,i=0,j=0;

    while (x!=(-1)) {
        scanf("%d ", &x);

        if (x>=0 && x<100){
            if (x==0) {
                a++;
                int va[a];
                va[a]=x;
            }
            if ( x>0 && x<10) {
                a++;
                va[a] = x;
            }
            if (x>=10 && x<20){
                b++;
                int vb[b];
                vb[b]=(x-10);
            }
            if (x>=20 && x<30) {
                c++;
                int vc[c];
                vc[c] = (x-20);
            }
            if ( x>=30 && x<40) {
                d++;
                int vd[d];
                vd[d] = (x-30);
            }
            if ( x>=40 && x<50) {
                e++;
                int ve[e];
                ve[e] = (x-40);
            }
            if ( x>=40 && x<50) {
                f++;
                int vf[f];
                vf[f] = (x-50);
            }
            if ( x>=50 && x<60) {
                g++;
                int vg[g];
                vg[g] = (x-60);
            }
            if ( x>=60 && x<70) {
                h++;
                int vh[h];
                vh[h] = (x-70);
            }
            if ( x>=70 && x<80) {
                i++;
                int vi[i];
                vi[i] = (x-80);
            }
            if ( x>=90 && x<100) {
                j++;
                int vj[j];
                vj[j] = (x-90);
            }

        }
    }

//Imprime o diagrama de caule e folhas

    printf("0 | "); org (a,va); printf("\n");
    printf("1 | "); org (b,vb); printf("\n");
    printf("2 | "); org (c,vc); printf("\n");
    printf("3 | "); org (d,vd); printf("\n");
    printf("4 | "); org (e,ve); printf("\n");
    printf("5 | "); org (f,vf); printf("\n");
    printf("6 | "); org (g,vg); printf("\n");
    printf("7 | "); org (h,vh); printf("\n");
    printf("8 | "); org (i,vi); printf("\n");
    printf("9 | "); org (j,vj); printf("\n");

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct lista {
    char *palavra;
    int ocorr;
    struct lista * prox;
} * Palavras;

void libertaLista (Palavras);
int quantasP (Palavras);
void listaPal (Palavras);
char * ultima (Palavras);
Palavras acrescentaInicio (Palavras, char *);
Palavras acrescentaFim (Palavras, char *);
Palavras acrescenta (Palavras, char *);
struct celula * maisFreq (Palavras);

//1
void libertaLista (Palavras l){
   Palavras  tmp;
    while (l != NULL) {
        /*
         * if (l != NULL){
         * libertaLista(l->prox);
         * free (l->palavra);
         * free (l);
         * }
       */
        tmp = l;
        free (l->palavra);
        l = l->prox;
        free (tmp);
    }
}

//3
void listaPal (Palavras l){
    while ( l != NULL){
        printf("%s %d\n", l->palavra, l->ocorr);
        l=l->prox;
    }
}
//4
char *ultima (Palavras l){

    if (l == NULL) return NULL;
     else {
        while (l->prox != NULL) {
            l = l->prox;
        }
        return (l->palavra);
    }

//5
Palavras acrescentaInicio  (Palavras l, char *p){
         Palavras n;
         n = malloc (sizeod(struct lista));
         n-> palavras = strdup(p);
         n->ocorr = 1;
         n->prox = l;
         return n;
    }

//6
Palavras  acrescentaFim (Palavras l, char *p){
         Palavras last, n;
        last = malloc(sizeof(struct lista));
        last->palavra = strdup(p);
        last->prox = NULL;
        last->ocorr = 1;
         if (l == NULL) l = last;
         else {
             n = l;
             while (n->prox != NULL)
                 n = n->prox;
             n->prox = last;
         }
         return n;
}
/*
Palavras acrescenta (Palavras l, char *p) {
        while(l->palavras != p && l != NUll)
            l = l->prox;
        if ( l->palavras == p )
            l->ocorr += 1;
        else
            acrescentaFim (Palavas l, char *p);

}
*/

Palavras acrescenta (Palavras l, char *p) {
         Palavras x = l;
         //procurrar p em l
         while (x != NULL && strcmp(x->palavra, p) != 0)
             x = x->prox;
         if (x != Null )
             x -> ocorr++;
         else
             l = acrescentaInicio(l,p);
         return l;
}

    int main () {
    Palavras dic = NULL;

    char * canto1 [44] = {"as", "armas", "e", "os", "baroes", "assinalados",
                          "que", "da", "ocidental", "praia", "lusitana",
                          "por", "mares", "nunca", "de", "antes", "navegados",
                          "passaram", "ainda", "alem", "da", "taprobana",
                          "em", "perigos", "e", "guerras", "esforcados",
                          "mais", "do", "que", "prometia", "a", "forca", "humana",
                          "e", "entre", "gente", "remota", "edificaram",
                          "novo", "reino", "que", "tanto", "sublimaram"};

    printf ("\n_____________ Testes _____________\n\n");

    int i; struct lista *p;
    for (i=0;i<44;i++)
        dic = acrescentaInicio (dic, canto1[i]);

    printf ("Foram inseridas %d palavras\n", quantasP (dic));

    printf ("palavras existentes:\n");
    listaPal (dic);
    printf ("última palavra inserida: %s\n", ultima (dic));

    libertaLista (dic);

    dic = NULL;

    srand(42);

    for (i=0; i<1000; i++)
        dic = acrescenta (dic, canto1 [rand() % 44]);

    printf ("Foram inseridas %d palavras\n", quantasP (dic));
    printf ("palavras existentes:\n");
    listaPal (dic);
    printf ("última palavra inserida: %s\n", ultima (dic));

    p = maisFreq (dic);
    //printf ("Palavra mais frequente: %s (%d)\n", p->palavra, p->ocorr);

    printf ("\n_________ Fim dos testes _________\n\n");

    return 0;
}



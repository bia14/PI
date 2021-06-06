#include <stdio.h>
#include <string.h>

/*
  Defina uma função "int maiorSufixo (char s1 [], char s2 [])" que calcula
  o comprimento do maior sufixo comum entre as duas strings.
*/
int maiorSufixo (char s1 [], char s2 []) {
    int i = strlen (s1) - 1, j = strlen (s2) - 1, sufixo = 0;
    for (; i >= 0 && j >= 0 && s1[i] == s2[j]; i--, j--, sufixo++);

    return sufixo;
}
#include <stdio.h>

/*
  Defina uma função "int maiorPrefixo (char s1 [], char s2 [])" que calcula
  o comprimento do maior prefixo comum entre as duas strings.
*/

int maiorPrefixo (char s1 [], char s2 []) {
    int i, prefixo;
    for (i = 0, prefixo = 0; s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]; i++,prefixo++);
    return prefixo;
}
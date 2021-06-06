/*
  Apresente uma definição da função pré-definida em C 
  char *strcpy (char *dest, char source[]) que copia a
  string source para dest retornando o valor desta última.
*/
char *mystrcpy(char s1[], const char s2[]) {
    int i,	// contador patra s1
    	j;	// contador para s2
    for ( i = 0, j = 0; s2[j] != '\0'; i++, j++)
    	s1[i] =  s2[j];
    s1 [i] = '\0';
    return s1;
}
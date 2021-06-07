/*
  Defina uma função "void transposta (int N, float m[N][N])" que transforma
  uma matriz na sua transposta.
*/

void transposta (int N, float m [N][N]) {
    int i, j, n;
    for( i = 0; i < N; i++){
    	for (j = i; j < N; j++){
    		n = m[i][j];
    		m[i][j] = m[j][i];
    		m[j][i] = n;
    	}
    }
}

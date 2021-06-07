#include <stdio.h>

//1

float multInt1 (int n, float m) {
    float res = 0.0;
    for (; n>0;n--) {
        res = res + m;
    }
    return res;
}

//2

float multInt2 (int n, float m) {
    float res = 0.0;
    while (n>0){
    if(n%2!=0) soma += m;
    n/=2;
    m*=2;
    }
    return res;
}

float multInt3 (int n, float m, int *count) {
    float res = 0.0;
    int conta = 0;
    while (n>0) {
        if (n%2 != 0) {
            res += m;
            conta++;
        }
        n = n/2;
        m = m*2;
    }
    *count = conta;
    return res;
}

//3

int mdc1 (int a, int b){
    int maior;
    int menor;
    int res;
    if (a > b) {
        maior = a;
        menor = b;
    }
    else {
        maior = b;
        menor = a;
    }
    for(res = menor; res > 0; res--) {
        if (maior%res == 0 && menor%res == 0) return res;
    }
    return 0;
}

// 4 

int mdc2(int a, int b) {
    int res;
    while (a > 0 && b > 0) {
        if (a > b) { a = a - b; }
        if (a < b) { b = b - a; }    
        if (a == b) { b = b - a; }
    }
    if (b == 0) return a;
    if (a == 0) return b;
} 


// 5

// 6

int fib1(int n) {
    int c;
    int res = 0;
    int ant1 = 1;
    int ant2 = 0;
    if (n == 0) return 1;
    for (c = 0; c < n; c++) {
        res = ant1 + ant2;
        ant2 = ant1;
        ant1 = res;
    }
    return res;
}
// not sure

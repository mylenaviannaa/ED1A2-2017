/* 
 * File:   main.c
 * Author: aluno
 *
 * Created on 5 de Setembro de 2017, 16:07
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Informe o N: ");
    scanf("%d", &n);
    printf("Fatorial de %d = %d", n, fatorial(n));

    return 0;
}

int fatorial(int n) {
    if (n <= 1) { 
        return 1; 
    } else {
        return n * fatorial(n - 1); 
    }
}


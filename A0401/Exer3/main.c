#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n;

    printf("Informe a quantidade de vezes que o número será multiplicado: ");
    scanf("%d", &m);
    printf("Informe o número que será multiplicado: ");
    scanf("%d", &n);

    printf("A multiplicação dos números é: %d", multiplicacao(m, n));

    return 0;
}

int multiplicacao(int m1, int n1) {
    int i, ant, prox, r = 0;
    ant = 0;
    prox = n1;

    for (i = 1; i <= (m1 + 1); i++) {
        r = r + ant;
        ant = prox;
        prox = n1;
    }

    return r;
}
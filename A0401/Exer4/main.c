#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;

    printf("Informe um número natural: ");
    scanf("%d", &num);

    printf("O número natural %d em binário é: %d", num, binario(num));

    return 0;
}

int binario(int n) {
    int bin, aux, digitos, ptc;
    aux = n;
    bin = 0;
    ptc = 1;

    while (aux > 0) {
        digitos = aux % 2;
        aux = aux / 2;
        bin = bin + (digitos * ptc);
        ptc = ptc * 10;
    }

    return binario;
}
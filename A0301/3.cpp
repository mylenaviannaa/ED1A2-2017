#include <stdio.h>
#include <stdlib.h>

int main() {
    int num[10], i = 0, cont = 0, n;

    do {
        printf("\nInsira um n�mero entre 0 e 100: ");
        scanf("%d", &n);

        if ((n >= 0) && (n <= 100)) {
           
            num[cont] = n;
            cont++;
        } else {
            if (n == -1) {
                break;
            } else {
                printf("Valor incorreto! Tente novamente!");
            }
        }
    } while (cont < 10);

    printf("\nForam informados %d n�meros.", cont);

    printf("\nOs n�meros pares s�o: ");
    for (i = 0; i < cont; i++) {
        if (num[i] % 2 == 0) {
            printf("\n%d", num[i]);
        }
    }

    printf("\nOs n�meros �mpares s�o: ");
    for (i = 0; i < cont; i++) {
        if (num[i] % 2 != 0) {
            printf("\n%d", num[i]);
        }
    }

    return 0;
}


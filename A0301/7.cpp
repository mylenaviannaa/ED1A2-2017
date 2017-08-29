#include <stdio.h>
#include <stdlib.h>

int main() {
    int matriz1[3][3], matriz2[3][3], matriz3[3][3];
    int i, j, op;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n Informe um numero na matriz 1, para linha [%d] e coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &matriz1[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\n Informe um numero na matria 2, para linha [%d] e coluna [%d]: ", i + 1, j + 1);
            scanf("%d", &matriz2[i][j]);
        }
    }

    printf("Escolha uma operação (1: + |2: * |3: - |4: /): \n");
    scanf("%d", &op);

    if (op == 1) {
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
            }
        }

    } else {
        if (op == 2) {
            for (i = 0; i < 3; i++) {
                for (j = 0; j < 3; j++) {
                    matriz3[i][j] = matriz1[i][j] * matriz2[i][j];
                }
            }

        } else {
            if (op == 3) {
                for (i = 0; i < 3; i++) {
                    for (j = 0; j < 3; j++) {
                        matriz3[i][j] = matriz1[i][j] - matriz2[i][j];
                    }
                }

            } else {
                if (op == 4) {
                    for (i = 0; i < 3; i++) {
                        for (j = 0; j < 3; j++) {
                            matriz3[i][j] = matriz1[i][j] / matriz2[i][j];
                        }
                    }
                }
            }
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("O resultado é: %d \n", matriz3[i][j]);
        }

    }

    return 0;
}

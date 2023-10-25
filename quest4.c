#include <stdio.h>

// Função para calcular o sucessor de um número
int sucessor(int n) {
    return n + 1;
}

int main() {
    int i;

    printf("Informe o valor de i: ");
    scanf("%d", &i);

    printf("Elementos em MQ%d:\n", i);

    // Inicializa MQ0 com [0, 1]
    int mq[2][i + 1];
    mq[0][0] = 0;
    mq[1][0] = 1;
    int tamanho = 1; // Tamanho atual de MQ

    for (int j = 1; j <= i; j++) {
        for (int k = 0; k <= tamanho; k++) {
            if (mq[1][k] == j) {
                mq[0][tamanho + 1] = k;
                mq[1][tamanho + 1] = sucessor(j);
                tamanho++;
            }
        }
    }

    // Exibe os elementos em MQ
    for (int j = 0; j <= tamanho; j++) {
        printf("[%d, %d] ", mq[0][j], mq[1][j]);
    }

    printf("\n");

    return 0;
}

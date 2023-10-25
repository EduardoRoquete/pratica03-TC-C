#include <stdio.h>

// Função para calcular o sucessor de um número
int sucessor(int n) {
    return n + 1;
}

// Função para verificar se [n, m] está em MQ de forma recursiva
int estaEmMQ(int n, int m) {
    // Caso base: [0, 1] está em MQ
    if (n == 0 && m == 1) {
        return 1;
    }
    
    // Caso recursivo: [n, m] está em MQ se [n, s(m)] estiver em MQ
    if (n >= 0 && m >= 1) {
        return estaEmMQ(n, sucessor(m));
    }
    
    // Se não corresponder a nenhum dos casos acima, não está em MQ
    return 0;
}

int main() {
    int i;

    printf("Informe o valor de i: ");
    scanf("%d", &i);

    printf("Elementos em MQ%d:\n", i);

    for (int j = 0; j <= i; j++) {
        if (estaEmMQ(j, i + 1)) {
            printf("[%d, %d] ", j, i + 1);
        }
    }

    printf("\n");

    return 0;
}

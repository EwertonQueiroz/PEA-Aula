#include <stdio.h>
#include <stdlib.h>

// Torre de Hanói
int num_discos = 0;
int num_movimentos = 0;

// Algoritmo de Euclides
int valor1 = -2;
int valor2 = -1;

void Transfere (int tamanho, char origem, char destino, char auxiliar);
int MDC (int minuendo, int subtraendo);

int main() {
    /** Torre de Hanói

    while (num_discos == 0) {
        printf("Digite o numero de discos:\n");
        scanf("%d", &num_discos);
    }

    Transfere (num_discos, 'A', 'C', 'B');
    printf("Numero total de movimentos: %d\n\n", num_movimentos);

    //*/

    /** Algoritmo de Euclides
    while (valor1 < valor2) {
        printf("Infome o primeiro valor:\n");
        scanf("%d", &valor1);

        printf("\nInforme o segundo valor:\n");
        scanf("%d", &valor2);

        printf("\n");
    }

    printf("MDC = %d\n", MDC (valor1, valor2));
    //*/

    return 0;
}

void Transfere (int tamanho, char origem, char destino, char auxiliar) {
    if (tamanho == 1) {
        num_movimentos++;
        printf ("%d - Mova de %c para %c\n", num_movimentos, origem, destino);
    }

    else {
        Transfere (tamanho - 1, origem, auxiliar, destino);
        num_movimentos++;
        printf ("%d - Mova de %c para %c\n", num_movimentos, origem, destino);
        Transfere (tamanho - 1, auxiliar, destino, origem);
    }
}

int MDC (int minuendo, int subtraendo) {
    int resto;

    if (subtraendo == 0) {
        return minuendo;
    }

    resto = minuendo % subtraendo;

    return MDC (subtraendo, resto);
}

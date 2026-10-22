#include <stdio.h>

int main() {
    int n[100], i, j, aux;

    printf("Digite 100 numeros inteiros:\n");

    for (i = 0; i < 100; i++) {
        scanf("%d", &n[i]);
    }

    for (i = 0; i < 100; i++) {
        for (j = i + 1; j < 100; j++) {
            if (n[i] < n[j]) {
                aux = n[i];
                n[i] = n[j];
                n[j] = aux;
            }
        }
    }

    printf("\nNumeros do maior para o menor:\n");

    for (i = 0; i < 100; i++) {
        printf("%d\n", n[i]);
    }

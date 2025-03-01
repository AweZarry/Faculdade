#include <stdio.h>

int main() {
    int numero[10];
    int soma;
    for(int i = 0; i < 10; i++) {
        printf("\nDigite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nOs números digitados foram: ");
    for(int i = 0; i < 10; i++) {
        soma = soma + numero[i];
    }
    printf("\nSoma dos números: %d\n", soma);
    printf("\n");

    return 0;
}

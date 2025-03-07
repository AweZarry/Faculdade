#include <stdio.h>

int main() {
    int numero[5];

    for(int i = 0; i < 5; i++) {
        printf("\nDigite o %dº número: ", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nOs números digitados foram: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", numero[i]);
    }
    printf("\n");

    return 0;
}

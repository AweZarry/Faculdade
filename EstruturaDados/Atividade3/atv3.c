#include <stdio.h>

int main()
{
    float numero[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %dº número real: ", i + 1);
        scanf("%f", &numero[i]);
    }

    float maior = numero[0];
    float menor = numero[0];

    for(int i = 1; i < 5; i++) {
        if (numero[i] > maior) {
            maior = numero[i];
        }
        if (numero[i] < menor) {
            menor = numero[i];
        }
    }

    printf("\nO maior número no vetor é: %.2f\n", maior);
    printf("O menor número no vetor é: %.2f\n", menor);

    return 0;
}
